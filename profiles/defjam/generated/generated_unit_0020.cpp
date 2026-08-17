#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0020[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0,
    0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0,
    0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 88,
    0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 99, 0, 100, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 111, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126,
    127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 135, 0, 136, 0, 0, 137, 0, 0, 138,
    0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0,
    0, 147, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 153, 0, 0, 0, 154, 0,
    0, 0, 155, 0, 156, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162,
    0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 177, 178, 0,
    0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 190,
    0, 0, 191, 0, 0, 192, 0, 193, 0, 194, 195, 0, 196, 0, 197, 198, 0, 199, 0, 0, 0, 0, 200, 201, 0, 202, 0, 0, 0, 203, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0,
    0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0,
    226, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0,
    0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244,
    0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 279, 0, 280, 0, 281, 0, 0, 282,
    0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0,
    0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0,
    331, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339,
    0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0,
    346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 366, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0,
    369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0,
    0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 396, 397, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0,
    0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 420, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 436, 0, 0, 437, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0,
    0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453,
    0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 0,
    0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 465, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0,
    0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0,
    0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0,
    499, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 507,
    0, 0, 0, 508, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 515,
    0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0,
    0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 0, 532,
    0, 533, 0, 534, 0, 0, 0, 535, 536, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0,
    543, 0, 544, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550, 0, 551, 0, 552, 0, 553, 0, 0, 554, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0,
    0, 562, 0, 563, 0, 0, 0, 0, 0, 564, 0, 565, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0,
    0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 577,
    0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0,
    589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0,
    0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 601, 0,
    0, 602, 0, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0,
    0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0,
    0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0,
    0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0,
    0, 630, 0, 0, 0, 0, 631, 0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0,
    0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0,
    648, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 655,
    0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0,
    666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0,
    0, 675, 0, 0, 676, 0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 688, 0, 0, 0,
    0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 691, 692, 0, 693, 0, 0, 0, 0, 0, 694, 695, 0, 0, 696, 0, 697, 0, 698, 0, 699, 0,
    0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 711, 0, 712, 0, 0,
    0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 716, 0, 0, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 720, 0, 0, 721, 0, 722, 0,
    723, 0, 724, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 0, 732, 0, 733, 734, 735,
    0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0,
    0, 0, 749, 0, 750, 0, 751, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 761, 0, 762,
    0, 0, 763, 0, 764, 765, 0, 0, 766, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 0, 773, 0,
    0, 774, 775, 0, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0,
    0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 0, 790, 0, 791, 792, 0, 0, 0, 793,
};
void recomp_unit_0020_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08854000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0020[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08854000;
    case 2u: goto L_08854050;
    case 3u: goto L_0885408C;
    case 4u: goto L_088540C0;
    case 5u: goto L_088540F8;
    case 6u: goto L_0885412C;
    case 7u: goto L_08854164;
    case 8u: goto L_0885417C;
    case 9u: goto L_088541A0;
    case 10u: goto L_088541B0;
    case 11u: goto L_088541B8;
    case 12u: goto L_088541D0;
    case 13u: goto L_088541E4;
    case 14u: goto L_08854204;
    case 15u: goto L_0885422C;
    case 16u: goto L_08854234;
    case 17u: goto L_0885424C;
    case 18u: goto L_08854254;
    case 19u: goto L_0885426C;
    case 20u: goto L_088542AC;
    case 21u: goto L_088542C8;
    case 22u: goto L_088542EC;
    case 23u: goto L_08854328;
    case 24u: goto L_0885433C;
    case 25u: goto L_0885434C;
    case 26u: goto L_08854360;
    case 27u: goto L_08854378;
    case 28u: goto L_08854388;
    case 29u: goto L_088543B0;
    case 30u: goto L_088543C4;
    case 31u: goto L_088543F0;
    case 32u: goto L_08854418;
    case 33u: goto L_08854420;
    case 34u: goto L_08854438;
    case 35u: goto L_0885444C;
    case 36u: goto L_08854464;
    case 37u: goto L_08854484;
    case 38u: goto L_088544E8;
    case 39u: goto L_088544F4;
    case 40u: goto L_08854564;
    case 41u: goto L_0885456C;
    case 42u: goto L_08854574;
    case 43u: goto L_08854588;
    case 44u: goto L_08854590;
    case 45u: goto L_0885459C;
    case 46u: goto L_088545A4;
    case 47u: goto L_088545B8;
    case 48u: goto L_088545C0;
    case 49u: goto L_088545C8;
    case 50u: goto L_088545DC;
    case 51u: goto L_0885460C;
    case 52u: goto L_0885462C;
    case 53u: goto L_0885463C;
    case 54u: goto L_0885464C;
    case 55u: goto L_08854664;
    case 56u: goto L_08854688;
    case 57u: goto L_088546A4;
    case 58u: goto L_088546D4;
    case 59u: goto L_088546E4;
    case 60u: goto L_08854700;
    case 61u: goto L_08854718;
    case 62u: goto L_08854730;
    case 63u: goto L_08854750;
    case 64u: goto L_0885475C;
    case 65u: goto L_08854764;
    case 66u: goto L_08854770;
    case 67u: goto L_08854778;
    case 68u: goto L_08854784;
    case 69u: goto L_0885479C;
    case 70u: goto L_088547A8;
    case 71u: goto L_088547D0;
    case 72u: goto L_088547F0;
    case 73u: goto L_088548C4;
    case 74u: goto L_088548D8;
    case 75u: goto L_088548F4;
    case 76u: goto L_0885491C;
    case 77u: goto L_08854930;
    case 78u: goto L_08854950;
    case 79u: goto L_08854968;
    case 80u: goto L_08854980;
    case 81u: goto L_0885499C;
    case 82u: goto L_088549C0;
    case 83u: goto L_088549CC;
    case 84u: goto L_088549D4;
    case 85u: goto L_088549E0;
    case 86u: goto L_088549EC;
    case 87u: goto L_088549F8;
    case 88u: goto L_088549FC;
    case 89u: goto L_08854A04;
    case 90u: goto L_08854A0C;
    case 91u: goto L_08854A54;
    case 92u: goto L_08854A64;
    case 93u: goto L_08854A84;
    case 94u: goto L_08854A90;
    case 95u: goto L_08854A98;
    case 96u: goto L_08854AA4;
    case 97u: goto L_08854AB0;
    case 98u: goto L_08854ABC;
    case 99u: goto L_08854AC0;
    case 100u: goto L_08854AC8;
    case 101u: goto L_08854AD0;
    case 102u: goto L_08854ADC;
    case 103u: goto L_08854B18;
    case 104u: goto L_08854B34;
    case 105u: goto L_08854B54;
    case 106u: goto L_08854B94;
    case 107u: goto L_08854BA4;
    case 108u: goto L_08854BB0;
    case 109u: goto L_08854BB8;
    case 110u: goto L_08854BC4;
    case 111u: goto L_08854BD0;
    case 112u: goto L_08854BD4;
    case 113u: goto L_08854BE0;
    case 114u: goto L_08854C08;
    case 115u: goto L_08854C30;
    case 116u: goto L_08854C38;
    case 117u: goto L_08854C50;
    case 118u: goto L_08854C64;
    case 119u: goto L_08854C84;
    case 120u: goto L_08854CAC;
    case 121u: goto L_08854CBC;
    case 122u: goto L_08854CC8;
    case 123u: goto L_08854CD4;
    case 124u: goto L_08854CDC;
    case 125u: goto L_08854CE8;
    case 126u: goto L_08854CFC;
    case 127u: goto L_08854D00;
    case 128u: goto L_08854D0C;
    case 129u: goto L_08854D18;
    case 130u: goto L_08854D2C;
    case 131u: goto L_08854D38;
    case 132u: goto L_08854D48;
    case 133u: goto L_08854D50;
    case 134u: goto L_08854D58;
    case 135u: goto L_08854D5C;
    case 136u: goto L_08854D64;
    case 137u: goto L_08854D70;
    case 138u: goto L_08854D7C;
    case 139u: goto L_08854D84;
    case 140u: goto L_08854D98;
    case 141u: goto L_08854DA0;
    case 142u: goto L_08854DB4;
    case 143u: goto L_08854DBC;
    case 144u: goto L_08854DD0;
    case 145u: goto L_08854DE4;
    case 146u: goto L_08854DF4;
    case 147u: goto L_08854E04;
    case 148u: goto L_08854E08;
    case 149u: goto L_08854E14;
    case 150u: goto L_08854E30;
    case 151u: goto L_08854E58;
    case 152u: goto L_08854E64;
    case 153u: goto L_08854E68;
    case 154u: goto L_08854E78;
    case 155u: goto L_08854E88;
    case 156u: goto L_08854E90;
    case 157u: goto L_08854E94;
    case 158u: goto L_08854EA4;
    case 159u: goto L_08854EB4;
    case 160u: goto L_08854ECC;
    case 161u: goto L_08854EE8;
    case 162u: goto L_08854EFC;
    case 163u: goto L_08854F04;
    case 164u: goto L_08854F14;
    case 165u: goto L_08854F2C;
    case 166u: goto L_08854F40;
    case 167u: goto L_08854F54;
    case 168u: goto L_08854F78;
    case 169u: goto L_08854FA4;
    case 170u: goto L_08854FAC;
    case 171u: goto L_08854FBC;
    case 172u: goto L_08854FC8;
    case 173u: goto L_08854FD0;
    case 174u: goto L_08854FD8;
    case 175u: goto L_08854FE0;
    case 176u: goto L_08854FEC;
    case 177u: goto L_08854FF4;
    case 178u: goto L_08854FF8;
    case 179u: goto L_08855004;
    case 180u: goto L_08855010;
    case 181u: goto L_08855018;
    case 182u: goto L_08855024;
    case 183u: goto L_08855028;
    case 184u: goto L_08855030;
    case 185u: goto L_08855040;
    case 186u: goto L_08855050;
    case 187u: goto L_08855058;
    case 188u: goto L_08855060;
    case 189u: goto L_08855070;
    case 190u: goto L_0885507C;
    case 191u: goto L_08855088;
    case 192u: goto L_08855094;
    case 193u: goto L_0885509C;
    case 194u: goto L_088550A4;
    case 195u: goto L_088550A8;
    case 196u: goto L_088550B0;
    case 197u: goto L_088550B8;
    case 198u: goto L_088550BC;
    case 199u: goto L_088550C4;
    case 200u: goto L_088550D8;
    case 201u: goto L_088550DC;
    case 202u: goto L_088550E4;
    case 203u: goto L_088550F4;
    case 204u: goto L_08855104;
    case 205u: goto L_08855120;
    case 206u: goto L_08855148;
    case 207u: goto L_08855154;
    case 208u: goto L_0885515C;
    case 209u: goto L_08855164;
    case 210u: goto L_08855174;
    case 211u: goto L_08855184;
    case 212u: goto L_08855194;
    case 213u: goto L_0885519C;
    case 214u: goto L_088551A4;
    case 215u: goto L_088551AC;
    case 216u: goto L_088551BC;
    case 217u: goto L_088551CC;
    case 218u: goto L_088551DC;
    case 219u: goto L_088551F4;
    case 220u: goto L_08855234;
    case 221u: goto L_08855250;
    case 222u: goto L_08855290;
    case 223u: goto L_088552CC;
    case 224u: goto L_088552DC;
    case 225u: goto L_088552E4;
    case 226u: goto L_08855300;
    case 227u: goto L_08855304;
    case 228u: goto L_08855310;
    case 229u: goto L_0885533C;
    case 230u: goto L_08855368;
    case 231u: goto L_08855374;
    case 232u: goto L_08855388;
    case 233u: goto L_08855394;
    case 234u: goto L_0885539C;
    case 235u: goto L_088553B0;
    case 236u: goto L_088553BC;
    case 237u: goto L_088553C8;
    case 238u: goto L_088553EC;
    case 239u: goto L_0885540C;
    case 240u: goto L_0885541C;
    case 241u: goto L_0885542C;
    case 242u: goto L_08855444;
    case 243u: goto L_08855474;
    case 244u: goto L_0885547C;
    case 245u: goto L_08855484;
    case 246u: goto L_08855490;
    case 247u: goto L_08855498;
    case 248u: goto L_088554A0;
    case 249u: goto L_088554B0;
    case 250u: goto L_088554C4;
    case 251u: goto L_088554DC;
    case 252u: goto L_08855500;
    case 253u: goto L_0885557C;
    case 254u: goto L_08855590;
    case 255u: goto L_08855598;
    case 256u: goto L_088555A4;
    case 257u: goto L_088555AC;
    case 258u: goto L_088555C8;
    case 259u: goto L_08855604;
    case 260u: goto L_08855648;
    case 261u: goto L_08855688;
    case 262u: goto L_08855698;
    case 263u: goto L_088556A0;
    case 264u: goto L_088556A8;
    case 265u: goto L_088556B0;
    case 266u: goto L_088556B4;
    case 267u: goto L_088556C4;
    case 268u: goto L_088556D0;
    case 269u: goto L_088556E4;
    case 270u: goto L_08855724;
    case 271u: goto L_0885573C;
    case 272u: goto L_0885574C;
    case 273u: goto L_0885578C;
    case 274u: goto L_088557B4;
    case 275u: goto L_088557C4;
    case 276u: goto L_088557CC;
    case 277u: goto L_088557D4;
    case 278u: goto L_088557DC;
    case 279u: goto L_088557E0;
    case 280u: goto L_088557E8;
    case 281u: goto L_088557F0;
    case 282u: goto L_088557FC;
    case 283u: goto L_08855808;
    case 284u: goto L_08855810;
    case 285u: goto L_0885582C;
    case 286u: goto L_08855854;
    case 287u: goto L_0885585C;
    case 288u: goto L_08855874;
    case 289u: goto L_08855888;
    case 290u: goto L_0885589C;
    case 291u: goto L_088558B0;
    case 292u: goto L_088558D0;
    case 293u: goto L_08855954;
    case 294u: goto L_08855960;
    case 295u: goto L_08855970;
    case 296u: goto L_08855988;
    case 297u: goto L_088559A4;
    case 298u: goto L_088559B0;
    case 299u: goto L_088559D0;
    case 300u: goto L_088559EC;
    case 301u: goto L_088559FC;
    case 302u: goto L_08855A1C;
    case 303u: goto L_08855A34;
    case 304u: goto L_08855A3C;
    case 305u: goto L_08855A74;
    case 306u: goto L_08855AAC;
    case 307u: goto L_08855AB4;
    case 308u: goto L_08855AC8;
    case 309u: goto L_08855AF0;
    case 310u: goto L_08855B20;
    case 311u: goto L_08855B50;
    case 312u: goto L_08855B7C;
    case 313u: goto L_08855BA4;
    case 314u: goto L_08855BAC;
    case 315u: goto L_08855BBC;
    case 316u: goto L_08855C18;
    case 317u: goto L_08855C3C;
    case 318u: goto L_08855C48;
    case 319u: goto L_08855C5C;
    case 320u: goto L_08855C68;
    case 321u: goto L_08855C78;
    case 322u: goto L_08855C84;
    case 323u: goto L_08855C8C;
    case 324u: goto L_08855C94;
    case 325u: goto L_08855C9C;
    case 326u: goto L_08855CAC;
    case 327u: goto L_08855CB8;
    case 328u: goto L_08855CC0;
    case 329u: goto L_08855CD8;
    case 330u: goto L_08855CF8;
    case 331u: goto L_08855D00;
    case 332u: goto L_08855D10;
    case 333u: goto L_08855D18;
    case 334u: goto L_08855D20;
    case 335u: goto L_08855D28;
    case 336u: goto L_08855D40;
    case 337u: goto L_08855D58;
    case 338u: goto L_08855D70;
    case 339u: goto L_08855D7C;
    case 340u: goto L_08855D84;
    case 341u: goto L_08855D8C;
    case 342u: goto L_08855DC4;
    case 343u: goto L_08855DD0;
    case 344u: goto L_08855DDC;
    case 345u: goto L_08855DF8;
    case 346u: goto L_08855E00;
    case 347u: goto L_08855E08;
    case 348u: goto L_08855E3C;
    case 349u: goto L_08855E44;
    case 350u: goto L_08855E4C;
    case 351u: goto L_08855E5C;
    case 352u: goto L_08855E80;
    case 353u: goto L_08855E8C;
    case 354u: goto L_08855E94;
    case 355u: goto L_08855EB8;
    case 356u: goto L_08855EC4;
    case 357u: goto L_08855ED4;
    case 358u: goto L_08855EE0;
    case 359u: goto L_08855F04;
    case 360u: goto L_08855F0C;
    case 361u: goto L_08855F2C;
    case 362u: goto L_08855F34;
    case 363u: goto L_08855F3C;
    case 364u: goto L_08855F44;
    case 365u: goto L_08855F4C;
    case 366u: goto L_08855F50;
    case 367u: goto L_08855F6C;
    case 368u: goto L_08855F74;
    case 369u: goto L_08855F80;
    case 370u: goto L_08855F88;
    case 371u: goto L_08855FC0;
    case 372u: goto L_08855FC8;
    case 373u: goto L_08855FDC;
    case 374u: goto L_0885600C;
    case 375u: goto L_08856018;
    case 376u: goto L_08856020;
    case 377u: goto L_08856028;
    case 378u: goto L_08856034;
    case 379u: goto L_0885603C;
    case 380u: goto L_08856044;
    case 381u: goto L_08856054;
    case 382u: goto L_0885605C;
    case 383u: goto L_08856064;
    case 384u: goto L_0885606C;
    case 385u: goto L_08856084;
    case 386u: goto L_0885608C;
    case 387u: goto L_088560A0;
    case 388u: goto L_088560A8;
    case 389u: goto L_088560B0;
    case 390u: goto L_088560B8;
    case 391u: goto L_088560C0;
    case 392u: goto L_088560CC;
    case 393u: goto L_088560D4;
    case 394u: goto L_088560E0;
    case 395u: goto L_088560E8;
    case 396u: goto L_088560F0;
    case 397u: goto L_088560F4;
    case 398u: goto L_0885611C;
    case 399u: goto L_08856128;
    case 400u: goto L_08856134;
    case 401u: goto L_08856150;
    case 402u: goto L_08856158;
    case 403u: goto L_0885618C;
    case 404u: goto L_088561A0;
    case 405u: goto L_08856220;
    case 406u: goto L_08856234;
    case 407u: goto L_0885624C;
    case 408u: goto L_08856264;
    case 409u: goto L_0885626C;
    case 410u: goto L_08856274;
    case 411u: goto L_08856284;
    case 412u: goto L_088562AC;
    case 413u: goto L_088562B8;
    case 414u: goto L_088562C0;
    case 415u: goto L_088562C8;
    case 416u: goto L_088562DC;
    case 417u: goto L_088562E8;
    case 418u: goto L_08856308;
    case 419u: goto L_08856324;
    case 420u: goto L_08856328;
    case 421u: goto L_08856338;
    case 422u: goto L_08856340;
    case 423u: goto L_08856348;
    case 424u: goto L_0885636C;
    case 425u: goto L_08856378;
    case 426u: goto L_08856388;
    case 427u: goto L_088563A0;
    case 428u: goto L_088563B8;
    case 429u: goto L_088563C0;
    case 430u: goto L_088563CC;
    case 431u: goto L_088563D4;
    case 432u: goto L_088563DC;
    case 433u: goto L_088563EC;
    case 434u: goto L_08856418;
    case 435u: goto L_08856430;
    case 436u: goto L_08856434;
    case 437u: goto L_08856440;
    case 438u: goto L_08856444;
    case 439u: goto L_08856458;
    case 440u: goto L_08856460;
    case 441u: goto L_08856484;
    case 442u: goto L_088564A0;
    case 443u: goto L_088564AC;
    case 444u: goto L_088564BC;
    case 445u: goto L_088564E8;
    case 446u: goto L_088564F0;
    case 447u: goto L_088564F8;
    case 448u: goto L_08856508;
    case 449u: goto L_08856528;
    case 450u: goto L_08856534;
    case 451u: goto L_08856544;
    case 452u: goto L_0885655C;
    case 453u: goto L_0885657C;
    case 454u: goto L_08856588;
    case 455u: goto L_088565C4;
    case 456u: goto L_088565CC;
    case 457u: goto L_088565D8;
    case 458u: goto L_088565E0;
    case 459u: goto L_088565F4;
    case 460u: goto L_08856604;
    case 461u: goto L_08856610;
    case 462u: goto L_08856620;
    case 463u: goto L_08856628;
    case 464u: goto L_08856634;
    case 465u: goto L_08856640;
    case 466u: goto L_08856644;
    case 467u: goto L_08856668;
    case 468u: goto L_08856694;
    case 469u: goto L_088566EC;
    case 470u: goto L_088566F8;
    case 471u: goto L_08856730;
    case 472u: goto L_08856770;
    case 473u: goto L_0885677C;
    case 474u: goto L_088567BC;
    case 475u: goto L_088567C4;
    case 476u: goto L_08856804;
    case 477u: goto L_0885683C;
    case 478u: goto L_08856858;
    case 479u: goto L_08856864;
    case 480u: goto L_08856874;
    case 481u: goto L_08856890;
    case 482u: goto L_088568A0;
    case 483u: goto L_088568AC;
    case 484u: goto L_088568D0;
    case 485u: goto L_088568E8;
    case 486u: goto L_08856910;
    case 487u: goto L_0885692C;
    case 488u: goto L_08856950;
    case 489u: goto L_08856964;
    case 490u: goto L_08856970;
    case 491u: goto L_08856984;
    case 492u: goto L_0885698C;
    case 493u: goto L_08856998;
    case 494u: goto L_088569A0;
    case 495u: goto L_088569B4;
    case 496u: goto L_088569BC;
    case 497u: goto L_088569D0;
    case 498u: goto L_088569F0;
    case 499u: goto L_08856A00;
    case 500u: goto L_08856A08;
    case 501u: goto L_08856A18;
    case 502u: goto L_08856A2C;
    case 503u: goto L_08856A4C;
    case 504u: goto L_08856A58;
    case 505u: goto L_08856A68;
    case 506u: goto L_08856A70;
    case 507u: goto L_08856A7C;
    case 508u: goto L_08856A8C;
    case 509u: goto L_08856A94;
    case 510u: goto L_08856AA0;
    case 511u: goto L_08856AD0;
    case 512u: goto L_08856AE0;
    case 513u: goto L_08856AEC;
    case 514u: goto L_08856AF4;
    case 515u: goto L_08856AFC;
    case 516u: goto L_08856B04;
    case 517u: goto L_08856B1C;
    case 518u: goto L_08856B38;
    case 519u: goto L_08856B40;
    case 520u: goto L_08856B4C;
    case 521u: goto L_08856B54;
    case 522u: goto L_08856B60;
    case 523u: goto L_08856B78;
    case 524u: goto L_08856B88;
    case 525u: goto L_08856B90;
    case 526u: goto L_08856B98;
    case 527u: goto L_08856BB8;
    case 528u: goto L_08856BC4;
    case 529u: goto L_08856BD4;
    case 530u: goto L_08856BE4;
    case 531u: goto L_08856BEC;
    case 532u: goto L_08856BFC;
    case 533u: goto L_08856C04;
    case 534u: goto L_08856C0C;
    case 535u: goto L_08856C1C;
    case 536u: goto L_08856C20;
    case 537u: goto L_08856C24;
    case 538u: goto L_08856C30;
    case 539u: goto L_08856C4C;
    case 540u: goto L_08856C5C;
    case 541u: goto L_08856C68;
    case 542u: goto L_08856C78;
    case 543u: goto L_08856C80;
    case 544u: goto L_08856C88;
    case 545u: goto L_08856C90;
    case 546u: goto L_08856C98;
    case 547u: goto L_08856CA8;
    case 548u: goto L_08856CB4;
    case 549u: goto L_08856CC8;
    case 550u: goto L_08856CD4;
    case 551u: goto L_08856CDC;
    case 552u: goto L_08856CE4;
    case 553u: goto L_08856CEC;
    case 554u: goto L_08856CF8;
    case 555u: goto L_08856D2C;
    case 556u: goto L_08856D34;
    case 557u: goto L_08856D3C;
    case 558u: goto L_08856D44;
    case 559u: goto L_08856D4C;
    case 560u: goto L_08856D54;
    case 561u: goto L_08856D70;
    case 562u: goto L_08856D84;
    case 563u: goto L_08856D8C;
    case 564u: goto L_08856DA4;
    case 565u: goto L_08856DAC;
    case 566u: goto L_08856DB0;
    case 567u: goto L_08856DC0;
    case 568u: goto L_08856DC8;
    case 569u: goto L_08856DD8;
    case 570u: goto L_08856DF8;
    case 571u: goto L_08856E10;
    case 572u: goto L_08856E24;
    case 573u: goto L_08856E38;
    case 574u: goto L_08856E4C;
    case 575u: goto L_08856E5C;
    case 576u: goto L_08856E6C;
    case 577u: goto L_08856E7C;
    case 578u: goto L_08856E8C;
    case 579u: goto L_08856EA0;
    case 580u: goto L_08856EBC;
    case 581u: goto L_08856F18;
    case 582u: goto L_08856F44;
    case 583u: goto L_08856FA0;
    case 584u: goto L_08856FAC;
    case 585u: goto L_08856FB4;
    case 586u: goto L_08856FD0;
    case 587u: goto L_08856FE4;
    case 588u: goto L_08856FEC;
    case 589u: goto L_08857000;
    case 590u: goto L_08857014;
    case 591u: goto L_0885704C;
    case 592u: goto L_0885705C;
    case 593u: goto L_08857064;
    case 594u: goto L_08857084;
    case 595u: goto L_08857098;
    case 596u: goto L_088570B4;
    case 597u: goto L_088570C0;
    case 598u: goto L_088570D4;
    case 599u: goto L_088570E0;
    case 600u: goto L_088570E8;
    case 601u: goto L_088570F8;
    case 602u: goto L_08857104;
    case 603u: goto L_08857114;
    case 604u: goto L_0885711C;
    case 605u: goto L_08857124;
    case 606u: goto L_08857134;
    case 607u: goto L_08857144;
    case 608u: goto L_088571A4;
    case 609u: goto L_088571C0;
    case 610u: goto L_08857268;
    case 611u: goto L_08857284;
    case 612u: goto L_08857294;
    case 613u: goto L_08857304;
    case 614u: goto L_08857310;
    case 615u: goto L_08857370;
    case 616u: goto L_08857394;
    case 617u: goto L_088573B4;
    case 618u: goto L_088573BC;
    case 619u: goto L_088573D4;
    case 620u: goto L_088573E4;
    case 621u: goto L_088573F4;
    case 622u: goto L_08857488;
    case 623u: goto L_088574B0;
    case 624u: goto L_088574B8;
    case 625u: goto L_088574D0;
    case 626u: goto L_088574E4;
    case 627u: goto L_08857504;
    case 628u: goto L_08857560;
    case 629u: goto L_08857578;
    case 630u: goto L_08857584;
    case 631u: goto L_08857598;
    case 632u: goto L_088575A4;
    case 633u: goto L_088575AC;
    case 634u: goto L_088575BC;
    case 635u: goto L_088575F4;
    case 636u: goto L_08857618;
    case 637u: goto L_08857630;
    case 638u: goto L_0885763C;
    case 639u: goto L_08857668;
    case 640u: goto L_08857694;
    case 641u: goto L_088576BC;
    case 642u: goto L_088576C4;
    case 643u: goto L_088576DC;
    case 644u: goto L_08857704;
    case 645u: goto L_08857734;
    case 646u: goto L_08857768;
    case 647u: goto L_08857774;
    case 648u: goto L_08857780;
    case 649u: goto L_0885778C;
    case 650u: goto L_0885779C;
    case 651u: goto L_088577AC;
    case 652u: goto L_088577C8;
    case 653u: goto L_088577E4;
    case 654u: goto L_088577F0;
    case 655u: goto L_088577FC;
    case 656u: goto L_08857804;
    case 657u: goto L_08857810;
    case 658u: goto L_08857844;
    case 659u: goto L_08857890;
    case 660u: goto L_08857898;
    case 661u: goto L_088578AC;
    case 662u: goto L_088578B8;
    case 663u: goto L_088578C8;
    case 664u: goto L_088578D8;
    case 665u: goto L_088578F4;
    case 666u: goto L_08857900;
    case 667u: goto L_08857910;
    case 668u: goto L_08857920;
    case 669u: goto L_08857930;
    case 670u: goto L_08857940;
    case 671u: goto L_0885794C;
    case 672u: goto L_0885795C;
    case 673u: goto L_08857968;
    case 674u: goto L_08857974;
    case 675u: goto L_08857984;
    case 676u: goto L_08857990;
    case 677u: goto L_08857998;
    case 678u: goto L_088579A4;
    case 679u: goto L_088579B4;
    case 680u: goto L_088579C4;
    case 681u: goto L_088579D4;
    case 682u: goto L_088579DC;
    case 683u: goto L_088579EC;
    case 684u: goto L_08857A1C;
    case 685u: goto L_08857A54;
    case 686u: goto L_08857A5C;
    case 687u: goto L_08857A64;
    case 688u: goto L_08857A70;
    case 689u: goto L_08857A8C;
    case 690u: goto L_08857AA0;
    case 691u: goto L_08857AAC;
    case 692u: goto L_08857AB0;
    case 693u: goto L_08857AB8;
    case 694u: goto L_08857AD0;
    case 695u: goto L_08857AD4;
    case 696u: goto L_08857AE0;
    case 697u: goto L_08857AE8;
    case 698u: goto L_08857AF0;
    case 699u: goto L_08857AF8;
    case 700u: goto L_08857B0C;
    case 701u: goto L_08857B20;
    case 702u: goto L_08857B38;
    case 703u: goto L_08857B44;
    case 704u: goto L_08857B68;
    case 705u: goto L_08857B98;
    case 706u: goto L_08857BA0;
    case 707u: goto L_08857BA8;
    case 708u: goto L_08857BB0;
    case 709u: goto L_08857BD0;
    case 710u: goto L_08857BDC;
    case 711u: goto L_08857BEC;
    case 712u: goto L_08857BF4;
    case 713u: goto L_08857C04;
    case 714u: goto L_08857C20;
    case 715u: goto L_08857C28;
    case 716u: goto L_08857C30;
    case 717u: goto L_08857C40;
    case 718u: goto L_08857C48;
    case 719u: goto L_08857C50;
    case 720u: goto L_08857C64;
    case 721u: goto L_08857C70;
    case 722u: goto L_08857C78;
    case 723u: goto L_08857C80;
    case 724u: goto L_08857C88;
    case 725u: goto L_08857C94;
    case 726u: goto L_08857CA4;
    case 727u: goto L_08857CB4;
    case 728u: goto L_08857CC4;
    case 729u: goto L_08857CCC;
    case 730u: goto L_08857CD4;
    case 731u: goto L_08857CDC;
    case 732u: goto L_08857CEC;
    case 733u: goto L_08857CF4;
    case 734u: goto L_08857CF8;
    case 735u: goto L_08857CFC;
    case 736u: goto L_08857D04;
    case 737u: goto L_08857D0C;
    case 738u: goto L_08857D14;
    case 739u: goto L_08857D1C;
    case 740u: goto L_08857D24;
    case 741u: goto L_08857D2C;
    case 742u: goto L_08857D34;
    case 743u: goto L_08857D3C;
    case 744u: goto L_08857D44;
    case 745u: goto L_08857D50;
    case 746u: goto L_08857D58;
    case 747u: goto L_08857D68;
    case 748u: goto L_08857D78;
    case 749u: goto L_08857D88;
    case 750u: goto L_08857D90;
    case 751u: goto L_08857D98;
    case 752u: goto L_08857DA0;
    case 753u: goto L_08857DA8;
    case 754u: goto L_08857DCC;
    case 755u: goto L_08857E00;
    case 756u: goto L_08857E08;
    case 757u: goto L_08857E18;
    case 758u: goto L_08857E3C;
    case 759u: goto L_08857E54;
    case 760u: goto L_08857E68;
    case 761u: goto L_08857E74;
    case 762u: goto L_08857E7C;
    case 763u: goto L_08857E88;
    case 764u: goto L_08857E90;
    case 765u: goto L_08857E94;
    case 766u: goto L_08857EA0;
    case 767u: goto L_08857EA8;
    case 768u: goto L_08857EBC;
    case 769u: goto L_08857ED0;
    case 770u: goto L_08857ED8;
    case 771u: goto L_08857EE0;
    case 772u: goto L_08857EEC;
    case 773u: goto L_08857EF8;
    case 774u: goto L_08857F04;
    case 775u: goto L_08857F08;
    case 776u: goto L_08857F14;
    case 777u: goto L_08857F24;
    case 778u: goto L_08857F30;
    case 779u: goto L_08857F3C;
    case 780u: goto L_08857F44;
    case 781u: goto L_08857F54;
    case 782u: goto L_08857F5C;
    case 783u: goto L_08857F68;
    case 784u: goto L_08857F88;
    case 785u: goto L_08857FA0;
    case 786u: goto L_08857FA8;
    case 787u: goto L_08857FBC;
    case 788u: goto L_08857FC4;
    case 789u: goto L_08857FCC;
    case 790u: goto L_08857FD8;
    case 791u: goto L_08857FE0;
    case 792u: goto L_08857FE4;
    case 793u: goto L_08857FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08854000:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08854050u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08854050u) goto L_08854050;
    return;
L_08854050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17320u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0885408Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0885408Cu) goto L_0885408C;
    return;
L_0885408C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17319u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x088540C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088540C0u) goto L_088540C0;
    return;
L_088540C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17357u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x088540F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088540F8u) goto L_088540F8;
    return;
L_088540F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0885412Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0885412Cu) goto L_0885412C;
    return;
L_0885412C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17287u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x08854164u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x08854164u) goto L_08854164;
    return;
L_08854164:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885417C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088541A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088541A0u) goto L_088541A0;
    return;
L_088541A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (0u | 92u);
    goto L_088541B0;
L_088541B0:
    ctx.gpr[31] = (0x088541B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088541B8u) goto L_088541B8;
    return;
L_088541B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_088541B0;
      }
      goto L_088541D0;
    }
L_088541D0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088541E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088541E4u) goto L_088541E4;
    return;
L_088541E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
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
L_08854204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (0u | 92u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0885422C;
L_0885422C:
    ctx.gpr[31] = (0x08854234u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x08854234u) goto L_08854234;
    return;
L_08854234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0885422C;
      }
      goto L_0885424C;
    }
L_0885424C:
    ctx.gpr[31] = (0x08854254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08854254u) goto L_08854254;
    return;
L_08854254:
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
L_0885426C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088542ACu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088542ACu) goto L_088542AC;
    return;
L_088542AC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088542C8u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088542C8u) goto L_088542C8;
    return;
L_088542C8:
    ctx.gpr[4] = (17325u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17212u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16904u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    goto L_088542EC;
L_088542EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x08854328u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 106u, 0x08838C48u>(ctx, &aot_mem) && ctx.pc == 0x08854328u) goto L_08854328;
    return;
L_08854328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x0885433Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 118u, 0x08838ED0u>(ctx, &aot_mem) && ctx.pc == 0x0885433Cu) goto L_0885433C;
    return;
L_0885433C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088542EC;
      }
      goto L_0885434C;
    }
L_0885434C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08854360u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854360u) goto L_08854360;
    return;
L_08854360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08854378u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08854378u) goto L_08854378;
    return;
L_08854378:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08854388;
L_08854388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (0x088543B0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x088543B0u) goto L_088543B0;
    return;
L_088543B0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08854388;
      }
      goto L_088543C4;
    }
L_088543C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088543F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08854418;
L_08854418:
    ctx.gpr[31] = (0x08854420u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 116u, 0x08838EB4u>(ctx, &aot_mem) && ctx.pc == 0x08854420u) goto L_08854420;
    return;
L_08854420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_08854418;
      }
      goto L_08854438;
    }
L_08854438:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885444Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885444Cu) goto L_0885444C;
    return;
L_0885444C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08854464u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854464u) goto L_08854464;
    return;
L_08854464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
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
L_08854484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (17325u << 16u);
    ctx.gpr[5] = (17212u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    goto L_088544E8;
L_088544E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (0x088544F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x088544F4u) goto L_088544F4;
    return;
L_088544F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088544E8;
      }
      goto L_08854564;
    }
L_08854564:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_08854590;
      }
      goto L_0885456C;
    }
L_0885456C:
    ctx.gpr[31] = (0x08854574u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 118u, 0x08838ED0u>(ctx, &aot_mem) && ctx.pc == 0x08854574u) goto L_08854574;
    return;
L_08854574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x08854588u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 118u, 0x08838ED0u>(ctx, &aot_mem) && ctx.pc == 0x08854588u) goto L_08854588;
    return;
L_08854588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088545DC;
      }
      goto L_08854590;
    }
L_08854590:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088545C0;
      }
      goto L_0885459C;
    }
L_0885459C:
    ctx.gpr[31] = (0x088545A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 118u, 0x08838ED0u>(ctx, &aot_mem) && ctx.pc == 0x088545A4u) goto L_088545A4;
    return;
L_088545A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x088545B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 118u, 0x08838ED0u>(ctx, &aot_mem) && ctx.pc == 0x088545B8u) goto L_088545B8;
    return;
L_088545B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088545DC;
      }
      goto L_088545C0;
    }
L_088545C0:
    ctx.gpr[31] = (0x088545C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 118u, 0x08838ED0u>(ctx, &aot_mem) && ctx.pc == 0x088545C8u) goto L_088545C8;
    return;
L_088545C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x088545DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 118u, 0x08838ED0u>(ctx, &aot_mem) && ctx.pc == 0x088545DCu) goto L_088545DC;
    return;
L_088545DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885460C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0885462C;
L_0885462C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x0885463Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 123u, 0x08838F04u>(ctx, &aot_mem) && ctx.pc == 0x0885463Cu) goto L_0885463C;
    return;
L_0885463C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0885462C;
      }
      goto L_0885464C;
    }
L_0885464C:
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
L_08854664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08854688u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854688u) goto L_08854688;
    return;
L_08854688:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088546A4u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088546A4u) goto L_088546A4;
    return;
L_088546A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (16940u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088546D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 494u, 0x0883BC74u>(ctx, &aot_mem) && ctx.pc == 0x088546D4u) goto L_088546D4;
    return;
L_088546D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088546E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08854700u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 504u, 0x0883BD64u>(ctx, &aot_mem) && ctx.pc == 0x08854700u) goto L_08854700;
    return;
L_08854700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08854718u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854718u) goto L_08854718;
    return;
L_08854718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_08854770;
      }
      goto L_08854750;
    }
L_08854750:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854770;
      }
      goto L_0885475C;
    }
L_0885475C:
    ctx.gpr[31] = (0x08854764u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 506u, 0x0883BD80u>(ctx, &aot_mem) && ctx.pc == 0x08854764u) goto L_08854764;
    return;
L_08854764:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854770:
    ctx.gpr[31] = (0x08854778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 506u, 0x0883BD80u>(ctx, &aot_mem) && ctx.pc == 0x08854778u) goto L_08854778;
    return;
L_08854778:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885479Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 516u, 0x0883BDF0u>(ctx, &aot_mem) && ctx.pc == 0x0885479Cu) goto L_0885479C;
    return;
L_0885479C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088547A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088547D0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088547D0u) goto L_088547D0;
    return;
L_088547D0:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088547F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088547F0u) goto L_088547F0;
    return;
L_088547F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17190u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17211u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17090u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x088548C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088548C4u) goto L_088548C4;
    return;
L_088548C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088548D8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088548D8u) goto L_088548D8;
    return;
L_088548D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088548F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088548F4u) goto L_088548F4;
    return;
L_088548F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x0885491Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x0885491Cu) goto L_0885491C;
    return;
L_0885491C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08854950u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08854950u) goto L_08854950;
    return;
L_08854950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08854968u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854968u) goto L_08854968;
    return;
L_08854968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08854980u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854980u) goto L_08854980;
    return;
L_08854980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885499C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088549D4;
      }
      goto L_088549C0;
    }
L_088549C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088549FC;
      }
      goto L_088549CC;
    }
L_088549CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088549FC;
      }
      goto L_088549D4;
    }
L_088549D4:
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088549FC;
      }
      goto L_088549E0;
    }
L_088549E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(61)));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
        goto L_088549FC;
    }
    goto L_088549EC;
L_088549EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088549FC;
      }
      goto L_088549F8;
    }
L_088549F8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_088549FC;
L_088549FC:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08854A54;
      }
      goto L_08854A04;
    }
L_08854A04:
    ctx.gpr[31] = (0x08854A0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x08854A0Cu) goto L_08854A0C;
    return;
L_08854A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17190u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08854A54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08854A54u) goto L_08854A54;
    return;
L_08854A54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08854A98;
      }
      goto L_08854A84;
    }
L_08854A84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08854AC0;
      }
      goto L_08854A90;
    }
L_08854A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08854AC0;
      }
      goto L_08854A98;
    }
L_08854A98:
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08854AC0;
      }
      goto L_08854AA4;
    }
L_08854AA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(61)));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
        goto L_08854AC0;
    }
    goto L_08854AB0;
L_08854AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854AC0;
      }
      goto L_08854ABC;
    }
L_08854ABC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_08854AC0;
L_08854AC0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08854AD0;
      }
      goto L_08854AC8;
    }
L_08854AC8:
    ctx.gpr[31] = (0x08854AD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08854AD0u) goto L_08854AD0;
    return;
L_08854AD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854ADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08854B18u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854B18u) goto L_08854B18;
    return;
L_08854B18:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08854B34u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08854B34u) goto L_08854B34;
    return;
L_08854B34:
    ctx.gpr[4] = (16916u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17171u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17238u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08854B54;
L_08854B54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08854BB8;
      }
      goto L_08854B94;
    }
L_08854B94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08854BA4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854BA4u) goto L_08854BA4;
    return;
L_08854BA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08854BB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 73u, 0x08838A48u>(ctx, &aot_mem) && ctx.pc == 0x08854BB0u) goto L_08854BB0;
    return;
L_08854BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08854BD4;
      }
      goto L_08854BB8;
    }
L_08854BB8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08854BC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854BC4u) goto L_08854BC4;
    return;
L_08854BC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08854BD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 73u, 0x08838A48u>(ctx, &aot_mem) && ctx.pc == 0x08854BD0u) goto L_08854BD0;
    return;
L_08854BD0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08854BD4;
L_08854BD4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08854B54;
      }
      goto L_08854BE0;
    }
L_08854BE0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08854C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08854C30;
L_08854C30:
    ctx.gpr[31] = (0x08854C38u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 86u, 0x08838B50u>(ctx, &aot_mem) && ctx.pc == 0x08854C38u) goto L_08854C38;
    return;
L_08854C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_08854C30;
      }
      goto L_08854C50;
    }
L_08854C50:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08854C64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854C64u) goto L_08854C64;
    return;
L_08854C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
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
L_08854C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08854CAC;
L_08854CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08854D5C;
    }
    goto L_08854CBC;
L_08854CBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08854E08;
    }
    goto L_08854CC8;
L_08854CC8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08854CFC;
      }
      goto L_08854CD4;
    }
L_08854CD4:
    if (ctx.gpr[6] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_08854D00;
    }
    goto L_08854CDC;
L_08854CDC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08854CE8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854CE8u) goto L_08854CE8;
    return;
L_08854CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08854D48;
      }
      goto L_08854CFC;
    }
L_08854CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_08854D00;
L_08854D00:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08854D2C;
      }
      goto L_08854D0C;
    }
L_08854D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    ctx.gpr[31] = (0x08854D18u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854D18u) goto L_08854D18;
    return;
L_08854D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08854D48;
      }
      goto L_08854D2C;
    }
L_08854D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x08854D38u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854D38u) goto L_08854D38;
    return;
L_08854D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08854D48;
L_08854D48:
    ctx.gpr[31] = (0x08854D50u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 88u, 0x08838B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08854D50u) goto L_08854D50;
    return;
L_08854D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08854E08;
      }
      goto L_08854D58;
    }
L_08854D58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08854D5C;
L_08854D5C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08854DD0;
      }
      goto L_08854D64;
    }
L_08854D64:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08854DB4;
      }
      goto L_08854D70;
    }
L_08854D70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08854D98;
      }
      goto L_08854D7C;
    }
L_08854D7C:
    ctx.gpr[31] = (0x08854D84u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854D84u) goto L_08854D84;
    return;
L_08854D84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08854DF4;
      }
      goto L_08854D98;
    }
L_08854D98:
    ctx.gpr[31] = (0x08854DA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854DA0u) goto L_08854DA0;
    return;
L_08854DA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08854DF4;
      }
      goto L_08854DB4;
    }
L_08854DB4:
    ctx.gpr[31] = (0x08854DBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854DBCu) goto L_08854DBC;
    return;
L_08854DBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08854DF4;
      }
      goto L_08854DD0;
    }
L_08854DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08854DE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854DE4u) goto L_08854DE4;
    return;
L_08854DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_08854DF4;
L_08854DF4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08854E04u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 88u, 0x08838B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08854E04u) goto L_08854E04;
    return;
L_08854E04:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08854E08;
L_08854E08:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08854CAC;
      }
      goto L_08854E14;
    }
L_08854E14:
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
L_08854E30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08854E90;
      }
      goto L_08854E58;
    }
L_08854E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08854EB4;
      }
      goto L_08854E64;
    }
L_08854E64:
    ctx.gpr[17] = (0u | 0u);
    goto L_08854E68;
L_08854E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (0x08854E78u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 104u, 0x08838C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08854E78u) goto L_08854E78;
    return;
L_08854E78:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08854E68;
      }
      goto L_08854E88;
    }
L_08854E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854EB4;
      }
      goto L_08854E90;
    }
L_08854E90:
    ctx.gpr[17] = (0u | 0u);
    goto L_08854E94;
L_08854E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (0x08854EA4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 104u, 0x08838C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08854EA4u) goto L_08854EA4;
    return;
L_08854EA4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08854E94;
      }
      goto L_08854EB4;
    }
L_08854EB4:
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
L_08854ECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08854EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 68u, 0x088389D0u>(ctx, &aot_mem) && ctx.pc == 0x08854EE8u) goto L_08854EE8;
    return;
L_08854EE8:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    goto L_08854EFC;
L_08854EFC:
    ctx.gpr[31] = (0x08854F04u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08854F04u) goto L_08854F04;
    return;
L_08854F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08854F14u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08854F14u) goto L_08854F14;
    return;
L_08854F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_08854EFC;
      }
      goto L_08854F2C;
    }
L_08854F2C:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08854F40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854F40u) goto L_08854F40;
    return;
L_08854F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08854F54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854F54u) goto L_08854F54;
    return;
L_08854F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), 0u);
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
L_08854F78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08855058;
      }
      goto L_08854FA4;
    }
L_08854FA4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08854FAC;
L_08854FAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854FD0;
      }
      goto L_08854FBC;
    }
L_08854FBC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08854FC8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854FC8u) goto L_08854FC8;
    return;
L_08854FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08855028;
      }
      goto L_08854FD0;
    }
L_08854FD0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08854FF4;
      }
      goto L_08854FD8;
    }
L_08854FD8:
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
        goto L_08854FF8;
    }
    goto L_08854FE0;
L_08854FE0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08854FECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08854FECu) goto L_08854FEC;
    return;
L_08854FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08855028;
      }
      goto L_08854FF4;
    }
L_08854FF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    goto L_08854FF8;
L_08854FF8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08855018;
      }
      goto L_08855004;
    }
L_08855004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    ctx.gpr[31] = (0x08855010u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08855010u) goto L_08855010;
    return;
L_08855010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08855028;
      }
      goto L_08855018;
    }
L_08855018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x08855024u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08855024u) goto L_08855024;
    return;
L_08855024:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08855028;
L_08855028:
    ctx.gpr[31] = (0x08855030u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08856668;
L_08855030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08855040u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08855040u) goto L_08855040;
    return;
L_08855040:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08854FAC;
      }
      goto L_08855050;
    }
L_08855050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855104;
      }
      goto L_08855058;
    }
L_08855058:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08855060;
L_08855060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_088550C4;
    }
    goto L_08855070;
L_08855070:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_088550B0;
    }
    goto L_0885507C;
L_0885507C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_0885509C;
    }
    goto L_08855088;
L_08855088:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08855094u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x08855094u) goto L_08855094;
    return;
L_08855094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088550A8;
      }
      goto L_0885509C;
    }
L_0885509C:
    ctx.gpr[31] = (0x088550A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x088550A4u) goto L_088550A4;
    return;
L_088550A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088550A8;
L_088550A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550BC;
      }
      goto L_088550B0;
    }
L_088550B0:
    ctx.gpr[31] = (0x088550B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x088550B8u) goto L_088550B8;
    return;
L_088550B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088550BC;
L_088550BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550DC;
      }
      goto L_088550C4;
    }
L_088550C4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x088550D8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x088550D8u) goto L_088550D8;
    return;
L_088550D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088550DC;
L_088550DC:
    ctx.gpr[31] = (0x088550E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08856668;
L_088550E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x088550F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088550F4u) goto L_088550F4;
    return;
L_088550F4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08855060;
      }
      goto L_08855104;
    }
L_08855104:
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
L_08855120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885519C;
      }
      goto L_08855148;
    }
L_08855148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088551DC;
      }
      goto L_08855154;
    }
L_08855154:
    ctx.gpr[31] = (0x0885515Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 71u, 0x08838A24u>(ctx, &aot_mem) && ctx.pc == 0x0885515Cu) goto L_0885515C;
    return;
L_0885515C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08855164;
L_08855164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x08855174u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08855174u) goto L_08855174;
    return;
L_08855174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08855184u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08855184u) goto L_08855184;
    return;
L_08855184:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08855164;
      }
      goto L_08855194;
    }
L_08855194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088551DC;
      }
      goto L_0885519C;
    }
L_0885519C:
    ctx.gpr[31] = (0x088551A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 71u, 0x08838A24u>(ctx, &aot_mem) && ctx.pc == 0x088551A4u) goto L_088551A4;
    return;
L_088551A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088551AC;
L_088551AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x088551BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088551BCu) goto L_088551BC;
    return;
L_088551BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x088551CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088551CCu) goto L_088551CC;
    return;
L_088551CC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088551AC;
      }
      goto L_088551DC;
    }
L_088551DC:
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
L_088551F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 368u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08855234u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08855234u) goto L_08855234;
    return;
L_08855234:
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08855250u);
    ctx.gpr[6] = (0u | 368u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08855250u) goto L_08855250;
    return;
L_08855250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17287u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16944u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (16992u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (0u | 0u);
    goto L_08855290;
L_08855290:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22688)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088552E4;
      }
      goto L_088552CC;
    }
L_088552CC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088552DCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 362u, 0x08849F04u>(ctx, &aot_mem) && ctx.pc == 0x088552DCu) goto L_088552DC;
    return;
L_088552DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08855304;
      }
      goto L_088552E4;
    }
L_088552E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08855300u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 362u, 0x08849F04u>(ctx, &aot_mem) && ctx.pc == 0x08855300u) goto L_08855300;
    return;
L_08855300:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08855304;
L_08855304:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08855290;
      }
      goto L_08855310;
    }
L_08855310:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885533C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08855368;
L_08855368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x08855374u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 348u, 0x08849E24u>(ctx, &aot_mem) && ctx.pc == 0x08855374u) goto L_08855374;
    return;
L_08855374:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08855368;
      }
      goto L_08855388;
    }
L_08855388:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_088553BC;
    }
    goto L_08855394;
L_08855394:
    ctx.gpr[31] = (0x0885539Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 923u, 0x0882FBE8u>(ctx, &aot_mem) && ctx.pc == 0x0885539Cu) goto L_0885539C;
    return;
L_0885539C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088553B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088553B0u) goto L_088553B0;
    return;
L_088553B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_088553BC;
L_088553BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088553C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088553C8u) goto L_088553C8;
    return;
L_088553C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), 0u);
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
L_088553EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0885540C;
L_0885540C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x0885541Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 357u, 0x08849EBCu>(ctx, &aot_mem) && ctx.pc == 0x0885541Cu) goto L_0885541C;
    return;
L_0885541C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0885540C;
      }
      goto L_0885542C;
    }
L_0885542C:
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
L_08855444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08855474;
L_08855474:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08855490;
      }
      goto L_0885547C;
    }
L_0885547C:
    ctx.gpr[31] = (0x08855484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 526u, 0x0883BF44u>(ctx, &aot_mem) && ctx.pc == 0x08855484u) goto L_08855484;
    return;
L_08855484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_088554A0;
      }
      goto L_08855490;
    }
L_08855490:
    ctx.gpr[31] = (0x08855498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08855498u) goto L_08855498;
    return;
L_08855498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_088554A0;
L_088554A0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08855474;
      }
      goto L_088554B0;
    }
L_088554B0:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088554C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088554C4u) goto L_088554C4;
    return;
L_088554C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088554DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088554DCu) goto L_088554DC;
    return;
L_088554DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
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
L_08855500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (17285u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[19] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[7] = (17028u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (17188u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_08855598;
      }
      goto L_0885557C;
    }
L_0885557C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088555A4;
      }
      goto L_08855590;
    }
L_08855590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088555A4;
      }
      goto L_08855598;
    }
L_08855598:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_088555A4;
L_088555A4:
    ctx.gpr[31] = (0x088555ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x088555ACu) goto L_088555AC;
    return;
L_088555AC:
    ctx.gpr[5] = (16944u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (16984u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 0u);
    goto L_088555C8;
L_088555C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[20] - ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[22]);
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08855648;
      }
      goto L_08855604;
    }
L_08855604:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08855688;
      }
      goto L_08855648;
    }
L_08855648:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08855688;
L_08855688:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088556A8;
      }
      goto L_08855698;
    }
L_08855698:
    ctx.gpr[31] = (0x088556A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 528u, 0x0883BF60u>(ctx, &aot_mem) && ctx.pc == 0x088556A0u) goto L_088556A0;
    return;
L_088556A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_088556B4;
      }
      goto L_088556A8;
    }
L_088556A8:
    ctx.gpr[31] = (0x088556B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088556B0u) goto L_088556B0;
    return;
L_088556B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    goto L_088556B4;
L_088556B4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088555C8;
      }
      goto L_088556C4;
    }
L_088556C4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_088556E4;
      }
      goto L_088556D0;
    }
L_088556D0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_08855724;
      }
      goto L_088556E4;
    }
L_088556E4:
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    goto L_08855724;
L_08855724:
    ctx.gpr[6] = (17378u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x0885573Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883BC14u>(ctx, &aot_mem) && ctx.pc == 0x0885573Cu) goto L_0885573C;
    return;
L_0885573C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0885574Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08854484;
L_0885574C:
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
L_0885578C:
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
    goto L_088557B4;
L_088557B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088557D4;
      }
      goto L_088557C4;
    }
L_088557C4:
    ctx.gpr[31] = (0x088557CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 530u, 0x0883BF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088557CCu) goto L_088557CC;
    return;
L_088557CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088557E0;
      }
      goto L_088557D4;
    }
L_088557D4:
    ctx.gpr[31] = (0x088557DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088557DCu) goto L_088557DC;
    return;
L_088557DC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_088557E0;
L_088557E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-92));
      if (branch_taken) {
          goto L_088557B4;
      }
      goto L_088557E8;
    }
L_088557E8:
    ctx.gpr[31] = (0x088557F0u);
    // nop
    goto L_088553EC;
L_088557F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x088557FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088557FCu) goto L_088557FC;
    return;
L_088557FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08855808u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 492u, 0x0883BC58u>(ctx, &aot_mem) && ctx.pc == 0x08855808u) goto L_08855808;
    return;
L_08855808:
    ctx.gpr[31] = (0x08855810u);
    // nop
    goto L_0885460C;
L_08855810:
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
L_0885582C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08855854;
L_08855854:
    ctx.gpr[31] = (0x0885585Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885585Cu) goto L_0885585C;
    return;
L_0885585C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08855854;
      }
      goto L_08855874;
    }
L_08855874:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08855888u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08855888u) goto L_08855888;
    return;
L_08855888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[31] = (0x0885589Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885589Cu) goto L_0885589C;
    return;
L_0885589C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088558B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088558B0u) goto L_088558B0;
    return;
L_088558B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
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
L_088558D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16772u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
      if (branch_taken) {
          goto L_088559EC;
      }
      goto L_08855954;
    }
L_08855954:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088559A4;
      }
      goto L_08855960;
    }
L_08855960:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08855970u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08855970u) goto L_08855970;
    return;
L_08855970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08855988u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08855988u) goto L_08855988;
    return;
L_08855988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_08855A34;
      }
      goto L_088559A4;
    }
L_088559A4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088559B0u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088559B0u) goto L_088559B0;
    return;
L_088559B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[31] = (0x088559D0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088559D0u) goto L_088559D0;
    return;
L_088559D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_08855A34;
      }
      goto L_088559EC;
    }
L_088559EC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088559FCu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088559FCu) goto L_088559FC;
    return;
L_088559FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[31] = (0x08855A1Cu);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08855A1Cu) goto L_08855A1C;
    return;
L_08855A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(168));
    goto L_08855A34;
L_08855A34:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_08855A74;
      }
      goto L_08855A3C;
    }
L_08855A3C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08855AAC;
      }
      goto L_08855A74;
    }
L_08855A74:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    goto L_08855AAC;
L_08855AAC:
    ctx.gpr[31] = (0x08855AB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x08855AB4u) goto L_08855AB4;
    return;
L_08855AB4:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.gpr[16] = (0u | 180u);
    goto L_08855AC8;
L_08855AC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08855AF0u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08855AF0u) goto L_08855AF0;
    return;
L_08855AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08855B20u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08855B20u) goto L_08855B20;
    return;
L_08855B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[7];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08855B7C;
      }
      goto L_08855B50;
    }
L_08855B50:
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08855BA4;
      }
      goto L_08855B7C;
    }
L_08855B7C:
    ctx.gpr[21] = (0u & 255u);
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08855BA4;
L_08855BA4:
    ctx.gpr[31] = (0x08855BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x08855BACu) goto L_08855BAC;
    return;
L_08855BAC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08855AC8;
      }
      goto L_08855BBC;
    }
L_08855BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08855C18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08855C3C;
L_08855C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x08855C48u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08855C48u) goto L_08855C48;
    return;
L_08855C48:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08855C3C;
      }
      goto L_08855C5C;
    }
L_08855C5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08855C94;
    }
    goto L_08855C68;
L_08855C68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855CC0;
      }
      goto L_08855C78;
    }
L_08855C78:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855CC0;
      }
      goto L_08855C84;
    }
L_08855C84:
    ctx.gpr[31] = (0x08855C8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08855C8Cu) goto L_08855C8C;
    return;
L_08855C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855CC0;
      }
      goto L_08855C94;
    }
L_08855C94:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08855CC0;
      }
      goto L_08855C9C;
    }
L_08855C9C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855CC0;
      }
      goto L_08855CAC;
    }
L_08855CAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855CC0;
      }
      goto L_08855CB8;
    }
L_08855CB8:
    ctx.gpr[31] = (0x08855CC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08855CC0u) goto L_08855CC0;
    return;
L_08855CC0:
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
L_08855CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08855D8C;
      }
      goto L_08855CF8;
    }
L_08855CF8:
    ctx.gpr[31] = (0x08855D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 88u, 0x0886CB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08855D00u) goto L_08855D00;
    return;
L_08855D00:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08855D10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13016));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08855D10u) goto L_08855D10;
    return;
L_08855D10:
    ctx.gpr[31] = (0x08855D18u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08855D18u) goto L_08855D18;
    return;
L_08855D18:
    ctx.gpr[31] = (0x08855D20u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08855D20u) goto L_08855D20;
    return;
L_08855D20:
    ctx.gpr[31] = (0x08855D28u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08855D28u) goto L_08855D28;
    return;
L_08855D28:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4484));
    ctx.gpr[31] = (0x08855D40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08855D40u) goto L_08855D40;
    return;
L_08855D40:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x08855D58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08855D58u) goto L_08855D58;
    return;
L_08855D58:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    ctx.gpr[31] = (0x08855D70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08855D70u) goto L_08855D70;
    return;
L_08855D70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08855D7Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08855D7Cu) goto L_08855D7C;
    return;
L_08855D7C:
    ctx.gpr[31] = (0x08855D84u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08855D84u) goto L_08855D84;
    return;
L_08855D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E44;
      }
      goto L_08855D8C;
    }
L_08855D8C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08855DD0;
      }
      goto L_08855DC4;
    }
L_08855DC4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08855DDC;
      }
      goto L_08855DD0;
    }
L_08855DD0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(176)));
    goto L_08855DDC;
L_08855DDC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x08855DF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08855DF8u) goto L_08855DF8;
    return;
L_08855DF8:
    ctx.gpr[31] = (0x08855E00u);
    // nop
    goto L_08854730;
L_08855E00:
    ctx.gpr[31] = (0x08855E08u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08856284;
L_08855E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17378u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (17028u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08855E3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883BC14u>(ctx, &aot_mem) && ctx.pc == 0x08855E3Cu) goto L_08855E3C;
    return;
L_08855E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08855E44;
L_08855E44:
    ctx.gpr[31] = (0x08855E4Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08855E4Cu) goto L_08855E4C;
    return;
L_08855E4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08855F74;
      }
      goto L_08855E80;
    }
L_08855E80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08855EE0;
      }
      goto L_08855E8C;
    }
L_08855E8C:
    ctx.gpr[31] = (0x08855E94u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0885683C;
L_08855E94:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28412));
    ctx.gpr[31] = (0x08855EB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08AB4764u;
    return;
L_08855EB8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08855ED4;
      }
      goto L_08855EC4;
    }
L_08855EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08855ED4;
      }
      goto L_08855ED4;
    }
L_08855ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08855FC0;
      }
      goto L_08855EE0;
    }
L_08855EE0:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    ctx.gpr[6] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08855F4C;
      }
      goto L_08855F04;
    }
L_08855F04:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08855F34;
      }
      goto L_08855F0C;
    }
L_08855F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[31] = (0x08855F2Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08855F2Cu) goto L_08855F2C;
    return;
L_08855F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855FC0;
      }
      goto L_08855F34;
    }
L_08855F34:
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
        goto L_08855F50;
    }
    goto L_08855F3C;
L_08855F3C:
    ctx.gpr[31] = (0x08855F44u);
    // nop
    goto L_08856A18;
L_08855F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855FC0;
      }
      goto L_08855F4C;
    }
L_08855F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    goto L_08855F50;
L_08855F50:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[31] = (0x08855F6Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08855F6Cu) goto L_08855F6C;
    return;
L_08855F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855FC0;
      }
      goto L_08855F74;
    }
L_08855F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08855F88;
      }
      goto L_08855F80;
    }
L_08855F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_08855FC0;
      }
      goto L_08855F88;
    }
L_08855F88:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    ctx.gpr[6] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[31] = (0x08855FC0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08855FC0u) goto L_08855FC0;
    return;
L_08855FC0:
    ctx.gpr[31] = (0x08855FC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08855FC8u) goto L_08855FC8;
    return;
L_08855FC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08856018;
      }
      goto L_0885600C;
    }
L_0885600C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08856020;
      }
      goto L_08856018;
    }
L_08856018:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08856020;
L_08856020:
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
        goto L_088560B0;
    }
    goto L_08856028;
L_08856028:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08856034u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08856034u) goto L_08856034;
    return;
L_08856034:
    ctx.gpr[31] = (0x0885603Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x0885603Cu) goto L_0885603C;
    return;
L_0885603C:
    ctx.gpr[31] = (0x08856044u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08856044u) goto L_08856044;
    return;
L_08856044:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08856054u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13016));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08856054u) goto L_08856054;
    return;
L_08856054:
    ctx.gpr[31] = (0x0885605Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x0885605Cu) goto L_0885605C;
    return;
L_0885605C:
    ctx.gpr[31] = (0x08856064u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08856064u) goto L_08856064;
    return;
L_08856064:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2183u << 16u);
      if (branch_taken) {
          goto L_0885608C;
      }
      goto L_0885606C;
    }
L_0885606C:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3332));
    ctx.gpr[31] = (0x08856084u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08856084u) goto L_08856084;
    return;
L_08856084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088560A0;
      }
      goto L_0885608C;
    }
L_0885608C:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18056));
    ctx.gpr[31] = (0x088560A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17548));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088560A0u) goto L_088560A0;
    return;
L_088560A0:
    ctx.gpr[31] = (0x088560A8u);
    // nop
    goto L_08857810;
L_088560A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885618C;
      }
      goto L_088560B0;
    }
L_088560B0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088560CC;
      }
      goto L_088560B8;
    }
L_088560B8:
    ctx.gpr[31] = (0x088560C0u);
    // nop
    goto L_088564BC;
L_088560C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088560F0;
      }
      goto L_088560CC;
    }
L_088560CC:
    if (ctx.gpr[6] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_088560F4;
    }
    goto L_088560D4;
L_088560D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[6] == ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_088560F4;
    }
    goto L_088560E0;
L_088560E0:
    ctx.gpr[31] = (0x088560E8u);
    // nop
    goto L_088564BC;
L_088560E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_088560F0;
L_088560F0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088560F4;
L_088560F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08856128;
      }
      goto L_0885611C;
    }
L_0885611C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08856134;
      }
      goto L_08856128;
    }
L_08856128:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
    goto L_08856134;
L_08856134:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(240)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x08856150u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08856150u) goto L_08856150;
    return;
L_08856150:
    ctx.gpr[31] = (0x08856158u);
    // nop
    goto L_08854730;
L_08856158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17378u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (17028u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x0885618Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883BC14u>(ctx, &aot_mem) && ctx.pc == 0x0885618Cu) goto L_0885618C;
    return;
L_0885618C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088561A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08856220;
L_08856220:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08856220;
      }
      goto L_08856234;
    }
L_08856234:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885624Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885624Cu) goto L_0885624C;
    return;
L_0885624C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08856264u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08856264u) goto L_08856264;
    return;
L_08856264:
    ctx.gpr[31] = (0x0885626Cu);
    // nop
    goto L_08856460;
L_0885626C:
    ctx.gpr[31] = (0x08856274u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08856284;
L_08856274:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08856328;
      }
      goto L_088562AC;
    }
L_088562AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088562B8;
L_088562B8:
    ctx.gpr[31] = (0x088562C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x088562C0u) goto L_088562C0;
    return;
L_088562C0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_088562DC;
    }
    goto L_088562C8;
L_088562C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088562DC;
L_088562DC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088562B8;
      }
      goto L_088562E8;
    }
L_088562E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08856308u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856308u) goto L_08856308;
    return;
L_08856308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08856324u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08856324u) goto L_08856324;
    return;
L_08856324:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    goto L_08856328;
L_08856328:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08856338;
L_08856338:
    ctx.gpr[31] = (0x08856340u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x08856340u) goto L_08856340;
    return;
L_08856340:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0885636C;
    }
    goto L_08856348;
L_08856348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0885636C;
L_0885636C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08856338;
      }
      goto L_08856378;
    }
L_08856378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08856388u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_088563A0;
L_08856388:
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
L_088563A0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[12] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    ctx.gpr[9] = (2221u << 16u);
      if (branch_taken) {
          goto L_08856458;
      }
      goto L_088563B8;
    }
L_088563B8:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(7924));
    ctx.gpr[3] = (ctx.gpr[12] | 0u);
    goto L_088563C0;
L_088563C0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
      if (branch_taken) {
          goto L_08856444;
      }
      goto L_088563CC;
    }
L_088563CC:
    ctx.gpr[6] = (ctx.gpr[12] << 2u);
    ctx.gpr[2] = (ctx.gpr[3] - ctx.gpr[12]);
    goto L_088563D4;
L_088563D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[7] = (ctx.gpr[12] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08856430;
      }
      goto L_088563DC;
    }
L_088563DC:
    ctx.gpr[11] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[2] << 2u);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    goto L_088563EC;
L_088563EC:
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
        goto L_08856434;
    }
    goto L_08856418;
L_08856418:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[12]);
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_088563EC;
      }
      goto L_08856430;
    }
L_08856430:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08856434;
L_08856434:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] - ctx.gpr[12]);
      if (branch_taken) {
          goto L_088563D4;
      }
      goto L_08856440;
    }
L_08856440:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    goto L_08856444;
L_08856444:
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[6]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) > 0;
    ctx.gpr[3] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_088563C0;
      }
      goto L_08856458;
    }
L_08856458:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 4592u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08856484u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856484u) goto L_08856484;
    return;
L_08856484:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088564A0u);
    ctx.gpr[6] = (0u | 4592u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088564A0u) goto L_088564A0;
    return;
L_088564A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x088564ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 179u, 0x0884CBF8u>(ctx, &aot_mem) && ctx.pc == 0x088564ACu) goto L_088564AC;
    return;
L_088564AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088564BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 1u);
    goto L_088564E8;
L_088564E8:
    ctx.gpr[31] = (0x088564F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x088564F0u) goto L_088564F0;
    return;
L_088564F0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08856528;
    }
    goto L_088564F8;
L_088564F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[5] == ctx.gpr[17]) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08856528;
    }
    goto L_08856508;
L_08856508:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08856528;
L_08856528:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088564E8;
      }
      goto L_08856534;
    }
L_08856534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08856544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_088563A0;
L_08856544:
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
L_0885655C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885657Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 530u, 0x08842960u>(ctx, &aot_mem) && ctx.pc == 0x0885657Cu) goto L_0885657C;
    return;
L_0885657C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856588:
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
    goto L_088565C4;
L_088565C4:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088565F4;
      }
      goto L_088565CC;
    }
L_088565CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088565F4;
      }
      goto L_088565D8;
    }
L_088565D8:
    ctx.gpr[31] = (0x088565E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x088565E0u) goto L_088565E0;
    return;
L_088565E0:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088565C4;
      }
      goto L_088565F4;
    }
L_088565F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08856620;
      }
      goto L_08856604;
    }
L_08856604:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856620;
      }
      goto L_08856610;
    }
L_08856610:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08856644;
      }
      goto L_08856620;
    }
L_08856620:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08856640;
      }
      goto L_08856628;
    }
L_08856628:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08856640;
      }
      goto L_08856634;
    }
L_08856634:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08856644;
      }
      goto L_08856640;
    }
L_08856640:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08856644;
L_08856644:
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
L_08856668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(164)));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_088566EC;
      }
      goto L_08856694;
    }
L_08856694:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 123u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(164)));
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
L_088566EC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (0u | 100u);
        goto L_088566F8;
    }
    goto L_088566F8;
L_088566F8:
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(164)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08856770;
      }
      goto L_08856730;
    }
L_08856730:
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
L_08856770:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
      if (branch_taken) {
          goto L_088567BC;
      }
      goto L_0885677C;
    }
L_0885677C:
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
L_088567BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08856804;
      }
      goto L_088567C4;
    }
L_088567C4:
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
L_08856804:
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
L_0885683C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08856858u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 468u, 0x089296B4u>(ctx, &aot_mem) && ctx.pc == 0x08856858u) goto L_08856858;
    return;
L_08856858:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08856874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 478u, 0x08929770u>(ctx, &aot_mem) && ctx.pc == 0x08856874u) goto L_08856874;
    return;
L_08856874:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088568A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 484u, 0x089297E4u>(ctx, &aot_mem) && ctx.pc == 0x088568A0u) goto L_088568A0;
    return;
L_088568A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088568AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088568D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10732));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088568D0u) goto L_088568D0;
    return;
L_088568D0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088568E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08856910u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10732));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08856910u) goto L_08856910;
    return;
L_08856910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885692C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856984;
      }
      goto L_08856950;
    }
L_08856950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08856964u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 601u, 0x08929F68u>(ctx, &aot_mem) && ctx.pc == 0x08856964u) goto L_08856964;
    return;
L_08856964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_08856970;
L_08856970:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856984:
    ctx.gpr[31] = (0x0885698Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 620u, 0x0892A0ECu>(ctx, &aot_mem) && ctx.pc == 0x0885698Cu) goto L_0885698C;
    return;
L_0885698C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08856970;
      }
      goto L_08856998;
    }
L_08856998:
    ctx.gpr[31] = (0x088569A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 631u, 0x0892A17Cu>(ctx, &aot_mem) && ctx.pc == 0x088569A0u) goto L_088569A0;
    return;
L_088569A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    ctx.gpr[31] = (0x088569B4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 632u, 0x0892A18Cu>(ctx, &aot_mem) && ctx.pc == 0x088569B4u) goto L_088569B4;
    return;
L_088569B4:
    ctx.gpr[31] = (0x088569BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 613u, 0x0892A060u>(ctx, &aot_mem) && ctx.pc == 0x088569BCu) goto L_088569BC;
    return;
L_088569BC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088569D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08856A08;
      }
      goto L_088569F0;
    }
L_088569F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08856A00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856A00u) goto L_08856A00;
    return;
L_08856A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), 0u);
    goto L_08856A08;
L_08856A08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856A18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08856A2Cu);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08856A2Cu) goto L_08856A2C;
    return;
L_08856A2C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08856A4Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08856A4Cu) goto L_08856A4C;
    return;
L_08856A4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856A58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08856A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 157u, 0x08859558u>(ctx, &aot_mem) && ctx.pc == 0x08856A68u) goto L_08856A68;
    return;
L_08856A68:
    ctx.gpr[31] = (0x08856A70u);
    // nop
    goto L_08857144;
L_08856A70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856A7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08856A8Cu);
    // nop
    goto L_08856DD8;
L_08856A8C:
    ctx.gpr[31] = (0x08856A94u);
    // nop
    goto L_08857488;
L_08856A94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(63)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
        goto L_08856AE0;
    }
    goto L_08856AD0;
L_08856AD0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856AE0;
    }
L_08856AE0:
    ctx.gpr[18] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08856B40;
    }
    goto L_08856AEC;
L_08856AEC:
    ctx.gpr[31] = (0x08856AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 128u, 0x088BCDECu>(ctx, &aot_mem) && ctx.pc == 0x08856AF4u) goto L_08856AF4;
    return;
L_08856AF4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856AFC;
    }
L_08856AFC:
    ctx.gpr[31] = (0x08856B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 127u, 0x088BCDE4u>(ctx, &aot_mem) && ctx.pc == 0x08856B04u) goto L_08856B04;
    return;
L_08856B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    goto L_08856B1C;
L_08856B1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08856B1C;
      }
      goto L_08856B38;
    }
L_08856B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856B40;
    }
L_08856B40:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856B4C;
    }
L_08856B4C:
    ctx.gpr[31] = (0x08856B54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 261u, 0x08821820u>(ctx, &aot_mem) && ctx.pc == 0x08856B54u) goto L_08856B54;
    return;
L_08856B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08856B90;
      }
      goto L_08856B60;
    }
L_08856B60:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08856C24;
    }
    goto L_08856B78;
L_08856B78:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08856B88u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    goto L_0885683C;
L_08856B88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    goto L_08856B90;
L_08856B90:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_08856C20;
      }
      goto L_08856B98;
    }
L_08856B98:
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28412));
    ctx.gpr[31] = (0x08856BB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08AB4764u;
    return;
L_08856BB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08856BD4;
      }
      goto L_08856BC4;
    }
L_08856BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08856BD4;
      }
      goto L_08856BD4;
    }
L_08856BD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[19] == ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
        goto L_08856C20;
    }
    goto L_08856BE4;
L_08856BE4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08856C04;
      }
      goto L_08856BEC;
    }
L_08856BEC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08856BFCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    goto L_0885683C;
L_08856BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08856C1C;
      }
      goto L_08856C04;
    }
L_08856C04:
    ctx.gpr[31] = (0x08856C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 124u, 0x088BCDBCu>(ctx, &aot_mem) && ctx.pc == 0x08856C0Cu) goto L_08856C0C;
    return;
L_08856C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    goto L_08856C1C;
L_08856C1C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    goto L_08856C20;
L_08856C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08856C24;
L_08856C24:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08856C90;
      }
      goto L_08856C30;
    }
L_08856C30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856C80;
      }
      goto L_08856C4C;
    }
L_08856C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(216)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08856C68;
      }
      goto L_08856C5C;
    }
L_08856C5C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(220)));
    goto L_08856C68;
L_08856C68:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[31] = (0x08856C78u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08856C78u) goto L_08856C78;
    return;
L_08856C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856C80;
    }
L_08856C80:
    ctx.gpr[31] = (0x08856C88u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08856C88u) goto L_08856C88;
    return;
L_08856C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856C90;
    }
L_08856C90:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08856CEC;
    }
    goto L_08856C98;
L_08856C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856CDC;
      }
      goto L_08856CA8;
    }
L_08856CA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08856CC8;
      }
      goto L_08856CB4;
    }
L_08856CB4:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08856CC8;
L_08856CC8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[31] = (0x08856CD4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08856CD4u) goto L_08856CD4;
    return;
L_08856CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856CDC;
    }
L_08856CDC:
    ctx.gpr[31] = (0x08856CE4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08856CE4u) goto L_08856CE4;
    return;
L_08856CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856CEC;
    }
L_08856CEC:
    ctx.gpr[4] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 128u);
      if (branch_taken) {
          goto L_08856D34;
      }
      goto L_08856CF8;
    }
L_08856CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08856D2Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08856D2Cu) goto L_08856D2C;
    return;
L_08856D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856D34;
    }
L_08856D34:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08856D44;
      }
      goto L_08856D3C;
    }
L_08856D3C:
    ctx.gpr[31] = (0x08856D44u);
    // nop
    goto L_088577C8;
L_08856D44:
    ctx.gpr[31] = (0x08856D4Cu);
    // nop
    goto L_08857504;
L_08856D4C:
    ctx.gpr[31] = (0x08856D54u);
    // nop
    goto L_08856EBC;
L_08856D54:
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
L_08856D70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08856D84u);
    // nop
    goto L_08857098;
L_08856D84:
    ctx.gpr[31] = (0x08856D8Cu);
    // nop
    goto L_08857734;
L_08856D8C:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
        goto L_08856DB0;
    }
    goto L_08856DA4;
L_08856DA4:
    ctx.gpr[31] = (0x08856DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 493u, 0x08929858u>(ctx, &aot_mem) && ctx.pc == 0x08856DACu) goto L_08856DAC;
    return;
L_08856DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    goto L_08856DB0;
L_08856DB0:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856DC8;
      }
      goto L_08856DC0;
    }
L_08856DC0:
    ctx.gpr[31] = (0x08856DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 629u, 0x0892A160u>(ctx, &aot_mem) && ctx.pc == 0x08856DC8u) goto L_08856DC8;
    return;
L_08856DC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856DD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08856DF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 520u, 0x0883BE94u>(ctx, &aot_mem) && ctx.pc == 0x08856DF8u) goto L_08856DF8;
    return;
L_08856DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08856E10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856E10u) goto L_08856E10;
    return;
L_08856E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), 0u);
    ctx.gpr[31] = (0x08856E24u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 526u, 0x0883BF44u>(ctx, &aot_mem) && ctx.pc == 0x08856E24u) goto L_08856E24;
    return;
L_08856E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08856E38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856E38u) goto L_08856E38;
    return;
L_08856E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), 0u);
    ctx.gpr[31] = (0x08856E4Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08856E4Cu) goto L_08856E4C;
    return;
L_08856E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x08856E5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 136u, 0x08839150u>(ctx, &aot_mem) && ctx.pc == 0x08856E5Cu) goto L_08856E5C;
    return;
L_08856E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x08856E6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x08856E6Cu) goto L_08856E6C;
    return;
L_08856E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x08856E7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x08856E7Cu) goto L_08856E7C;
    return;
L_08856E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x08856E8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 485u, 0x0883BBF8u>(ctx, &aot_mem) && ctx.pc == 0x08856E8Cu) goto L_08856E8C;
    return;
L_08856E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08856EA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856EA0u) goto L_08856EA0;
    return;
L_08856EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17172u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16900u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17060u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08856F18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 528u, 0x0883BF60u>(ctx, &aot_mem) && ctx.pc == 0x08856F18u) goto L_08856F18;
    return;
L_08856F18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (17155u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_08856FA0;
      }
      goto L_08856F44;
    }
L_08856F44:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856FAC;
      }
      goto L_08856FA0;
    }
L_08856FA0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08856FAC;
L_08856FAC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (2220u << 16u);
      if (branch_taken) {
          goto L_08856FD0;
      }
      goto L_08856FB4;
    }
L_08856FB4:
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28388));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_08856FE4;
      }
      goto L_08856FD0;
    }
L_08856FD0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28372));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    goto L_08856FE4;
L_08856FE4:
    ctx.gpr[31] = (0x08856FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883BC14u>(ctx, &aot_mem) && ctx.pc == 0x08856FECu) goto L_08856FEC;
    return;
L_08856FEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857084;
      }
      goto L_08857000;
    }
L_08857000:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (17247u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08857064;
      }
      goto L_08857014;
    }
L_08857014:
    ctx.gpr[6] = (17289u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (17242u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x0885704Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x0885704Cu) goto L_0885704C;
    return;
L_0885704C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x0885705Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x0885705Cu) goto L_0885705C;
    return;
L_0885705C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857084;
      }
      goto L_08857064;
    }
L_08857064:
    ctx.gpr[6] = (17232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x08857084u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x08857084u) goto L_08857084;
    return;
L_08857084:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088570B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088570B4u) goto L_088570B4;
    return;
L_088570B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x088570C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 522u, 0x0883BEB0u>(ctx, &aot_mem) && ctx.pc == 0x088570C0u) goto L_088570C0;
    return;
L_088570C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857134;
      }
      goto L_088570D4;
    }
L_088570D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_0885711C;
      }
      goto L_088570E0;
    }
L_088570E0:
    ctx.gpr[31] = (0x088570E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088570E8u) goto L_088570E8;
    return;
L_088570E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x088570F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088570F8u) goto L_088570F8;
    return;
L_088570F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08857104u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 530u, 0x0883BF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08857104u) goto L_08857104;
    return;
L_08857104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x08857114u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 492u, 0x0883BC58u>(ctx, &aot_mem) && ctx.pc == 0x08857114u) goto L_08857114;
    return;
L_08857114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857134;
      }
      goto L_0885711C;
    }
L_0885711C:
    ctx.gpr[31] = (0x08857124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x08857124u) goto L_08857124;
    return;
L_08857124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x08857134u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 138u, 0x0883916Cu>(ctx, &aot_mem) && ctx.pc == 0x08857134u) goto L_08857134;
    return;
L_08857134:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857144:
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
    ctx.gpr[31] = (0x088571A4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088571A4u) goto L_088571A4;
    return;
L_088571A4:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088571C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088571C0u) goto L_088571C0;
    return;
L_088571C0:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28356));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28352));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28336));
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
    goto L_08857268;
L_08857268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08857304;
      }
      goto L_08857284;
    }
L_08857284:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8232)));
    ctx.gpr[31] = (0x08857294u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08857294u) goto L_08857294;
    return;
L_08857294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[6] = (17263u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
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
          goto L_088573B4;
      }
      goto L_08857304;
    }
L_08857304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08857310u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08857310u) goto L_08857310;
    return;
L_08857310:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_08857394;
      }
      goto L_08857370;
    }
L_08857370:
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
          goto L_088573B4;
      }
      goto L_08857394;
    }
L_08857394:
    ctx.gpr[30] = (0u & 255u);
    ctx.gpr[22] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_088573B4;
L_088573B4:
    ctx.gpr[31] = (0x088573BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088573BCu) goto L_088573BC;
    return;
L_088573BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088573D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088573D4u) goto L_088573D4;
    return;
L_088573D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (0x088573E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088573E4u) goto L_088573E4;
    return;
L_088573E4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08857268;
      }
      goto L_088573F4;
    }
L_088573F4:
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
L_08857488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088574B0;
L_088574B0:
    ctx.gpr[31] = (0x088574B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088574B8u) goto L_088574B8;
    return;
L_088574B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_088574B0;
      }
      goto L_088574D0;
    }
L_088574D0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088574E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088574E4u) goto L_088574E4;
    return;
L_088574E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
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
L_08857504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
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
    ctx.gpr[31] = (0x08857560u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08857560u) goto L_08857560;
    return;
L_08857560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8236)));
    ctx.gpr[31] = (0x08857578u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08857578u) goto L_08857578;
    return;
L_08857578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08857584u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x08857584u) goto L_08857584;
    return;
L_08857584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (0u | 4u);
        goto L_08857598;
    }
    goto L_08857598;
L_08857598:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08857704;
      }
      goto L_088575A4;
    }
L_088575A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08857704;
      }
      goto L_088575AC;
    }
L_088575AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08857704;
      }
      goto L_088575BC;
    }
L_088575BC:
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
    goto L_088575F4;
L_088575F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08857618u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08857618u) goto L_08857618;
    return;
L_08857618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08857630u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    goto L_0885655C;
L_08857630:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0885763Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885763Cu) goto L_0885763C;
    return;
L_0885763C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[8];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08857694;
      }
      goto L_08857668;
    }
L_08857668:
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088576BC;
      }
      goto L_08857694;
    }
L_08857694:
    ctx.gpr[23] = (0u & 255u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_088576BC;
L_088576BC:
    ctx.gpr[31] = (0x088576C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088576C4u) goto L_088576C4;
    return;
L_088576C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088575F4;
      }
      goto L_088576DC;
    }
L_088576DC:
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
    goto L_08857704;
L_08857704:
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
L_08857734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (0u | 4u);
        goto L_08857768;
    }
    goto L_08857768;
L_08857768:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088577AC;
      }
      goto L_08857774;
    }
L_08857774:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088577AC;
      }
      goto L_08857780;
    }
L_08857780:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088577AC;
      }
      goto L_0885778C;
    }
L_0885778C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (0x0885779Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0885779Cu) goto L_0885779C;
    return;
L_0885779C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0885778C;
      }
      goto L_088577AC;
    }
L_088577AC:
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
L_088577C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088577FC;
      }
      goto L_088577E4;
    }
L_088577E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088577FC;
      }
      goto L_088577F0;
    }
L_088577F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (0x088577FCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_088568E8;
L_088577FC:
    ctx.gpr[31] = (0x08857804u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08857804u) goto L_08857804;
    return;
L_08857804:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857810:
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
    ctx.gpr[31] = (0x08857844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 79u, 0x0886CAD4u>(ctx, &aot_mem) && ctx.pc == 0x08857844u) goto L_08857844;
    return;
L_08857844:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28328));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7652));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28316));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[30] = (2222u << 16u);
    goto L_08857890;
L_08857890:
    ctx.gpr[31] = (0x08857898u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08857898u) goto L_08857898;
    return;
L_08857898:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7536)));
      if (branch_taken) {
          goto L_088578B8;
      }
      goto L_088578AC;
    }
L_088578AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 68 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_088578D8;
    }
    goto L_088578B8;
L_088578B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088578C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088578C8u) goto L_088578C8;
    return;
L_088578C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08857900;
      }
      goto L_088578D8;
    }
L_088578D8:
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088578F4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088578F4u) goto L_088578F4;
    return;
L_088578F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    goto L_08857900;
L_08857900:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08857910u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08857910u) goto L_08857910;
    return;
L_08857910:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08857920u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08857920u) goto L_08857920;
    return;
L_08857920:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08857930u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08857930u) goto L_08857930;
    return;
L_08857930:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08857940u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08857940u) goto L_08857940;
    return;
L_08857940:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0885794Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0885794Cu) goto L_0885794C;
    return;
L_0885794C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088579DC;
      }
      goto L_0885795C;
    }
L_0885795C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08857968u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08857968u) goto L_08857968;
    return;
L_08857968:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08857974u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 584u, 0x0880A830u>(ctx, &aot_mem) && ctx.pc == 0x08857974u) goto L_08857974;
    return;
L_08857974:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08857984u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08857984u) goto L_08857984;
    return;
L_08857984:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088579B4;
      }
      goto L_08857990;
    }
L_08857990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 0u);
    goto L_08857998;
L_08857998:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] == ctx.gpr[6]) {
    ctx.gpr[16] = (0u | 3u);
        goto L_088579A4;
    }
    goto L_088579A4;
L_088579A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08857998;
      }
      goto L_088579B4;
    }
L_088579B4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088579C4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x088579C4u) goto L_088579C4;
    return;
L_088579C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088579D4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 96u, 0x0886CBCCu>(ctx, &aot_mem) && ctx.pc == 0x088579D4u) goto L_088579D4;
    return;
L_088579D4:
    ctx.gpr[31] = (0x088579DCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x088579DCu) goto L_088579DC;
    return;
L_088579DC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857890;
      }
      goto L_088579EC;
    }
L_088579EC:
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
L_08857A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08857A64;
      }
      goto L_08857A54;
    }
L_08857A54:
    ctx.gpr[31] = (0x08857A5Cu);
    // nop
    goto L_08857DCC;
L_08857A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857DA8;
      }
      goto L_08857A64;
    }
L_08857A64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08857AD0;
      }
      goto L_08857A70;
    }
L_08857A70:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08857AD0;
      }
      goto L_08857A8C;
    }
L_08857A8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08857AB0;
      }
      goto L_08857AA0;
    }
L_08857AA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857AB0;
      }
      goto L_08857AAC;
    }
L_08857AAC:
    ctx.gpr[5] = (0u | 0u);
    goto L_08857AB0;
L_08857AB0:
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08857AD4;
    }
    goto L_08857AB8;
L_08857AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    goto L_08857AD0;
L_08857AD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08857AD4;
L_08857AD4:
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08857AE8;
      }
      goto L_08857AE0;
    }
L_08857AE0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08857B98;
      }
      goto L_08857AE8;
    }
L_08857AE8:
    ctx.gpr[31] = (0x08857AF0u);
    // nop
    goto L_0885692C;
L_08857AF0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857AF8;
    }
L_08857AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08857B68;
      }
      goto L_08857B0C;
    }
L_08857B0C:
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08857B20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 519u, 0x0883271Cu>(ctx, &aot_mem) && ctx.pc == 0x08857B20u) goto L_08857B20;
    return;
L_08857B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08857B38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    goto L_0885655C;
L_08857B38:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08857B44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08857B44u) goto L_08857B44;
    return;
L_08857B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857B68;
    }
L_08857B68:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857B98;
    }
L_08857B98:
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(63)));
        goto L_08857C80;
    }
    goto L_08857BA0;
L_08857BA0:
    ctx.gpr[31] = (0x08857BA8u);
    // nop
    goto L_08856890;
L_08857BA8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857BB0;
    }
L_08857BB0:
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28412));
    ctx.gpr[31] = (0x08857BD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08AB4764u;
    return;
L_08857BD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08857BEC;
      }
      goto L_08857BDC;
    }
L_08857BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08857BEC;
      }
      goto L_08857BEC;
    }
L_08857BEC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857C28;
      }
      goto L_08857BF4;
    }
L_08857BF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08857C04;
L_08857C04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08857C04;
      }
      goto L_08857C20;
    }
L_08857C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857C70;
      }
      goto L_08857C28;
    }
L_08857C28:
    ctx.gpr[31] = (0x08857C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 526u, 0x08842924u>(ctx, &aot_mem) && ctx.pc == 0x08857C30u) goto L_08857C30;
    return;
L_08857C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[20] = (0u | 0u);
    goto L_08857C40;
L_08857C40:
    ctx.gpr[31] = (0x08857C48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 542u, 0x08842A08u>(ctx, &aot_mem) && ctx.pc == 0x08857C48u) goto L_08857C48;
    return;
L_08857C48:
    if (ctx.gpr[2] != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08857C64;
    }
    goto L_08857C50;
L_08857C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08857C64;
L_08857C64:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857C40;
      }
      goto L_08857C70;
    }
L_08857C70:
    ctx.gpr[31] = (0x08857C78u);
    // nop
    goto L_08856864;
L_08857C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857C80;
    }
L_08857C80:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857C88;
    }
L_08857C88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(61)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08857D44;
    }
    goto L_08857C94;
L_08857C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857CA4;
    }
L_08857CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857CB4;
    }
L_08857CB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 128u);
      if (branch_taken) {
          goto L_08857CD4;
      }
      goto L_08857CC4;
    }
L_08857CC4:
    ctx.gpr[31] = (0x08857CCCu);
    // nop
    goto L_08855CD8;
L_08857CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08857CF8;
      }
      goto L_08857CD4;
    }
L_08857CD4:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08857CFC;
    }
    goto L_08857CDC;
L_08857CDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 3072u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08857CFC;
    }
    goto L_08857CEC;
L_08857CEC:
    ctx.gpr[31] = (0x08857CF4u);
    // nop
    goto L_08855E5C;
L_08857CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    goto L_08857CF8;
L_08857CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08857CFC;
L_08857CFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08857D24;
      }
      goto L_08857D04;
    }
L_08857D04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857D0C;
    }
L_08857D0C:
    ctx.gpr[31] = (0x08857D14u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 729u, 0x08853A10u>(ctx, &aot_mem) && ctx.pc == 0x08857D14u) goto L_08857D14;
    return;
L_08857D14:
    ctx.gpr[31] = (0x08857D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 129u, 0x08859214u>(ctx, &aot_mem) && ctx.pc == 0x08857D1Cu) goto L_08857D1C;
    return;
L_08857D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857D24;
    }
L_08857D24:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857D2C;
    }
L_08857D2C:
    ctx.gpr[31] = (0x08857D34u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 777u, 0x08853C84u>(ctx, &aot_mem) && ctx.pc == 0x08857D34u) goto L_08857D34;
    return;
L_08857D34:
    ctx.gpr[31] = (0x08857D3Cu);
    // nop
    goto L_088558D0;
L_08857D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857D44;
    }
L_08857D44:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08857D58;
      }
      goto L_08857D50;
    }
L_08857D50:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857D58;
    }
L_08857D58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_08857D98;
    }
    goto L_08857D68;
L_08857D68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_08857D98;
    }
    goto L_08857D78;
L_08857D78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_08857D98;
    }
    goto L_08857D88;
L_08857D88:
    ctx.gpr[31] = (0x08857D90u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    goto L_08855FDC;
L_08857D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857D98;
    }
L_08857D98:
    ctx.gpr[31] = (0x08857DA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08856AA0;
L_08857DA0:
    ctx.gpr[31] = (0x08857DA8u);
    // nop
    goto L_08857F88;
L_08857DA8:
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
L_08857DCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08857E68;
      }
      goto L_08857E00;
    }
L_08857E00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08857E90;
      }
      goto L_08857E08;
    }
L_08857E08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08857E18u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08857E18u) goto L_08857E18;
    return;
L_08857E18:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7544)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7548));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8196)));
    ctx.gpr[31] = (0x08857E3Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x08857E3Cu) goto L_08857E3C;
    return;
L_08857E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x08857E54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08857E54u) goto L_08857E54;
    return;
L_08857E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08857E90;
      }
      goto L_08857E68;
    }
L_08857E68:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
        goto L_08857E94;
    }
    goto L_08857E74;
L_08857E74:
    ctx.gpr[31] = (0x08857E7Cu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x08857E7Cu) goto L_08857E7C;
    return;
L_08857E7C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08857E90;
      }
      goto L_08857E88;
    }
L_08857E88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08857E90;
L_08857E90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    goto L_08857E94;
L_08857E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
        goto L_08857ED0;
    }
    goto L_08857EA0;
L_08857EA0:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
        goto L_08857F08;
    }
    goto L_08857EA8;
L_08857EA8:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x08857EBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8328));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08857EBCu) goto L_08857EBC;
    return;
L_08857EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08857F04;
      }
      goto L_08857ED0;
    }
L_08857ED0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
        goto L_08857F08;
    }
    goto L_08857ED8;
L_08857ED8:
    ctx.gpr[31] = (0x08857EE0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x08857EE0u) goto L_08857EE0;
    return;
L_08857EE0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08857F04;
      }
      goto L_08857EEC;
    }
L_08857EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (0x08857EF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08857EF8u) goto L_08857EF8;
    return;
L_08857EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08857F04;
L_08857F04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    goto L_08857F08;
L_08857F08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08857F68;
      }
      goto L_08857F14;
    }
L_08857F14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08857F68;
      }
      goto L_08857F24;
    }
L_08857F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (0x08857F30u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08857F30u) goto L_08857F30;
    return;
L_08857F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08857F3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08857F3Cu) goto L_08857F3C;
    return;
L_08857F3C:
    ctx.gpr[31] = (0x08857F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 632u, 0x088534C0u>(ctx, &aot_mem) && ctx.pc == 0x08857F44u) goto L_08857F44;
    return;
L_08857F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (0x08857F54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08857F54u) goto L_08857F54;
    return;
L_08857F54:
    ctx.gpr[31] = (0x08857F5Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08857F5Cu) goto L_08857F5C;
    return;
L_08857F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    goto L_08857F68;
L_08857F68:
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
L_08857F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08857FA0u);
    // nop
    goto L_08854730;
L_08857FA0:
    ctx.gpr[31] = (0x08857FA8u);
    // nop
    goto L_0885499C;
L_08857FA8:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08857FCC;
      }
      goto L_08857FBC;
    }
L_08857FBC:
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 19u, 0x0885813Cu>(ctx, &aot_mem); return;
    }
    goto L_08857FC4;
L_08857FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08857FE4;
      }
      goto L_08857FCC;
    }
L_08857FCC:
    ctx.gpr[7] = (0u | 2u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 9u, 0x0885809Cu>(ctx, &aot_mem); return;
    }
    goto L_08857FD8;
L_08857FD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 19u, 0x0885813Cu>(ctx, &aot_mem); return;
      }
      goto L_08857FE0;
    }
L_08857FE0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08857FE4;
L_08857FE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 1u, 0x08858004u>(ctx, &aot_mem); return;
      }
      goto L_08857FF4;
    }
L_08857FF4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 18u, 0x08858138u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 1u, 0x08858004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0020(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0020_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_20(Runtime &runtime) {
    runtime.register_generated_unit(20u, 0x08854000u, 16384u, &recomp_unit_0020, &recomp_unit_0020_entry);
    runtime.register_function(0x08854000u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854050u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885408Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885412Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854164u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885417Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854204u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885422Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854234u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885424Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854254u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885426Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854328u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885433Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885434Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854360u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854378u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854388u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854418u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854420u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854438u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885444Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854464u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854484u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854564u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885456Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854574u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854588u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854590u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885459Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885460Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885462Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885463Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885464Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854664u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854688u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854700u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854718u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854730u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854750u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885475Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854764u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854770u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854778u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854784u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885479Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885491Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854930u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854950u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854968u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854980u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885499Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ABCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ADCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ECCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855004u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855010u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855018u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855024u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855028u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855030u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855040u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855050u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855058u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855060u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855070u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885507Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855088u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855094u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885509Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855104u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855120u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855148u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855154u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885515Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855164u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855174u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855184u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855194u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885519Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855234u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855250u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855290u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855300u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855304u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855310u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885533Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855368u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855374u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855388u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855394u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885539Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885540Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885541Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885542Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855444u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855474u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885547Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855484u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855490u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855498u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855500u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885557Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855590u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855598u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855604u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855648u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855688u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855698u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855724u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885573Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885574Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885578Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855808u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855810u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885582Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855854u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885585Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855874u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855888u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885589Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855954u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855960u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855970u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855988u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855EB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855EC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855ED4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855EE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885600Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856018u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856020u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856028u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856034u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885603Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856044u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856054u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885605Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856064u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885606Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856084u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885608Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885611Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856128u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856134u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856150u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856158u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885618Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856220u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856234u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885624Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856264u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885626Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856274u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856284u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856308u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856324u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856328u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856338u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856340u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856348u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885636Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856378u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856388u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856418u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856430u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856434u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856440u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856444u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856458u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856460u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856484u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856508u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856528u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856534u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856544u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885655Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885657Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856588u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856604u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856610u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856620u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856628u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856634u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856640u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856644u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856668u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856694u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856730u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856770u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885677Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856804u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885683Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856858u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856864u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856874u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856890u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856910u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885692Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856950u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856964u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856970u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856984u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885698Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856998u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857000u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857014u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885704Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885705Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857064u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857084u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857098u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857104u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857114u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885711Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857124u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857134u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857144u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857268u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857284u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857294u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857304u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857310u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857370u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857394u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857488u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857504u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857560u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857578u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857584u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857598u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857618u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857630u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885763Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857668u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857694u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857704u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857734u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857768u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857774u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857780u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885778Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885779Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857804u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857810u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857844u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857890u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857898u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857900u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857910u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857920u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857930u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857940u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885794Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885795Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857968u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857974u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857984u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857990u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857998u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857ED0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857ED8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FF4u, &recomp_unit_0020, "recomp_unit_0020");
}
} // namespace psprecomp

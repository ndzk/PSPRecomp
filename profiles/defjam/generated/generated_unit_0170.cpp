#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0170[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22,
    23, 0, 0, 24, 0, 0, 25, 0, 26, 27, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 38, 0, 39, 0, 0, 0, 40, 0,
    41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0,
    49, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 58, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 71, 0,
    72, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0,
    86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 94, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 109, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 131, 132, 0, 133, 0, 0, 0,
    0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 142, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 147, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 152, 153, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 168, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0,
    0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 188, 0, 189, 0, 190, 0, 191, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 199, 0, 200, 0, 201, 0, 202, 0, 0, 0, 203, 204, 205, 0, 206, 0, 0, 0, 207, 208,
    0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 219, 0, 0, 0, 220, 221, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0,
    226, 0, 0, 0, 0, 0, 0, 227, 0, 228, 229, 0, 230, 0, 0, 231, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 251, 252, 253, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 267, 0, 0, 0, 0, 268, 269, 0, 270, 0, 271, 0,
    272, 0, 0, 273, 0, 0, 274, 275, 0, 276, 0, 277, 0, 0, 278, 0, 0, 279, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0,
    0, 0, 0, 298, 299, 0, 0, 0, 0, 300, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 314, 0, 315, 0, 0,
    0, 0, 316, 317, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320, 321, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 327,
    0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 337,
    0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 355, 0,
    356, 0, 0, 0, 0, 357, 358, 0, 0, 0, 0, 0, 0, 0, 359, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0,
    365, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 374, 0, 0, 0, 375,
    0, 376, 0, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0,
    385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 391, 0,
    392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 398, 399, 0, 0, 400,
    0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 409, 410, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415,
    0, 0, 416, 0, 0, 417, 0, 418, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 429, 0, 430,
    0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 435, 0, 436, 0, 0, 437, 0, 438, 0, 439, 440, 0, 0, 0, 441, 0,
    0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450,
    0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 462, 0, 463, 0, 0, 0, 464, 465, 0,
    0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 471, 0, 0, 472, 0, 473, 0, 0, 474, 0,
    0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 481, 0,
    482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 486, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0,
    493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 502, 0, 503, 0,
    0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 526, 527, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 543,
    0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    549, 0, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0,
    558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 574, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 578, 0, 579, 0,
    0, 0, 580, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0,
    0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0,
    0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0,
    601, 0, 0, 602, 603, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 609, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0,
    616, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0,
    0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 636, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0,
    0, 0, 0, 646, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0,
    0, 0, 0, 651, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0,
    0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663,
    0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 669,
    0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0,
    0, 676, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0,
    0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692,
};
void recomp_unit_0170_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AAC000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0170[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AAC000;
    case 2u: goto L_08AAC048;
    case 3u: goto L_08AAC050;
    case 4u: goto L_08AAC054;
    case 5u: goto L_08AAC074;
    case 6u: goto L_08AAC07C;
    case 7u: goto L_08AAC080;
    case 8u: goto L_08AAC0E4;
    case 9u: goto L_08AAC100;
    case 10u: goto L_08AAC124;
    case 11u: goto L_08AAC13C;
    case 12u: goto L_08AAC144;
    case 13u: goto L_08AAC158;
    case 14u: goto L_08AAC164;
    case 15u: goto L_08AAC184;
    case 16u: goto L_08AAC19C;
    case 17u: goto L_08AAC1B4;
    case 18u: goto L_08AAC1B8;
    case 19u: goto L_08AAC1CC;
    case 20u: goto L_08AAC1D4;
    case 21u: goto L_08AAC1F0;
    case 22u: goto L_08AAC1FC;
    case 23u: goto L_08AAC200;
    case 24u: goto L_08AAC20C;
    case 25u: goto L_08AAC218;
    case 26u: goto L_08AAC220;
    case 27u: goto L_08AAC224;
    case 28u: goto L_08AAC230;
    case 29u: goto L_08AAC238;
    case 30u: goto L_08AAC248;
    case 31u: goto L_08AAC27C;
    case 32u: goto L_08AAC288;
    case 33u: goto L_08AAC29C;
    case 34u: goto L_08AAC2AC;
    case 35u: goto L_08AAC2C4;
    case 36u: goto L_08AAC2D0;
    case 37u: goto L_08AAC2DC;
    case 38u: goto L_08AAC2E0;
    case 39u: goto L_08AAC2E8;
    case 40u: goto L_08AAC2F8;
    case 41u: goto L_08AAC300;
    case 42u: goto L_08AAC31C;
    case 43u: goto L_08AAC324;
    case 44u: goto L_08AAC334;
    case 45u: goto L_08AAC358;
    case 46u: goto L_08AAC360;
    case 47u: goto L_08AAC370;
    case 48u: goto L_08AAC378;
    case 49u: goto L_08AAC380;
    case 50u: goto L_08AAC384;
    case 51u: goto L_08AAC39C;
    case 52u: goto L_08AAC3CC;
    case 53u: goto L_08AAC3E4;
    case 54u: goto L_08AAC3F4;
    case 55u: goto L_08AAC3FC;
    case 56u: goto L_08AAC418;
    case 57u: goto L_08AAC424;
    case 58u: goto L_08AAC428;
    case 59u: goto L_08AAC434;
    case 60u: goto L_08AAC43C;
    case 61u: goto L_08AAC444;
    case 62u: goto L_08AAC44C;
    case 63u: goto L_08AAC46C;
    case 64u: goto L_08AAC4A0;
    case 65u: goto L_08AAC4AC;
    case 66u: goto L_08AAC4B8;
    case 67u: goto L_08AAC4C8;
    case 68u: goto L_08AAC4E4;
    case 69u: goto L_08AAC4EC;
    case 70u: goto L_08AAC4F4;
    case 71u: goto L_08AAC4F8;
    case 72u: goto L_08AAC500;
    case 73u: goto L_08AAC50C;
    case 74u: goto L_08AAC518;
    case 75u: goto L_08AAC520;
    case 76u: goto L_08AAC540;
    case 77u: goto L_08AAC548;
    case 78u: goto L_08AAC578;
    case 79u: goto L_08AAC580;
    case 80u: goto L_08AAC598;
    case 81u: goto L_08AAC5A4;
    case 82u: goto L_08AAC5C8;
    case 83u: goto L_08AAC5DC;
    case 84u: goto L_08AAC5E4;
    case 85u: goto L_08AAC5F0;
    case 86u: goto L_08AAC600;
    case 87u: goto L_08AAC60C;
    case 88u: goto L_08AAC618;
    case 89u: goto L_08AAC628;
    case 90u: goto L_08AAC644;
    case 91u: goto L_08AAC650;
    case 92u: goto L_08AAC658;
    case 93u: goto L_08AAC664;
    case 94u: goto L_08AAC668;
    case 95u: goto L_08AAC678;
    case 96u: goto L_08AAC69C;
    case 97u: goto L_08AAC6B0;
    case 98u: goto L_08AAC6BC;
    case 99u: goto L_08AAC6E4;
    case 100u: goto L_08AAC6F0;
    case 101u: goto L_08AAC714;
    case 102u: goto L_08AAC75C;
    case 103u: goto L_08AAC768;
    case 104u: goto L_08AAC78C;
    case 105u: goto L_08AAC794;
    case 106u: goto L_08AAC7B8;
    case 107u: goto L_08AAC7C0;
    case 108u: goto L_08AAC7D0;
    case 109u: goto L_08AAC7D4;
    case 110u: goto L_08AAC7DC;
    case 111u: goto L_08AAC7E4;
    case 112u: goto L_08AAC7F0;
    case 113u: goto L_08AAC80C;
    case 114u: goto L_08AAC814;
    case 115u: goto L_08AAC81C;
    case 116u: goto L_08AAC828;
    case 117u: goto L_08AAC834;
    case 118u: goto L_08AAC858;
    case 119u: goto L_08AAC864;
    case 120u: goto L_08AAC884;
    case 121u: goto L_08AAC898;
    case 122u: goto L_08AAC89C;
    case 123u: goto L_08AAC8F8;
    case 124u: goto L_08AAC904;
    case 125u: goto L_08AAC910;
    case 126u: goto L_08AAC91C;
    case 127u: goto L_08AAC92C;
    case 128u: goto L_08AAC940;
    case 129u: goto L_08AAC948;
    case 130u: goto L_08AAC960;
    case 131u: goto L_08AAC964;
    case 132u: goto L_08AAC968;
    case 133u: goto L_08AAC970;
    case 134u: goto L_08AAC98C;
    case 135u: goto L_08AAC994;
    case 136u: goto L_08AAC99C;
    case 137u: goto L_08AAC9B8;
    case 138u: goto L_08AAC9C4;
    case 139u: goto L_08AAC9D8;
    case 140u: goto L_08AAC9E4;
    case 141u: goto L_08AAC9EC;
    case 142u: goto L_08AAC9F8;
    case 143u: goto L_08AAC9FC;
    case 144u: goto L_08AACA24;
    case 145u: goto L_08AACA30;
    case 146u: goto L_08AACA38;
    case 147u: goto L_08AACA44;
    case 148u: goto L_08AACA48;
    case 149u: goto L_08AACA5C;
    case 150u: goto L_08AACA64;
    case 151u: goto L_08AACA74;
    case 152u: goto L_08AACA90;
    case 153u: goto L_08AACA94;
    case 154u: goto L_08AACA98;
    case 155u: goto L_08AACAA0;
    case 156u: goto L_08AACAB0;
    case 157u: goto L_08AACAC8;
    case 158u: goto L_08AACAD4;
    case 159u: goto L_08AACADC;
    case 160u: goto L_08AACAF8;
    case 161u: goto L_08AACB04;
    case 162u: goto L_08AACB30;
    case 163u: goto L_08AACB3C;
    case 164u: goto L_08AACB40;
    case 165u: goto L_08AACB48;
    case 166u: goto L_08AACB74;
    case 167u: goto L_08AACB80;
    case 168u: goto L_08AACB9C;
    case 169u: goto L_08AACBA0;
    case 170u: goto L_08AACBAC;
    case 171u: goto L_08AACBB8;
    case 172u: goto L_08AACBEC;
    case 173u: goto L_08AACBF8;
    case 174u: goto L_08AACC14;
    case 175u: goto L_08AACC20;
    case 176u: goto L_08AACC30;
    case 177u: goto L_08AACC40;
    case 178u: goto L_08AACC44;
    case 179u: goto L_08AACC4C;
    case 180u: goto L_08AACC54;
    case 181u: goto L_08AACC60;
    case 182u: goto L_08AACC70;
    case 183u: goto L_08AACC78;
    case 184u: goto L_08AACC84;
    case 185u: goto L_08AACC90;
    case 186u: goto L_08AACC98;
    case 187u: goto L_08AACCA4;
    case 188u: goto L_08AACCA8;
    case 189u: goto L_08AACCB0;
    case 190u: goto L_08AACCB8;
    case 191u: goto L_08AACCC0;
    case 192u: goto L_08AACCC4;
    case 193u: goto L_08AACCD0;
    case 194u: goto L_08AACCE4;
    case 195u: goto L_08AACCFC;
    case 196u: goto L_08AACD10;
    case 197u: goto L_08AACD24;
    case 198u: goto L_08AACD2C;
    case 199u: goto L_08AACD30;
    case 200u: goto L_08AACD38;
    case 201u: goto L_08AACD40;
    case 202u: goto L_08AACD48;
    case 203u: goto L_08AACD58;
    case 204u: goto L_08AACD5C;
    case 205u: goto L_08AACD60;
    case 206u: goto L_08AACD68;
    case 207u: goto L_08AACD78;
    case 208u: goto L_08AACD7C;
    case 209u: goto L_08AACD84;
    case 210u: goto L_08AACD9C;
    case 211u: goto L_08AACDA8;
    case 212u: goto L_08AACDAC;
    case 213u: goto L_08AACDF8;
    case 214u: goto L_08AACE04;
    case 215u: goto L_08AACE10;
    case 216u: goto L_08AACE18;
    case 217u: goto L_08AACE28;
    case 218u: goto L_08AACE3C;
    case 219u: goto L_08AACE40;
    case 220u: goto L_08AACE50;
    case 221u: goto L_08AACE54;
    case 222u: goto L_08AACE58;
    case 223u: goto L_08AACE68;
    case 224u: goto L_08AACE70;
    case 225u: goto L_08AACE78;
    case 226u: goto L_08AACE80;
    case 227u: goto L_08AACE9C;
    case 228u: goto L_08AACEA4;
    case 229u: goto L_08AACEA8;
    case 230u: goto L_08AACEB0;
    case 231u: goto L_08AACEBC;
    case 232u: goto L_08AACEC0;
    case 233u: goto L_08AACEC8;
    case 234u: goto L_08AACED4;
    case 235u: goto L_08AACEE0;
    case 236u: goto L_08AACEE8;
    case 237u: goto L_08AACF10;
    case 238u: goto L_08AACF18;
    case 239u: goto L_08AACF24;
    case 240u: goto L_08AACF2C;
    case 241u: goto L_08AACF30;
    case 242u: goto L_08AACF3C;
    case 243u: goto L_08AACF48;
    case 244u: goto L_08AACF50;
    case 245u: goto L_08AACF80;
    case 246u: goto L_08AACF8C;
    case 247u: goto L_08AACFB0;
    case 248u: goto L_08AACFB8;
    case 249u: goto L_08AACFC4;
    case 250u: goto L_08AACFFC;
    case 251u: goto L_08AAD004;
    case 252u: goto L_08AAD008;
    case 253u: goto L_08AAD00C;
    case 254u: goto L_08AAD010;
    case 255u: goto L_08AAD02C;
    case 256u: goto L_08AAD038;
    case 257u: goto L_08AAD03C;
    case 258u: goto L_08AAD044;
    case 259u: goto L_08AAD04C;
    case 260u: goto L_08AAD054;
    case 261u: goto L_08AAD05C;
    case 262u: goto L_08AAD068;
    case 263u: goto L_08AAD0A8;
    case 264u: goto L_08AAD0B4;
    case 265u: goto L_08AAD0BC;
    case 266u: goto L_08AAD0C4;
    case 267u: goto L_08AAD0D0;
    case 268u: goto L_08AAD0E4;
    case 269u: goto L_08AAD0E8;
    case 270u: goto L_08AAD0F0;
    case 271u: goto L_08AAD0F8;
    case 272u: goto L_08AAD100;
    case 273u: goto L_08AAD10C;
    case 274u: goto L_08AAD118;
    case 275u: goto L_08AAD11C;
    case 276u: goto L_08AAD124;
    case 277u: goto L_08AAD12C;
    case 278u: goto L_08AAD138;
    case 279u: goto L_08AAD144;
    case 280u: goto L_08AAD148;
    case 281u: goto L_08AAD150;
    case 282u: goto L_08AAD158;
    case 283u: goto L_08AAD170;
    case 284u: goto L_08AAD178;
    case 285u: goto L_08AAD180;
    case 286u: goto L_08AAD1A0;
    case 287u: goto L_08AAD260;
    case 288u: goto L_08AAD27C;
    case 289u: goto L_08AAD290;
    case 290u: goto L_08AAD29C;
    case 291u: goto L_08AAD2B4;
    case 292u: goto L_08AAD2C0;
    case 293u: goto L_08AAD2CC;
    case 294u: goto L_08AAD2D4;
    case 295u: goto L_08AAD2D8;
    case 296u: goto L_08AAD2EC;
    case 297u: goto L_08AAD2F4;
    case 298u: goto L_08AAD30C;
    case 299u: goto L_08AAD310;
    case 300u: goto L_08AAD324;
    case 301u: goto L_08AAD328;
    case 302u: goto L_08AAD33C;
    case 303u: goto L_08AAD34C;
    case 304u: goto L_08AAD358;
    case 305u: goto L_08AAD370;
    case 306u: goto L_08AAD384;
    case 307u: goto L_08AAD38C;
    case 308u: goto L_08AAD39C;
    case 309u: goto L_08AAD3B4;
    case 310u: goto L_08AAD3C0;
    case 311u: goto L_08AAD3CC;
    case 312u: goto L_08AAD3D4;
    case 313u: goto L_08AAD3E0;
    case 314u: goto L_08AAD3EC;
    case 315u: goto L_08AAD3F4;
    case 316u: goto L_08AAD408;
    case 317u: goto L_08AAD40C;
    case 318u: goto L_08AAD414;
    case 319u: goto L_08AAD420;
    case 320u: goto L_08AAD438;
    case 321u: goto L_08AAD43C;
    case 322u: goto L_08AAD440;
    case 323u: goto L_08AAD44C;
    case 324u: goto L_08AAD458;
    case 325u: goto L_08AAD464;
    case 326u: goto L_08AAD470;
    case 327u: goto L_08AAD47C;
    case 328u: goto L_08AAD488;
    case 329u: goto L_08AAD494;
    case 330u: goto L_08AAD4A4;
    case 331u: goto L_08AAD4AC;
    case 332u: goto L_08AAD4D0;
    case 333u: goto L_08AAD4D8;
    case 334u: goto L_08AAD4E0;
    case 335u: goto L_08AAD4E8;
    case 336u: goto L_08AAD4F0;
    case 337u: goto L_08AAD4FC;
    case 338u: goto L_08AAD508;
    case 339u: goto L_08AAD510;
    case 340u: goto L_08AAD51C;
    case 341u: goto L_08AAD528;
    case 342u: goto L_08AAD530;
    case 343u: goto L_08AAD538;
    case 344u: goto L_08AAD548;
    case 345u: goto L_08AAD558;
    case 346u: goto L_08AAD578;
    case 347u: goto L_08AAD588;
    case 348u: goto L_08AAD598;
    case 349u: goto L_08AAD5A4;
    case 350u: goto L_08AAD5B8;
    case 351u: goto L_08AAD5C8;
    case 352u: goto L_08AAD5D8;
    case 353u: goto L_08AAD5E0;
    case 354u: goto L_08AAD5EC;
    case 355u: goto L_08AAD5F8;
    case 356u: goto L_08AAD600;
    case 357u: goto L_08AAD614;
    case 358u: goto L_08AAD618;
    case 359u: goto L_08AAD638;
    case 360u: goto L_08AAD63C;
    case 361u: goto L_08AAD648;
    case 362u: goto L_08AAD650;
    case 363u: goto L_08AAD65C;
    case 364u: goto L_08AAD668;
    case 365u: goto L_08AAD680;
    case 366u: goto L_08AAD68C;
    case 367u: goto L_08AAD694;
    case 368u: goto L_08AAD69C;
    case 369u: goto L_08AAD6B0;
    case 370u: goto L_08AAD6B8;
    case 371u: goto L_08AAD6C0;
    case 372u: goto L_08AAD6D8;
    case 373u: goto L_08AAD6E8;
    case 374u: goto L_08AAD6EC;
    case 375u: goto L_08AAD6FC;
    case 376u: goto L_08AAD704;
    case 377u: goto L_08AAD710;
    case 378u: goto L_08AAD718;
    case 379u: goto L_08AAD724;
    case 380u: goto L_08AAD740;
    case 381u: goto L_08AAD748;
    case 382u: goto L_08AAD750;
    case 383u: goto L_08AAD75C;
    case 384u: goto L_08AAD76C;
    case 385u: goto L_08AAD780;
    case 386u: goto L_08AAD78C;
    case 387u: goto L_08AAD7A8;
    case 388u: goto L_08AAD7B0;
    case 389u: goto L_08AAD7D8;
    case 390u: goto L_08AAD7E4;
    case 391u: goto L_08AAD7F8;
    case 392u: goto L_08AAD800;
    case 393u: goto L_08AAD808;
    case 394u: goto L_08AAD814;
    case 395u: goto L_08AAD820;
    case 396u: goto L_08AAD84C;
    case 397u: goto L_08AAD868;
    case 398u: goto L_08AAD86C;
    case 399u: goto L_08AAD870;
    case 400u: goto L_08AAD87C;
    case 401u: goto L_08AAD884;
    case 402u: goto L_08AAD88C;
    case 403u: goto L_08AAD8B0;
    case 404u: goto L_08AAD8B8;
    case 405u: goto L_08AAD8C4;
    case 406u: goto L_08AAD8D0;
    case 407u: goto L_08AAD8F4;
    case 408u: goto L_08AAD900;
    case 409u: goto L_08AAD91C;
    case 410u: goto L_08AAD920;
    case 411u: goto L_08AAD928;
    case 412u: goto L_08AAD940;
    case 413u: goto L_08AAD94C;
    case 414u: goto L_08AAD974;
    case 415u: goto L_08AAD97C;
    case 416u: goto L_08AAD988;
    case 417u: goto L_08AAD994;
    case 418u: goto L_08AAD99C;
    case 419u: goto L_08AAD9A4;
    case 420u: goto L_08AAD9B0;
    case 421u: goto L_08AAD9C0;
    case 422u: goto L_08AAD9F0;
    case 423u: goto L_08AAD9F8;
    case 424u: goto L_08AADA14;
    case 425u: goto L_08AADA2C;
    case 426u: goto L_08AADA38;
    case 427u: goto L_08AADA64;
    case 428u: goto L_08AADA70;
    case 429u: goto L_08AADA74;
    case 430u: goto L_08AADA7C;
    case 431u: goto L_08AADA94;
    case 432u: goto L_08AADA9C;
    case 433u: goto L_08AADAA4;
    case 434u: goto L_08AADABC;
    case 435u: goto L_08AADAC0;
    case 436u: goto L_08AADAC8;
    case 437u: goto L_08AADAD4;
    case 438u: goto L_08AADADC;
    case 439u: goto L_08AADAE4;
    case 440u: goto L_08AADAE8;
    case 441u: goto L_08AADAF8;
    case 442u: goto L_08AADB04;
    case 443u: goto L_08AADB20;
    case 444u: goto L_08AADB28;
    case 445u: goto L_08AADB30;
    case 446u: goto L_08AADB44;
    case 447u: goto L_08AADB4C;
    case 448u: goto L_08AADB5C;
    case 449u: goto L_08AADB68;
    case 450u: goto L_08AADB7C;
    case 451u: goto L_08AADB88;
    case 452u: goto L_08AADB98;
    case 453u: goto L_08AADBB4;
    case 454u: goto L_08AADBD8;
    case 455u: goto L_08AADC00;
    case 456u: goto L_08AADC0C;
    case 457u: goto L_08AADC14;
    case 458u: goto L_08AADC30;
    case 459u: goto L_08AADC3C;
    case 460u: goto L_08AADC48;
    case 461u: goto L_08AADC58;
    case 462u: goto L_08AADC5C;
    case 463u: goto L_08AADC64;
    case 464u: goto L_08AADC74;
    case 465u: goto L_08AADC78;
    case 466u: goto L_08AADC88;
    case 467u: goto L_08AADC98;
    case 468u: goto L_08AADCB4;
    case 469u: goto L_08AADCCC;
    case 470u: goto L_08AADCD4;
    case 471u: goto L_08AADCD8;
    case 472u: goto L_08AADCE4;
    case 473u: goto L_08AADCEC;
    case 474u: goto L_08AADCF8;
    case 475u: goto L_08AADD0C;
    case 476u: goto L_08AADD18;
    case 477u: goto L_08AADD34;
    case 478u: goto L_08AADD3C;
    case 479u: goto L_08AAE4DC;
    case 480u: goto L_08AAE4F0;
    case 481u: goto L_08AAE4F8;
    case 482u: goto L_08AAE500;
    case 483u: goto L_08AAE508;
    case 484u: goto L_08AAE5AC;
    case 485u: goto L_08AAE5D8;
    case 486u: goto L_08AAE604;
    case 487u: goto L_08AAE618;
    case 488u: goto L_08AAE624;
    case 489u: goto L_08AAE638;
    case 490u: goto L_08AAE650;
    case 491u: goto L_08AAE660;
    case 492u: goto L_08AAE674;
    case 493u: goto L_08AAE680;
    case 494u: goto L_08AAE690;
    case 495u: goto L_08AAE698;
    case 496u: goto L_08AAE6A8;
    case 497u: goto L_08AAE6B0;
    case 498u: goto L_08AAE6BC;
    case 499u: goto L_08AAE6DC;
    case 500u: goto L_08AAE6E4;
    case 501u: goto L_08AAE6EC;
    case 502u: goto L_08AAE6F0;
    case 503u: goto L_08AAE6F8;
    case 504u: goto L_08AAE704;
    case 505u: goto L_08AAE70C;
    case 506u: goto L_08AAE714;
    case 507u: goto L_08AAEB2C;
    case 508u: goto L_08AAEB3C;
    case 509u: goto L_08AAEB58;
    case 510u: goto L_08AAEDC4;
    case 511u: goto L_08AAEDD8;
    case 512u: goto L_08AAEE04;
    case 513u: goto L_08AAEE2C;
    case 514u: goto L_08AAEE30;
    case 515u: goto L_08AAEE38;
    case 516u: goto L_08AAEE50;
    case 517u: goto L_08AAEE78;
    case 518u: goto L_08AAEE88;
    case 519u: goto L_08AAEEA4;
    case 520u: goto L_08AAEEAC;
    case 521u: goto L_08AAEEB0;
    case 522u: goto L_08AAEF90;
    case 523u: goto L_08AAEFB0;
    case 524u: goto L_08AAEFC0;
    case 525u: goto L_08AAEFDC;
    case 526u: goto L_08AAEFE4;
    case 527u: goto L_08AAEFE8;
    case 528u: goto L_08AAF0E4;
    case 529u: goto L_08AAF10C;
    case 530u: goto L_08AAF118;
    case 531u: goto L_08AAF128;
    case 532u: goto L_08AAF130;
    case 533u: goto L_08AAF138;
    case 534u: goto L_08AAF150;
    case 535u: goto L_08AAF2A4;
    case 536u: goto L_08AAF2CC;
    case 537u: goto L_08AAF2D4;
    case 538u: goto L_08AAF2E0;
    case 539u: goto L_08AAF308;
    case 540u: goto L_08AAF310;
    case 541u: goto L_08AAF31C;
    case 542u: goto L_08AAF358;
    case 543u: goto L_08AAF37C;
    case 544u: goto L_08AAF384;
    case 545u: goto L_08AAF394;
    case 546u: goto L_08AAF39C;
    case 547u: goto L_08AAF3AC;
    case 548u: goto L_08AAF3C0;
    case 549u: goto L_08AAF400;
    case 550u: goto L_08AAF410;
    case 551u: goto L_08AAF420;
    case 552u: goto L_08AAF428;
    case 553u: goto L_08AAF438;
    case 554u: goto L_08AAF444;
    case 555u: goto L_08AAF44C;
    case 556u: goto L_08AAF45C;
    case 557u: goto L_08AAF474;
    case 558u: goto L_08AAF480;
    case 559u: goto L_08AAF490;
    case 560u: goto L_08AAF498;
    case 561u: goto L_08AAF4CC;
    case 562u: goto L_08AAF4D4;
    case 563u: goto L_08AAF4DC;
    case 564u: goto L_08AAF518;
    case 565u: goto L_08AAF52C;
    case 566u: goto L_08AAF548;
    case 567u: goto L_08AAF554;
    case 568u: goto L_08AAF558;
    case 569u: goto L_08AAF568;
    case 570u: goto L_08AAF59C;
    case 571u: goto L_08AAF5A8;
    case 572u: goto L_08AAF5B4;
    case 573u: goto L_08AAF5C0;
    case 574u: goto L_08AAF5C4;
    case 575u: goto L_08AAF5D4;
    case 576u: goto L_08AAF5DC;
    case 577u: goto L_08AAF5E8;
    case 578u: goto L_08AAF5F0;
    case 579u: goto L_08AAF5F8;
    case 580u: goto L_08AAF608;
    case 581u: goto L_08AAF610;
    case 582u: goto L_08AAF61C;
    case 583u: goto L_08AAF628;
    case 584u: goto L_08AAF63C;
    case 585u: goto L_08AAF650;
    case 586u: goto L_08AAF66C;
    case 587u: goto L_08AAF674;
    case 588u: goto L_08AAF694;
    case 589u: goto L_08AAF69C;
    case 590u: goto L_08AAF6B4;
    case 591u: goto L_08AAF6BC;
    case 592u: goto L_08AAF6C4;
    case 593u: goto L_08AAF724;
    case 594u: goto L_08AAF740;
    case 595u: goto L_08AAF7DC;
    case 596u: goto L_08AAF7E8;
    case 597u: goto L_08AAF808;
    case 598u: goto L_08AAF840;
    case 599u: goto L_08AAF854;
    case 600u: goto L_08AAF878;
    case 601u: goto L_08AAF880;
    case 602u: goto L_08AAF88C;
    case 603u: goto L_08AAF890;
    case 604u: goto L_08AAF8A0;
    case 605u: goto L_08AAF8AC;
    case 606u: goto L_08AAF8C0;
    case 607u: goto L_08AAF8D0;
    case 608u: goto L_08AAF8EC;
    case 609u: goto L_08AAF8F0;
    case 610u: goto L_08AAF918;
    case 611u: goto L_08AAF924;
    case 612u: goto L_08AAF92C;
    case 613u: goto L_08AAF940;
    case 614u: goto L_08AAF95C;
    case 615u: goto L_08AAF978;
    case 616u: goto L_08AAF980;
    case 617u: goto L_08AAF988;
    case 618u: goto L_08AAF9A0;
    case 619u: goto L_08AAF9B0;
    case 620u: goto L_08AAF9CC;
    case 621u: goto L_08AAFA08;
    case 622u: goto L_08AAFA10;
    case 623u: goto L_08AAFA20;
    case 624u: goto L_08AAFA34;
    case 625u: goto L_08AAFA44;
    case 626u: goto L_08AAFA60;
    case 627u: goto L_08AAFA68;
    case 628u: goto L_08AAFA90;
    case 629u: goto L_08AAFAAC;
    case 630u: goto L_08AAFAB4;
    case 631u: goto L_08AAFAE4;
    case 632u: goto L_08AAFAF0;
    case 633u: goto L_08AAFB08;
    case 634u: goto L_08AAFB10;
    case 635u: goto L_08AAFB2C;
    case 636u: goto L_08AAFB30;
    case 637u: goto L_08AAFB48;
    case 638u: goto L_08AAFB50;
    case 639u: goto L_08AAFB64;
    case 640u: goto L_08AAFB94;
    case 641u: goto L_08AAFBB0;
    case 642u: goto L_08AAFBB4;
    case 643u: goto L_08AAFBD0;
    case 644u: goto L_08AAFBE8;
    case 645u: goto L_08AAFBF0;
    case 646u: goto L_08AAFC0C;
    case 647u: goto L_08AAFC10;
    case 648u: goto L_08AAFC2C;
    case 649u: goto L_08AAFC40;
    case 650u: goto L_08AAFC70;
    case 651u: goto L_08AAFC8C;
    case 652u: goto L_08AAFC94;
    case 653u: goto L_08AAFCA0;
    case 654u: goto L_08AAFCB0;
    case 655u: goto L_08AAFCC4;
    case 656u: goto L_08AAFCD0;
    case 657u: goto L_08AAFCEC;
    case 658u: goto L_08AAFCF4;
    case 659u: goto L_08AAFD04;
    case 660u: goto L_08AAFD20;
    case 661u: goto L_08AAFD50;
    case 662u: goto L_08AAFD6C;
    case 663u: goto L_08AAFD7C;
    case 664u: goto L_08AAFD8C;
    case 665u: goto L_08AAFDA0;
    case 666u: goto L_08AAFDBC;
    case 667u: goto L_08AAFDE0;
    case 668u: goto L_08AAFDF0;
    case 669u: goto L_08AAFDFC;
    case 670u: goto L_08AAFE18;
    case 671u: goto L_08AAFE28;
    case 672u: goto L_08AAFE38;
    case 673u: goto L_08AAFE54;
    case 674u: goto L_08AAFE58;
    case 675u: goto L_08AAFE64;
    case 676u: goto L_08AAFE84;
    case 677u: goto L_08AAFE98;
    case 678u: goto L_08AAFEA4;
    case 679u: goto L_08AAFEC0;
    case 680u: goto L_08AAFEC8;
    case 681u: goto L_08AAFED8;
    case 682u: goto L_08AAFEF4;
    case 683u: goto L_08AAFF24;
    case 684u: goto L_08AAFF40;
    case 685u: goto L_08AAFF54;
    case 686u: goto L_08AAFF68;
    case 687u: goto L_08AAFF84;
    case 688u: goto L_08AAFFA8;
    case 689u: goto L_08AAFFB8;
    case 690u: goto L_08AAFFC4;
    case 691u: goto L_08AAFFE0;
    case 692u: goto L_08AAFFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AAC000:
    ctx.gpr[19] = (0u + 0u);
    ctx.gpr[3] = (ctx.hi);
    ctx.gpr[2] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[5]) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[11] = (ctx.hi);
    ctx.gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[5]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[14] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
    ctx.gpr[21] = (ctx.hi);
    ctx.gpr[20] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[4] = (ctx.gpr[15] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.lo);
      if (branch_taken) {
          goto L_08AAC238;
      }
      goto L_08AAC048;
    }
L_08AAC048:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[15];
    ctx.gpr[2] = (ctx.gpr[14] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAC230;
      }
      goto L_08AAC050;
    }
L_08AAC050:
    ctx.gpr[10] = (0u + 0u);
    goto L_08AAC054;
L_08AAC054:
    ctx.gpr[11] = (ctx.gpr[14] << 0u);
    ctx.gpr[24] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[24] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[25] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[25] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AAC224;
    }
    goto L_08AAC074;
L_08AAC074:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[25];
    ctx.gpr[2] = (ctx.gpr[24] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAC218;
      }
      goto L_08AAC07C;
    }
L_08AAC07C:
    ctx.gpr[2] = (ctx.gpr[15] >> 0u);
    goto L_08AAC080;
L_08AAC080:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[21]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (8191u << 16u);
    ctx.gpr[11] = (ctx.gpr[19] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[24] + 0u);
    ctx.gpr[9] = (ctx.gpr[25] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAC144;
      }
      goto L_08AAC0E4;
    }
L_08AAC0E4:
    ctx.gpr[6] = (8191u << 16u);
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (32768u << 16u);
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    goto L_08AAC100;
L_08AAC100:
    ctx.gpr[3] = (ctx.gpr[11] << 31u);
    ctx.gpr[4] = (ctx.gpr[10] & ctx.gpr[14]);
    ctx.gpr[11] = (ctx.gpr[11] >> 1u);
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[3] = (ctx.gpr[6] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAC13C;
      }
      goto L_08AAC124;
    }
L_08AAC124:
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
    ctx.gpr[8] = (ctx.gpr[8] >> 1u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[24]);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[25]);
    goto L_08AAC13C;
L_08AAC13C:
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
        goto L_08AAC100;
    }
    goto L_08AAC144;
L_08AAC144:
    ctx.gpr[2] = (4095u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (4095u << 16u);
      if (branch_taken) {
          goto L_08AAC19C;
      }
      goto L_08AAC158;
    }
L_08AAC158:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    goto L_08AAC164;
L_08AAC164:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (ctx.gpr[10] >> 31u);
    ctx.gpr[11] = (ctx.gpr[11] << 1u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAC20C;
      }
      goto L_08AAC184;
    }
L_08AAC184:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
      if (branch_taken) {
          goto L_08AAC164;
      }
      goto L_08AAC19C;
    }
L_08AAC19C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAC1CC;
      }
      goto L_08AAC1B4;
    }
L_08AAC1B4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_08AAC1B8;
L_08AAC1B8:
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 730u, 0x08AABF78u>(ctx, &aot_mem); return;
L_08AAC1CC:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AAC1B8;
      }
      goto L_08AAC1D4;
    }
L_08AAC1D4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
        goto L_08AAC200;
    }
    goto L_08AAC1F0;
L_08AAC1F0:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AAC1B8;
      }
      goto L_08AAC1FC;
    }
L_08AAC1FC:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    goto L_08AAC200;
L_08AAC200:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_08AAC1B4;
L_08AAC20C:
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[7]);
    goto L_08AAC184;
L_08AAC218:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[15] >> 0u);
      if (branch_taken) {
          goto L_08AAC080;
      }
      goto L_08AAC220;
    }
L_08AAC220:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAC224;
L_08AAC224:
    ctx.gpr[2] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    goto L_08AAC07C;
L_08AAC230:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[10] = (0u + 0u);
        goto L_08AAC054;
    }
    goto L_08AAC238;
L_08AAC238:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[10] = (0u + 0u);
    goto L_08AAC054;
L_08AAC248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AAC27Cu);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08AACB04;
L_08AAC27C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08AAC288u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AACB04;
L_08AAC288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AAC2E0;
      }
      goto L_08AAC29C;
    }
L_08AAC29C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AAC2E0;
      }
      goto L_08AAC2AC;
    }
L_08AAC2AC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[3] = (ctx.gpr[3] ^ ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAC2D0;
      }
      goto L_08AAC2C4;
    }
L_08AAC2C4:
    ctx.gpr[2] = (ctx.gpr[5] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
      if (branch_taken) {
          goto L_08AAC2F8;
      }
      goto L_08AAC2D0;
    }
L_08AAC2D0:
    ctx.gpr[2] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6176));
      if (branch_taken) {
          goto L_08AAC2E0;
      }
      goto L_08AAC2DC;
    }
L_08AAC2DC:
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AAC2E0;
L_08AAC2E0:
    ctx.gpr[31] = (0x08AAC2E8u);
    // nop
    goto L_08AAC864;
L_08AAC2E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC2F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
      if (branch_taken) {
          goto L_08AAC31C;
      }
      goto L_08AAC300;
    }
L_08AAC300:
    ctx.gpr[2] = (0u + 0u);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AAC2E0;
L_08AAC31C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAC334;
      }
      goto L_08AAC324;
    }
L_08AAC324:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AAC2E0;
L_08AAC334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[12] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAC44C;
      }
      goto L_08AAC358;
    }
L_08AAC358:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAC444;
      }
      goto L_08AAC360;
    }
L_08AAC360:
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[14] = (0u + 0u);
    ctx.gpr[15] = (0u + 0u);
    goto L_08AAC370;
L_08AAC370:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
      if (branch_taken) {
          goto L_08AAC39C;
      }
      goto L_08AAC378;
    }
L_08AAC378:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAC434;
      }
      goto L_08AAC380;
    }
L_08AAC380:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    goto L_08AAC384;
L_08AAC384:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[15] | ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
    goto L_08AAC39C;
L_08AAC39C:
    ctx.gpr[8] = (ctx.gpr[8] >> 1u);
    ctx.gpr[7] = (ctx.gpr[5] << 1u);
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[4] << 1u);
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[6] + 0u);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[12] = (ctx.gpr[7] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAC370;
      }
      goto L_08AAC3CC;
    }
L_08AAC3CC:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAC3F4;
      }
      goto L_08AAC3E4;
    }
L_08AAC3E4:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[13] + 0u);
    goto L_08AAC2E0;
L_08AAC3F4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC3E4;
      }
      goto L_08AAC3FC;
    }
L_08AAC3FC:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
        goto L_08AAC428;
    }
    goto L_08AAC418;
L_08AAC418:
    ctx.gpr[2] = (ctx.gpr[6] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC3E4;
      }
      goto L_08AAC424;
    }
L_08AAC424:
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
    goto L_08AAC428;
L_08AAC428:
    ctx.gpr[2] = (ctx.gpr[14] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[2]);
    goto L_08AAC3E4;
L_08AAC434:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
        goto L_08AAC39C;
    }
    goto L_08AAC43C;
L_08AAC43C:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    goto L_08AAC384;
L_08AAC444:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC360;
      }
      goto L_08AAC44C;
    }
L_08AAC44C:
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[12] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    goto L_08AAC360;
L_08AAC46C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AAC4A0u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AACB04;
L_08AAC4A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08AAC4ACu);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AACB04;
L_08AAC4AC:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AAC4B8u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AACC20;
L_08AAC4B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC4C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAC500;
      }
      goto L_08AAC4E4;
    }
L_08AAC4E4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AAC4EC;
L_08AAC4EC:
    ctx.gpr[31] = (0x08AAC4F4u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AAC864;
L_08AAC4F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AAC4F8;
L_08AAC4F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC500:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAC598;
      }
      goto L_08AAC50C;
    }
L_08AAC50C:
    ctx.gpr[2] = (32768u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AAC580;
      }
      goto L_08AAC518;
    }
L_08AAC518:
    ctx.gpr[2] = (0u - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    goto L_08AAC520;
L_08AAC520:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (4095u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAC4EC;
      }
      goto L_08AAC540;
    }
L_08AAC540:
    ctx.gpr[6] = (4095u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    goto L_08AAC548;
L_08AAC548:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[3] = (ctx.gpr[3] << 1u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] << 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAC548;
      }
      goto L_08AAC578;
    }
L_08AAC578:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AAC4EC;
L_08AAC580:
    ctx.gpr[2] = (2221u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4712)));
    ctx.gpr[3] = (2221u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4708)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AAC4F8;
L_08AAC598:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    goto L_08AAC520;
L_08AAC5A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAC5C8u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AACB04;
L_08AAC5C8:
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAC618;
      }
      goto L_08AAC5DC;
    }
L_08AAC5DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AAC618;
      }
      goto L_08AAC5E4;
    }
L_08AAC5E4:
    ctx.gpr[3] = (32767u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AAC60C;
      }
      goto L_08AAC5F0;
    }
L_08AAC5F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAC618;
      }
      goto L_08AAC600;
    }
L_08AAC600:
    ctx.gpr[3] = (32767u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AAC628;
      }
      goto L_08AAC60C;
    }
L_08AAC60C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    if (ctx.gpr[2] == 0u) ctx.gpr[5] = (ctx.gpr[3]);
    goto L_08AAC618;
L_08AAC618:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC628:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[4] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AAC650;
      }
      goto L_08AAC644;
    }
L_08AAC644:
    ctx.gpr[6] = (ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAC668;
      }
      goto L_08AAC650;
    }
L_08AAC650:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[2] >> (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_08AAC664;
      }
      goto L_08AAC658;
    }
L_08AAC658:
    ctx.gpr[8] = (0u - ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    goto L_08AAC664;
L_08AAC664:
    ctx.gpr[7] = (ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    goto L_08AAC668;
L_08AAC668:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    if (ctx.gpr[2] == 0u) ctx.gpr[5] = (ctx.gpr[6]);
    goto L_08AAC618;
L_08AAC678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AAC69Cu);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AACB04;
L_08AAC69C:
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08AAC6B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AAC864;
L_08AAC6B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC6BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[31] = (0x08AAC6E4u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AAC864;
L_08AAC6E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AAC714u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AACB04;
L_08AAC714:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (16383u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[9] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[8] & ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[9] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[8]);
    ctx.gpr[31] = (0x08AAC75Cu);
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08AAC834;
L_08AAC75C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC768:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (127u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[6] = (ctx.gpr[2] >> 23u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[2] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAC7E4;
      }
      goto L_08AAC78C;
    }
L_08AAC78C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAC7DC;
      }
      goto L_08AAC794;
    }
L_08AAC794:
    ctx.gpr[2] = (16383u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 7u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-126));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAC7D4;
      }
      goto L_08AAC7B8;
    }
L_08AAC7B8:
    ctx.gpr[4] = (16383u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    goto L_08AAC7C0;
L_08AAC7C0:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAC7C0;
      }
      goto L_08AAC7D0;
    }
L_08AAC7D0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08AAC7D4;
L_08AAC7D4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC7DC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC7E4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[2] = (ctx.gpr[7] << 7u);
      if (branch_taken) {
          goto L_08AAC80C;
      }
      goto L_08AAC7F0;
    }
L_08AAC7F0:
    ctx.gpr[3] = (16384u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-127));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AAC7DC;
L_08AAC80C:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[2] = (16u << 16u);
        goto L_08AAC81C;
    }
    goto L_08AAC814;
L_08AAC814:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
    goto L_08AAC7DC;
L_08AAC81C:
    ctx.gpr[2] = (ctx.gpr[7] & ctx.gpr[2]);
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AAC7D4;
    }
    goto L_08AAC828;
L_08AAC828:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AAC7D4;
L_08AAC834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AAC858u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_08AACD84;
L_08AAC858:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC864:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAC8F8;
      }
      goto L_08AAC884;
    }
L_08AAC884:
    ctx.gpr[3] = (8u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[3]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
    goto L_08AAC898;
L_08AAC898:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AAC89C;
L_08AAC89C:
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[3] = (65520u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[6] = (ctx.gpr[11] & ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    ctx.gpr[4] = (32783u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[9] & 2047u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 20u);
    ctx.gpr[3] = (32767u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[5]);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[12] << 31u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC8F8:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
        goto L_08AACA64;
    }
    goto L_08AAC904;
L_08AAC904:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACA64;
      }
      goto L_08AAC910;
    }
L_08AAC910:
    ctx.gpr[2] = (ctx.gpr[10] | ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AAC89C;
      }
      goto L_08AAC91C;
    }
L_08AAC91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1022 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1024 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AACA5C;
      }
      goto L_08AAC92C;
    }
L_08AAC92C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[13] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[13]) < 57 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC9C4;
      }
      goto L_08AAC940;
    }
L_08AAC940:
    ctx.gpr[10] = (0u + 0u);
    ctx.gpr[11] = (0u + 0u);
    goto L_08AAC948;
L_08AAC948:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAC994;
      }
      goto L_08AAC960;
    }
L_08AAC960:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08AAC964;
L_08AAC964:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08AAC968;
L_08AAC968:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[2] = (4095u << 16u);
    goto L_08AAC970;
L_08AAC970:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
    ctx.gpr[4] = (ctx.gpr[11] << 24u);
    if (ctx.gpr[2] != 0u) ctx.gpr[9] = (ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[4]);
    goto L_08AAC98C;
L_08AAC98C:
    ctx.gpr[11] = (ctx.gpr[11] >> 8u);
    goto L_08AAC898;
L_08AAC994:
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08AAC964;
    }
    goto L_08AAC99C;
L_08AAC99C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (4095u << 16u);
        goto L_08AAC970;
    }
    goto L_08AAC9B8;
L_08AAC9B8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08AAC968;
L_08AAC9C4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AAC9E4;
      }
      goto L_08AAC9D8;
    }
L_08AAC9D8:
    ctx.gpr[3] = (ctx.gpr[4] << (ctx.gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAC9FC;
      }
      goto L_08AAC9E4;
    }
L_08AAC9E4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[3] = (ctx.gpr[5] << (ctx.gpr[13] & 31u));
      if (branch_taken) {
          goto L_08AAC9F8;
      }
      goto L_08AAC9EC;
    }
L_08AAC9EC:
    ctx.gpr[6] = (0u - ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[4] >> (ctx.gpr[6] & 31u));
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[6]);
    goto L_08AAC9F8;
L_08AAC9F8:
    ctx.gpr[2] = (ctx.gpr[4] << (ctx.gpr[13] & 31u));
    goto L_08AAC9FC;
L_08AAC9FC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AACA30;
      }
      goto L_08AACA24;
    }
L_08AACA24:
    ctx.gpr[6] = (ctx.gpr[11] >> (ctx.gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AACA48;
      }
      goto L_08AACA30;
    }
L_08AACA30:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[10] >> (ctx.gpr[13] & 31u));
      if (branch_taken) {
          goto L_08AACA44;
      }
      goto L_08AACA38;
    }
L_08AACA38:
    ctx.gpr[8] = (0u - ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    goto L_08AACA44;
L_08AACA44:
    ctx.gpr[7] = (ctx.gpr[11] >> (ctx.gpr[13] & 31u));
    goto L_08AACA48;
L_08AACA48:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[10] = (ctx.gpr[6] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[7] | ctx.gpr[5]);
    goto L_08AAC948;
L_08AACA5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
      if (branch_taken) {
          goto L_08AACA74;
      }
      goto L_08AACA64;
    }
L_08AACA64:
    ctx.gpr[10] = (0u + 0u);
    ctx.gpr[11] = (0u + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AAC89C;
L_08AACA74:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[6] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[11] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(1023));
      if (branch_taken) {
          goto L_08AACAD4;
      }
      goto L_08AACA90;
    }
L_08AACA90:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08AACA94;
L_08AACA94:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08AACA98;
L_08AACA98:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[2] = (8191u << 16u);
    goto L_08AACAA0;
L_08AACAA0:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
        goto L_08AACAC8;
    }
    goto L_08AACAB0;
L_08AACAB0:
    ctx.gpr[2] = (ctx.gpr[11] << 31u);
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] >> 1u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
    goto L_08AACAC8;
L_08AACAC8:
    ctx.gpr[2] = (ctx.gpr[11] << 24u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    goto L_08AAC98C;
L_08AACAD4:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08AACA94;
    }
    goto L_08AACADC;
L_08AACADC:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (8191u << 16u);
        goto L_08AACAA0;
    }
    goto L_08AACAF8;
L_08AACAF8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08AACA98;
L_08AACB04:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (15u << 16u);
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[7] = (ctx.gpr[2] >> 20u);
    ctx.gpr[5] = (ctx.gpr[2] >> 31u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AACBAC;
      }
      goto L_08AACB30;
    }
L_08AACB30:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08AACB48;
      }
      goto L_08AACB3C;
    }
L_08AACB3C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08AACB40;
L_08AACB40:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACB48:
    ctx.gpr[4] = (4095u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AACBA0;
      }
      goto L_08AACB74;
    }
L_08AACB74:
    ctx.gpr[5] = (4095u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
    goto L_08AACB80;
L_08AACB80:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AACB80;
      }
      goto L_08AACB9C;
    }
L_08AACB9C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AACBA0;
L_08AACBA0:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACBAC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.gpr[6] = (ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08AACBEC;
      }
      goto L_08AACBB8;
    }
L_08AACBB8:
    ctx.gpr[3] = (ctx.gpr[9] << 8u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[6]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (ctx.gpr[8] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08AACB40;
L_08AACBEC:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AACB40;
      }
      goto L_08AACBF8;
    }
L_08AACBF8:
    ctx.gpr[3] = (8u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (ctx.gpr[8] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[9] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AACBA0;
    }
    goto L_08AACC14;
L_08AACC14:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AACBA0;
L_08AACC20:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AACC40;
      }
      goto L_08AACC30;
    }
L_08AACC30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
        goto L_08AACC4C;
    }
    goto L_08AACC40;
L_08AACC40:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AACC44;
L_08AACC44:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACC4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AACC70;
      }
      goto L_08AACC54;
    }
L_08AACC54:
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
        goto L_08AACC70;
    }
    goto L_08AACC60;
L_08AACC60:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[2]);
    goto L_08AACC44;
L_08AACC70:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AACCC4;
    }
    goto L_08AACC78;
L_08AACC78:
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AACCA8;
    }
    goto L_08AACC84;
L_08AACC84:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
      if (branch_taken) {
          goto L_08AACCB8;
      }
      goto L_08AACC90;
    }
L_08AACC90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_08AACC44;
      }
      goto L_08AACC98;
    }
L_08AACC98:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
        goto L_08AACCB8;
    }
    goto L_08AACCA4;
L_08AACCA4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08AACCA8;
L_08AACCA8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AACCB0;
L_08AACCB0:
    if (ctx.gpr[3] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
    goto L_08AACC44;
L_08AACCB8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AACCD0;
    }
    goto L_08AACCC0;
L_08AACCC0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AACCC4;
L_08AACCC4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AACCB0;
L_08AACCD0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AACC44;
      }
      goto L_08AACCE4;
    }
L_08AACCE4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AACC44;
      }
      goto L_08AACCFC;
    }
L_08AACCFC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AACC44;
      }
      goto L_08AACD10;
    }
L_08AACD10:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AACD7C;
    }
    goto L_08AACD24;
L_08AACD24:
    if (ctx.gpr[8] == ctx.gpr[4]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08AACD68;
    }
    goto L_08AACD2C;
L_08AACD2C:
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    goto L_08AACD30;
L_08AACD30:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
        goto L_08AACD5C;
    }
    goto L_08AACD38;
L_08AACD38:
    if (ctx.gpr[4] == ctx.gpr[8]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_08AACD48;
    }
    goto L_08AACD40;
L_08AACD40:
    ctx.gpr[4] = (0u + 0u);
    goto L_08AACC44;
L_08AACD48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (0u + 0u);
        goto L_08AACC44;
    }
    goto L_08AACD58;
L_08AACD58:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AACD5C;
L_08AACD5C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AACD60;
L_08AACD60:
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
    goto L_08AACC44;
L_08AACD68:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
        goto L_08AACD30;
    }
    goto L_08AACD78;
L_08AACD78:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AACD7C;
L_08AACD7C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AACD60;
L_08AACD84:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AACDF8;
      }
      goto L_08AACD9C;
    }
L_08AACD9C:
    ctx.gpr[2] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[2]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08AACDA8;
L_08AACDA8:
    ctx.gpr[3] = (127u << 16u);
    goto L_08AACDAC;
L_08AACDAC:
    ctx.gpr[2] = (65408u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[3] = (ctx.gpr[5] & ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    ctx.gpr[5] = (32895u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] << 23u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[2] = (32767u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (ctx.gpr[8] << 31u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACDF8:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
        goto L_08AACEA8;
    }
    goto L_08AACE04;
L_08AACE04:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (0u + 0u);
        goto L_08AACDA8;
    }
    goto L_08AACE10;
L_08AACE10:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[3] = (127u << 16u);
      if (branch_taken) {
          goto L_08AACDAC;
      }
      goto L_08AACE18;
    }
L_08AACE18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < -126 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AACE9C;
      }
      goto L_08AACE28;
    }
L_08AACE28:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-126));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AACE80;
      }
      goto L_08AACE3C;
    }
L_08AACE3C:
    ctx.gpr[5] = (0u + 0u);
    goto L_08AACE40;
L_08AACE40:
    ctx.gpr[3] = (ctx.gpr[5] & 127u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(64));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.gpr[2] = (ctx.gpr[5] & 128u);
        goto L_08AACE70;
    }
    goto L_08AACE50;
L_08AACE50:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    goto L_08AACE54;
L_08AACE54:
    ctx.gpr[2] = (16383u << 16u);
    goto L_08AACE58;
L_08AACE58:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != 0u) ctx.gpr[7] = (ctx.gpr[3]);
    goto L_08AACE68;
L_08AACE68:
    ctx.gpr[5] = (ctx.gpr[5] >> 7u);
    goto L_08AACDA8;
L_08AACE70:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08AACE54;
    }
    goto L_08AACE78;
L_08AACE78:
    ctx.gpr[2] = (16383u << 16u);
    goto L_08AACE58;
L_08AACE80:
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[5] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[5] >> (ctx.gpr[4] & 31u));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[3] | ctx.gpr[2]);
    goto L_08AACE40;
L_08AACE9C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (ctx.gpr[5] & 127u);
        goto L_08AACEB0;
    }
    goto L_08AACEA4;
L_08AACEA4:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08AACEA8;
L_08AACEA8:
    ctx.gpr[5] = (0u + 0u);
    goto L_08AACDA8;
L_08AACEB0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_08AACED4;
      }
      goto L_08AACEBC;
    }
L_08AACEBC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    goto L_08AACEC0;
L_08AACEC0:
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] >> 7u);
        goto L_08AACDA8;
    }
    goto L_08AACEC8;
L_08AACEC8:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AACE68;
L_08AACED4:
    ctx.gpr[2] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08AACEC0;
    }
    goto L_08AACEE0;
L_08AACEE0:
    // nop
    goto L_08AACEC0;
L_08AACEE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    ctx.gpr[7] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AACF3C;
      }
      goto L_08AACF10;
    }
L_08AACF10:
    ctx.gpr[31] = (0x08AACF18u);
    // nop
    ctx.pc = 0x08AB4044u;
    return;
L_08AACF18:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08AACF2C;
      }
      goto L_08AACF24;
    }
L_08AACF24:
    ctx.gpr[31] = (0x08AACF2Cu);
    // nop
    ctx.pc = 0x08AB4054u;
    return;
L_08AACF2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AACF30;
L_08AACF30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACF3C:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AACF48u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
    ctx.pc = 0x08AB404Cu;
    return;
L_08AACF48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AACF30;
L_08AACF50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AACF80u);
    ctx.gpr[16] = (ctx.gpr[6] + 0u);
    goto L_08AAD180;
L_08AACF80:
    ctx.gpr[3] = (32768u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 264u);
      if (branch_taken) {
          goto L_08AAD00C;
      }
      goto L_08AACF8C;
    }
L_08AACF8C:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + 0u);
    ctx.gpr[5] = (ctx.gpr[17] + 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[2] | 4u);
      if (branch_taken) {
          goto L_08AAD00C;
      }
      goto L_08AACFB0;
    }
L_08AACFB0:
    ctx.gpr[31] = (0x08AACFB8u);
    // nop
    goto L_08AAD260;
L_08AACFB8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AAD00C;
      }
      goto L_08AACFC4;
    }
L_08AACFC4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (32768u << 16u);
    ctx.gpr[8] = (ctx.gpr[3] | 264u);
    ctx.gpr[3] = (rt.memory().aot_load_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(3), ctx.gpr[3]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[3]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(7), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[5]));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(3), ctx.gpr[3]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(7), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AAD010;
      }
      goto L_08AACFFC;
    }
L_08AACFFC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAD008;
      }
      goto L_08AAD004;
    }
L_08AAD004:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AAD008;
L_08AAD008:
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    goto L_08AAD00C;
L_08AAD00C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08AAD010;
L_08AAD010:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[8] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD02C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AAD03C;
      }
      goto L_08AAD038;
    }
L_08AAD038:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AAD03C;
L_08AAD03C:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AAD044;
    }
    goto L_08AAD044;
L_08AAD044:
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AAD04C;
    }
    goto L_08AAD04C;
L_08AAD04C:
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
        goto L_08AAD054;
    }
    goto L_08AAD054;
L_08AAD054:
    if (ctx.gpr[9] != 0u) {
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AAD05C;
    }
    goto L_08AAD05C;
L_08AAD05C:
    ctx.gpr[3] = (32768u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 259u);
      if (branch_taken) {
          goto L_08AAD0BC;
      }
      goto L_08AAD068;
    }
L_08AAD068:
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(7), ctx.gpr[3]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9))))));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(3), ctx.gpr[2]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(7), ctx.gpr[3]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(31));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[11];
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08AAD0B4;
      }
      goto L_08AAD0A8;
    }
L_08AAD0A8:
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(139));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3)));
      if (branch_taken) {
          goto L_08AAD0C4;
      }
      goto L_08AAD0B4;
    }
L_08AAD0B4:
    ctx.gpr[3] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[3] | 264u);
    goto L_08AAD0BC;
L_08AAD0BC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD0C4:
    ctx.gpr[14] = (ctx.gpr[11] & 4u);
    if (ctx.gpr[14] == 0u) {
    ctx.gpr[5] = (ctx.gpr[11] & 8u);
        goto L_08AAD0F0;
    }
    goto L_08AAD0D0;
L_08AAD0D0:
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[4] = (ctx.gpr[24] << 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[3] = (ctx.gpr[15] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD0E8;
      }
      goto L_08AAD0E4;
    }
L_08AAD0E4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08AAD0E8;
L_08AAD0E8:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[11] & 8u);
    goto L_08AAD0F0;
L_08AAD0F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[12] = (ctx.gpr[11] & 16u);
      if (branch_taken) {
          goto L_08AAD11C;
      }
      goto L_08AAD0F8;
    }
L_08AAD0F8:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
        goto L_08AAD100;
    }
    goto L_08AAD100;
L_08AAD100:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD118;
      }
      goto L_08AAD10C;
    }
L_08AAD10C:
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD10C;
      }
      goto L_08AAD118;
    }
L_08AAD118:
    ctx.gpr[12] = (ctx.gpr[11] & 16u);
    goto L_08AAD11C;
L_08AAD11C:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[3] = (ctx.gpr[11] & 2u);
      if (branch_taken) {
          goto L_08AAD148;
      }
      goto L_08AAD124;
    }
L_08AAD124:
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
        goto L_08AAD12C;
    }
    goto L_08AAD12C;
L_08AAD12C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD144;
      }
      goto L_08AAD138;
    }
L_08AAD138:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD138;
      }
      goto L_08AAD144;
    }
L_08AAD144:
    ctx.gpr[3] = (ctx.gpr[11] & 2u);
    goto L_08AAD148;
L_08AAD148:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD170;
      }
      goto L_08AAD150;
    }
L_08AAD150:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
        goto L_08AAD170;
    }
    goto L_08AAD158;
L_08AAD158:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[4] << 8u);
    ctx.gpr[11] = (ctx.gpr[14] | ctx.gpr[15]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    goto L_08AAD170;
L_08AAD170:
    if (ctx.gpr[9] != 0u) {
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
        goto L_08AAD178;
    }
    goto L_08AAD178;
L_08AAD178:
    ctx.gpr[2] = (0u + 0u);
    goto L_08AAD0BC;
L_08AAD180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[8] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAD1A0u);
    ctx.gpr[9] = (ctx.gpr[29] + 0u);
    goto L_08AAD02C;
L_08AAD1A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) ctx.gpr[2] = (0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[14] = (ctx.gpr[4] + 0u);
    ctx.gpr[15] = (2221u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-5824));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[31]);
    goto L_08AAD27C;
L_08AAD27C:
    ctx.gpr[25] = (ctx.gpr[6] & 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[25]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[25] << 3u);
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    goto L_08AAD290;
L_08AAD290:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AAD2B4;
      }
      goto L_08AAD29C;
    }
L_08AAD29C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AAD2B4;
L_08AAD2B4:
    ctx.gpr[3] = ((ctx.gpr[2] >> 30u) & 0x00000003u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[10] = ((ctx.gpr[2] >> 29u) & 0x00000001u);
      if (branch_taken) {
          goto L_08AAD7B0;
      }
      goto L_08AAD2C0;
    }
L_08AAD2C0:
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(788), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08AAD34C;
      }
      goto L_08AAD2CC;
    }
L_08AAD2CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD2D4;
    }
L_08AAD2D4:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(108));
    goto L_08AAD2D8;
L_08AAD2D8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-4), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AAD2D8;
      }
      goto L_08AAD2EC;
    }
L_08AAD2EC:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(144));
    goto L_08AAD2F4;
L_08AAD2F4:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(144));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(304), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[20];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAD2F4;
      }
      goto L_08AAD30C;
    }
L_08AAD30C:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(16));
    goto L_08AAD310;
L_08AAD310:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-4), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AAD310;
      }
      goto L_08AAD324;
    }
L_08AAD324:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(64));
    goto L_08AAD328;
L_08AAD328:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(280), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AAD328;
      }
      goto L_08AAD33C;
    }
L_08AAD33C:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-188));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(636), static_cast<std::uint16_t>(ctx.gpr[11]));
    goto L_08AAD43C;
L_08AAD34C:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AAD370;
      }
      goto L_08AAD358;
    }
L_08AAD358:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AAD370;
L_08AAD370:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[2]);
    ctx.gpr[20] = ((ctx.gpr[2] >> 28u) & 0x0000000Fu);
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    ctx.gpr[8] = (ctx.gpr[15] + static_cast<std::uint32_t>(-4));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[15]);
    goto L_08AAD384;
L_08AAD384:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[20];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD3CC;
      }
      goto L_08AAD38C;
    }
L_08AAD38C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AAD3B4;
      }
      goto L_08AAD39C;
    }
L_08AAD39C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AAD3B4;
L_08AAD3B4:
    ctx.gpr[2] = (ctx.gpr[2] >> 29u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00007E00u) | ((ctx.gpr[2] & 0x0000003Fu) << 9u));
      if (branch_taken) {
          goto L_08AAD384;
      }
      goto L_08AAD3C0;
    }
L_08AAD3C0:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08AAD384;
L_08AAD3CC:
    ctx.gpr[31] = (0x08AAD3D4u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    goto L_08AAD724;
L_08AAD3D4:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD3E0;
    }
L_08AAD3E0:
    ctx.gpr[13] = ((ctx.gpr[13] >> 18u) & 0x0000001Fu);
    ctx.gpr[31] = (0x08AAD3ECu);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(257));
    goto L_08AAD618;
L_08AAD3EC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD3F4;
    }
L_08AAD3F4:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(61)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((ctx.gpr[9] & 0x0000001Fu) << 1u));
      if (branch_taken) {
          goto L_08AAD40C;
      }
      goto L_08AAD408;
    }
L_08AAD408:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(60))))));
    goto L_08AAD40C;
L_08AAD40C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[11];
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AAD3F4;
      }
      goto L_08AAD414;
    }
L_08AAD414:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    ctx.gpr[31] = (0x08AAD420u);
    ctx.gpr[13] = ((ctx.gpr[13] >> 23u) & 0x0000001Fu);
    goto L_08AAD614;
L_08AAD420:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((ctx.gpr[9] & 0x0000001Fu) << 1u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(124))))));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[11];
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AAD420;
      }
      goto L_08AAD438;
    }
L_08AAD438:
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((0u & 0x0000001Fu) << 1u));
    goto L_08AAD43C;
L_08AAD43C:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    goto L_08AAD440;
L_08AAD440:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.gpr[31] = (0x08AAD44Cu);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_08AAD5B8;
L_08AAD44C:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(638));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[10] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AAD4D0;
      }
      goto L_08AAD458;
    }
L_08AAD458:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.gpr[31] = (0x08AAD464u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(666)));
      if (branch_taken) {
          goto L_08AAD4FC;
      }
      goto L_08AAD464;
    }
L_08AAD464:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(636))))));
    ctx.gpr[31] = (0x08AAD470u);
    ctx.gpr[1] = (ctx.gpr[4] - ctx.gpr[20]);
    goto L_08AAD578;
L_08AAD470:
    ctx.gpr[20] = (ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[2])));
      if (branch_taken) {
          goto L_08AAD814;
      }
      goto L_08AAD47C;
    }
L_08AAD47C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-30));
    ctx.gpr[31] = (0x08AAD488u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAD4E0;
      }
      goto L_08AAD488;
    }
L_08AAD488:
    ctx.gpr[10] = (ctx.gpr[14] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD494;
    }
L_08AAD494:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[1] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08AAD440;
      }
      goto L_08AAD4A4;
    }
L_08AAD4A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AAD494;
L_08AAD4AC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD4D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD814;
      }
      goto L_08AAD4D8;
    }
L_08AAD4D8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AAD440;
L_08AAD4E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD4E8;
    }
L_08AAD4E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AAD4AC;
      }
      goto L_08AAD4F0;
    }
L_08AAD4F0:
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD4FC:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 28u));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[10];
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AAD51C;
      }
      goto L_08AAD508;
    }
L_08AAD508:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AAD4AC;
      }
      goto L_08AAD510;
    }
L_08AAD510:
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD51C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(788))))));
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD528;
    }
L_08AAD528:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AAD290;
      }
      goto L_08AAD530;
    }
L_08AAD530:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[14]);
      if (branch_taken) {
          goto L_08AAD548;
      }
      goto L_08AAD538;
    }
L_08AAD538:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(39));
    ctx.gpr[9] = (ctx.gpr[25] >> 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AAD548;
L_08AAD548:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD558:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((0u & 0x0000FFFFu) << 0u));
    goto L_08AAD588;
L_08AAD578:
    ctx.gpr[2] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[10] & 31u));
      if (branch_taken) {
          goto L_08AAD558;
      }
      goto L_08AAD588;
    }
L_08AAD588:
    ctx.gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
    ctx.gpr[10] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAD5D8;
      }
      goto L_08AAD598;
    }
L_08AAD598:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(58))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD5A4:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(60))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD5B8:
    ctx.gpr[2] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[12]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[12] & 31u));
      if (branch_taken) {
          goto L_08AAD558;
      }
      goto L_08AAD5C8;
    }
L_08AAD5C8:
    ctx.gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
    ctx.gpr[10] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAD598;
      }
      goto L_08AAD5D8;
    }
L_08AAD5D8:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          goto L_08AAD600;
      }
      goto L_08AAD5E0;
    }
L_08AAD5E0:
    ctx.gpr[10] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x00000001u) | ((ctx.gpr[10] & 0x00000001u) << 0u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(1));
    goto L_08AAD5EC;
L_08AAD5EC:
    ctx.gpr[3] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAD5A4;
      }
      goto L_08AAD5F8;
    }
L_08AAD5F8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08AAD5D8;
L_08AAD600:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(-31));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x00000001u) | ((ctx.gpr[24] & 0x00000001u) << 0u));
    goto L_08AAD5EC;
L_08AAD614:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08AAD618;
L_08AAD618:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[1] = (0u + 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[11] = (ctx.gpr[20] + 0u);
    ctx.hi = ctx.gpr[31];
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(760))))));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), 0u);
    goto L_08AAD638;
L_08AAD638:
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    goto L_08AAD63C;
L_08AAD63C:
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(790)));
      if (branch_taken) {
          goto L_08AAD718;
      }
      goto L_08AAD648;
    }
L_08AAD648:
    ctx.gpr[31] = (0x08AAD650u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(762));
    goto L_08AAD5B8;
L_08AAD650:
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[8] : ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AAD694;
      }
      goto L_08AAD65C;
    }
L_08AAD65C:
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AAD680;
      }
      goto L_08AAD668;
    }
L_08AAD668:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AAD680;
L_08AAD680:
    { const bool signed_ok = ctx.execute_signed_sub(10u, 0u, 10u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08AAD680u, 0x000A5022u); return; } }
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[2]);
    goto L_08AAD68C;
L_08AAD68C:
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    goto L_08AAD638;
L_08AAD694:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAD6B0;
      }
      goto L_08AAD69C;
    }
L_08AAD69C:
    ctx.gpr[1] = ((ctx.gpr[1] & ~0x00007E00u) | ((ctx.gpr[2] & 0x0000003Fu) << 9u));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != 0u) ctx.gpr[11] = (ctx.gpr[10]);
    goto L_08AAD638;
L_08AAD6B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[1]) <= 0;
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD6B8;
    }
L_08AAD6B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AAD6D8;
      }
      goto L_08AAD6C0;
    }
L_08AAD6C0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AAD6D8;
L_08AAD6D8:
    ctx.gpr[2] = (ctx.gpr[2] >> 30u);
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[1];
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AAD68C;
      }
      goto L_08AAD6E8;
    }
L_08AAD6E8:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[1]);
    goto L_08AAD6EC;
L_08AAD6EC:
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[1] != ctx.gpr[8];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAD6EC;
      }
      goto L_08AAD6FC;
    }
L_08AAD6FC:
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    goto L_08AAD63C;
L_08AAD704:
    ctx.gpr[2] = (ctx.gpr[1] >> (ctx.gpr[8] & 31u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD710;
    }
L_08AAD710:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[1]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD718:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[31] = (ctx.hi);
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD724;
    }
L_08AAD724:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[8] = (0u + 0u);
    ctx.gpr[13] = (ctx.gpr[20] + 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[9] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), 0u);
    goto L_08AAD740;
L_08AAD740:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[13];
    ctx.gpr[12] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAD704;
      }
      goto L_08AAD748;
    }
L_08AAD748:
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(60))))));
    goto L_08AAD750;
L_08AAD750:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[12];
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAD76C;
      }
      goto L_08AAD75C;
    }
L_08AAD75C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    goto L_08AAD750;
L_08AAD76C:
    ctx.gpr[12] = (ctx.gpr[2] >> 9u);
    ctx.gpr[2] = (ctx.gpr[2] & 511u);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[12];
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAD740;
      }
      goto L_08AAD780;
    }
L_08AAD780:
    ctx.gpr[10] = (ctx.gpr[8] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[12] + 0u);
      if (branch_taken) {
          goto L_08AAD7A8;
      }
      goto L_08AAD78C;
    }
L_08AAD78C:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (std::rotr(ctx.gpr[1], static_cast<int>(ctx.gpr[10] & 31u)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[13] - ctx.gpr[1]);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[1]);
    ctx.gpr[10] = (ctx.gpr[9] - ctx.gpr[10]);
    goto L_08AAD7A8;
L_08AAD7A8:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08AAD740;
L_08AAD7B0:
    { const bool signed_ok = ctx.execute_signed_sub(8u, 0u, 25u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08AAD7B0u, 0x00194022u); return; } }
    ctx.gpr[8] = (ctx.gpr[8] >> 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]));
    ctx.gpr[3] = (ctx.gpr[8] & 65535u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (~(ctx.gpr[8] | 0u));
      if (branch_taken) {
          goto L_08AAD814;
      }
      goto L_08AAD7D8;
    }
L_08AAD7D8:
    ctx.gpr[9] = (std::rotr(ctx.gpr[9], 16));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD7E4;
    }
L_08AAD7E4:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AAD7E4;
      }
      goto L_08AAD7F8;
    }
L_08AAD7F8:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AAD530;
      }
      goto L_08AAD800;
    }
L_08AAD800:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08AAD27C;
L_08AAD808:
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 264u);
    goto L_08AAD548;
L_08AAD814:
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 260u);
    goto L_08AAD548;
L_08AAD820:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(10240));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(9216));
    ctx.gpr[7] = (ctx.gpr[3] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[6] << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[10] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAD87C;
      }
      goto L_08AAD84C;
    }
L_08AAD84C:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(9216));
    ctx.gpr[11] = (ctx.gpr[12] & 65535u);
    ctx.gpr[6] = (ctx.gpr[11] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[3] = (ctx.gpr[8] | ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AAD870;
      }
      goto L_08AAD868;
    }
L_08AAD868:
    ctx.gpr[13] = (2223u << 16u);
    goto L_08AAD86C;
L_08AAD86C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(3160)));
    goto L_08AAD870;
L_08AAD870:
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD87C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[3] = (ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08AAD870;
      }
      goto L_08AAD884;
    }
L_08AAD884:
    ctx.gpr[13] = (2223u << 16u);
    goto L_08AAD86C;
L_08AAD88C:
    ctx.gpr[7] = (16u << 16u);
    ctx.gpr[9] = (65535u << 16u);
    ctx.gpr[2] = (ctx.gpr[9] | 10240u);
    ctx.gpr[8] = (ctx.gpr[7] | 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAD8B8;
      }
      goto L_08AAD8B0;
    }
L_08AAD8B0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[11] = (0u | 65535u);
      if (branch_taken) {
          goto L_08AAD8C4;
      }
      goto L_08AAD8B8;
    }
L_08AAD8B8:
    ctx.gpr[3] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3160)));
    ctx.gpr[11] = (0u | 65535u);
    goto L_08AAD8C4;
L_08AAD8C4:
    ctx.gpr[10] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
        goto L_08AAD8F4;
    }
    goto L_08AAD8D0;
L_08AAD8D0:
    ctx.gpr[24] = (65535u << 16u);
    ctx.gpr[14] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[15] = (ctx.gpr[14] >> 10u);
    ctx.gpr[12] = (ctx.gpr[15] + static_cast<std::uint32_t>(-10240));
    ctx.gpr[13] = (ctx.gpr[14] & 1023u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[5] = (ctx.gpr[13] + static_cast<std::uint32_t>(-9216));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AAD8F4;
L_08AAD8F4:
    ctx.gpr[25] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD900:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[4] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AAD928;
      }
      goto L_08AAD91C;
    }
L_08AAD91C:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AAD920;
L_08AAD920:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD928:
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(62));
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[3] & 127u);
      if (branch_taken) {
          goto L_08AAD94C;
      }
      goto L_08AAD940;
    }
L_08AAD940:
    ctx.gpr[3] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3156)));
    goto L_08AAD91C;
L_08AAD94C:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[4] & ctx.gpr[14]);
    ctx.gpr[10] = (ctx.gpr[13] << 6u);
    ctx.gpr[11] = (ctx.gpr[12] & 63u);
    ctx.gpr[4] = (ctx.gpr[10] | ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[9] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD94C;
      }
      goto L_08AAD974;
    }
L_08AAD974:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AAD920;
L_08AAD97C:
    ctx.gpr[10] = (ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AADA2C;
      }
      goto L_08AAD988;
    }
L_08AAD988:
    ctx.gpr[3] = (ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
        goto L_08AAD9A4;
    }
    goto L_08AAD994;
L_08AAD994:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AAD99C;
L_08AAD99C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD9A4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD9C0;
      }
      goto L_08AAD9B0;
    }
L_08AAD9B0:
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD9B0;
      }
      goto L_08AAD9C0;
    }
L_08AAD9C0:
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(7));
    ctx.gpr[14] = (ctx.gpr[15] - ctx.gpr[7]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[13] << (ctx.gpr[14] & 31u));
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[11];
    ctx.gpr[6] = (ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AADA14;
      }
      goto L_08AAD9F0;
    }
L_08AAD9F0:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AAD9F8;
L_08AAD9F8:
    ctx.gpr[25] = (ctx.gpr[5] & 63u);
    ctx.gpr[24] = (ctx.gpr[25] | ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
      if (branch_taken) {
          goto L_08AAD9F8;
      }
      goto L_08AADA14;
    }
L_08AADA14:
    ctx.gpr[11] = (ctx.gpr[9] >> 1u);
    ctx.gpr[8] = (ctx.gpr[5] & ctx.gpr[11]);
    ctx.gpr[7] = (~(0u | ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAD99C;
L_08AADA2C:
    ctx.gpr[3] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3156)));
    goto L_08AAD988;
L_08AADA38:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[2] & 255u);
    ctx.gpr[10] = (ctx.gpr[4] >> 7u);
    ctx.gpr[8] = (ctx.gpr[10] ^ 1u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AADA70;
      }
      goto L_08AADA64;
    }
L_08AADA64:
    ctx.gpr[11] = (ctx.gpr[4] < static_cast<std::uint32_t>(253) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[14] = (ctx.gpr[4] + static_cast<std::uint32_t>(127));
        goto L_08AADA7C;
    }
    goto L_08AADA70;
L_08AADA70:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AADA74;
L_08AADA74:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADA7C:
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
    ctx.gpr[12] = (ctx.gpr[13] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    ctx.gpr[9] = (0u + 0u);
    ctx.gpr[6] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08AADB68;
      }
      goto L_08AADA94;
    }
L_08AADA94:
    ctx.gpr[15] = (ctx.gpr[4] << 1u);
    ctx.gpr[6] = (ctx.gpr[15] + static_cast<std::uint32_t>(-257));
    goto L_08AADA9C;
L_08AADA9C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AADAE8;
      }
      goto L_08AADAA4;
    }
L_08AADAA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.gpr[25] = (ctx.gpr[3] & 255u);
    ctx.gpr[24] = (ctx.gpr[25] < static_cast<std::uint32_t>(63) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AADB30;
      }
      goto L_08AADABC;
    }
L_08AADABC:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-63));
    goto L_08AADAC0;
L_08AADAC0:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AADAE8;
      }
      goto L_08AADAC8;
    }
L_08AADAC8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_08AADB28;
      }
      goto L_08AADAD4;
    }
L_08AADAD4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[15];
    ctx.gpr[2] = (ctx.gpr[6] ^ 77u);
      if (branch_taken) {
          goto L_08AADB20;
      }
      goto L_08AADADC;
    }
L_08AADADC:
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(15));
    if (ctx.gpr[2] == 0u) ctx.gpr[6] = (ctx.gpr[24]);
    goto L_08AADAE4;
L_08AADAE4:
    ctx.gpr[10] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08AADAE8;
L_08AADAE8:
    ctx.gpr[11] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[25] = (ctx.gpr[10] | ctx.gpr[11]);
    if (ctx.gpr[25] == 0u) {
    ctx.gpr[14] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
        goto L_08AADB04;
    }
    goto L_08AADAF8;
L_08AADAF8:
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(3152)));
    goto L_08AADA74;
L_08AADB04:
    ctx.gpr[13] = (ctx.gpr[9] << 15u);
    ctx.gpr[3] = (ctx.gpr[14] << 8u);
    ctx.gpr[9] = (ctx.gpr[13] | ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[9] | ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[6] & 65535u);
    goto L_08AADA74;
L_08AADB20:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(5));
    goto L_08AADAE4;
L_08AADB28:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AADAE4;
L_08AADB30:
    ctx.gpr[12] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.gpr[11] = (ctx.gpr[12] & 255u);
    ctx.gpr[10] = (ctx.gpr[11] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[14] = (ctx.gpr[4] + static_cast<std::uint32_t>(97));
      if (branch_taken) {
          goto L_08AADB4C;
      }
      goto L_08AADB44;
    }
L_08AADB44:
    ctx.gpr[8] = (ctx.gpr[3] + 0u);
    goto L_08AADAC0;
L_08AADB4C:
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
    ctx.gpr[3] = (ctx.gpr[13] < static_cast<std::uint32_t>(94) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADAC0;
      }
      goto L_08AADB5C;
    }
L_08AADB5C:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-158));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08AADAC0;
L_08AADB68:
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[25] = (ctx.gpr[10] & 255u);
    ctx.gpr[24] = (ctx.gpr[25] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[13] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADB88;
      }
      goto L_08AADB7C;
    }
L_08AADB7C:
    ctx.gpr[3] = (ctx.gpr[4] << 1u);
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(-385));
    goto L_08AADA9C;
L_08AADB88:
    ctx.gpr[12] = (ctx.gpr[13] & 255u);
    ctx.gpr[11] = (ctx.gpr[12] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AADAE8;
      }
      goto L_08AADB98;
    }
L_08AADB98:
    ctx.gpr[15] = (ctx.gpr[4] << 1u);
    ctx.gpr[9] = (ctx.gpr[15] + static_cast<std::uint32_t>(-411));
    ctx.gpr[14] = (ctx.gpr[4] < static_cast<std::uint32_t>(244) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[15] + static_cast<std::uint32_t>(-473));
    if (ctx.gpr[14] == 0u) ctx.gpr[6] = (ctx.gpr[9]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AADA9C;
L_08AADBB4:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-160));
    ctx.gpr[3] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[3] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AADC74;
      }
      goto L_08AADBD8;
    }
L_08AADBD8:
    ctx.gpr[14] = (ctx.gpr[5] >> 8u);
    ctx.gpr[10] = (ctx.gpr[14] & 127u);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-33));
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(94) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 127u);
    ctx.gpr[9] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[13] = (ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[9] | ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[9] = (ctx.gpr[5] >> 15u);
      if (branch_taken) {
          goto L_08AADC58;
      }
      goto L_08AADC00;
    }
L_08AADC00:
    ctx.gpr[15] = (ctx.gpr[4] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    if (ctx.gpr[15] == 0u) {
    ctx.gpr[2] = (0u + 0u);
        goto L_08AADC5C;
    }
    goto L_08AADC0C;
L_08AADC0C:
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
        goto L_08AADC5C;
    }
    goto L_08AADC14;
L_08AADC14:
    ctx.gpr[13] = (ctx.gpr[10] ^ 34u);
    ctx.gpr[9] = (ctx.gpr[10] ^ 38u);
    ctx.gpr[25] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[25] | ctx.gpr[12]);
    if (ctx.gpr[24] != 0u) {
    ctx.gpr[2] = (0u + 0u);
        goto L_08AADC5C;
    }
    goto L_08AADC30;
L_08AADC30:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    ctx.gpr[14] = (ctx.gpr[10] + static_cast<std::uint32_t>(-41));
      if (branch_taken) {
          goto L_08AADC58;
      }
      goto L_08AADC3C;
    }
L_08AADC3C:
    ctx.gpr[4] = (ctx.gpr[14] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AADC5C;
      }
      goto L_08AADC48;
    }
L_08AADC48:
    ctx.gpr[15] = (ctx.gpr[10] + static_cast<std::uint32_t>(-48));
    ctx.gpr[10] = (ctx.gpr[15] < static_cast<std::uint32_t>(62) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AADC5C;
      }
      goto L_08AADC58;
    }
L_08AADC58:
    ctx.gpr[2] = (0u + 0u);
    goto L_08AADC5C;
L_08AADC5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[12] = (ctx.gpr[7] & 65535u);
      if (branch_taken) {
          goto L_08AADC78;
      }
      goto L_08AADC64;
    }
L_08AADC64:
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(3152)));
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-160));
    goto L_08AADC74;
L_08AADC74:
    ctx.gpr[12] = (ctx.gpr[7] & 65535u);
    goto L_08AADC78;
L_08AADC78:
    ctx.gpr[25] = (ctx.gpr[12] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[8] | ctx.gpr[25]);
    if (ctx.gpr[24] != 0u) {
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08AADCEC;
    }
    goto L_08AADC88;
L_08AADC88:
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(-253));
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08AADCEC;
    }
    goto L_08AADC98;
L_08AADC98:
    ctx.gpr[3] = (ctx.gpr[5] >> 8u);
    ctx.gpr[2] = (ctx.gpr[5] & 127u);
    ctx.gpr[7] = (ctx.gpr[3] & 127u);
    ctx.gpr[13] = (ctx.gpr[5] >> 15u);
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08AADD0C;
      }
      goto L_08AADCB4;
    }
L_08AADCB4:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(225));
    ctx.gpr[14] = (ctx.gpr[5] < static_cast<std::uint32_t>(63) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] >> 1u);
    ctx.gpr[4] = (ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AADCD4;
      }
      goto L_08AADCCC;
    }
L_08AADCCC:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(353));
    ctx.gpr[2] = (ctx.gpr[10] >> 1u);
    goto L_08AADCD4;
L_08AADCD4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AADCD8;
L_08AADCD8:
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (ctx.gpr[8] < static_cast<std::uint32_t>(64) ? 1u : 0u);
        goto L_08AADCF8;
    }
    goto L_08AADCE4;
L_08AADCE4:
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(-98));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AADCEC;
L_08AADCEC:
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADCF8:
    ctx.gpr[15] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(63));
    if (ctx.gpr[7] == 0u) ctx.gpr[10] = (ctx.gpr[15]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_08AADCEC;
L_08AADD0C:
    ctx.gpr[15] = (ctx.gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[14] = (ctx.gpr[7] + static_cast<std::uint32_t>(379));
      if (branch_taken) {
          goto L_08AADD3C;
      }
      goto L_08AADD18;
    }
L_08AADD18:
    ctx.gpr[13] = (ctx.gpr[5] >> 3u);
    ctx.gpr[12] = (ctx.gpr[7] + static_cast<std::uint32_t>(447));
    ctx.gpr[9] = (ctx.gpr[13] << 1u);
    ctx.gpr[25] = (ctx.gpr[9] + ctx.gpr[13]);
    ctx.gpr[24] = (ctx.gpr[12] >> 1u);
    ctx.gpr[7] = (ctx.gpr[24] - ctx.gpr[25]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AADD34;
L_08AADD34:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08AADCD8;
L_08AADD3C:
    ctx.gpr[3] = (ctx.gpr[14] >> 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08AADD34;
L_08AAE4DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AAE4F0;
L_08AAE4F0:
    ctx.gpr[31] = (0x08AAE4F8u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AAD900;
L_08AAE4F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AAE508;
      }
      goto L_08AAE500;
    }
L_08AAE500:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AAE4F0;
L_08AAE508:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE5AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2223u << 16u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[3] = (ctx.gpr[2] | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AAE6BC;
      }
      goto L_08AAE5D8;
    }
L_08AAE5D8:
    ctx.gpr[9] = (2223u << 16u);
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(3292));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(3180));
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8124), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(6892));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8120), ctx.gpr[3]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08AAE604;
L_08AAE604:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[3] < static_cast<std::uint32_t>(608) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAE604;
      }
      goto L_08AAE618;
    }
L_08AAE618:
    ctx.gpr[11] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[11] + static_cast<std::uint32_t>(7500));
    ctx.gpr[3] = (0u + 0u);
    goto L_08AAE624;
L_08AAE624:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[3] < static_cast<std::uint32_t>(608) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAE624;
      }
      goto L_08AAE638;
    }
L_08AAE638:
    ctx.gpr[14] = (2223u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(448));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[31] = (0x08AAE650u);
    ctx.gpr[17] = (ctx.gpr[14] + static_cast<std::uint32_t>(8108));
    ctx.pc = 0x08AB4284u;
    return;
L_08AAE650:
    ctx.gpr[13] = (32836u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (ctx.gpr[13] | 1u);
      if (branch_taken) {
          goto L_08AAE6BC;
      }
      goto L_08AAE660;
    }
L_08AAE660:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[31] = (0x08AAE674u);
    ctx.gpr[16] = (2223u << 16u);
    ctx.pc = 0x08AB4284u;
    return;
L_08AAE674:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8128), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(8128));
      if (branch_taken) {
          goto L_08AAE714;
      }
      goto L_08AAE680;
    }
L_08AAE680:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08AAE690u);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08AB4284u;
    return;
L_08AAE690:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAE704;
      }
      goto L_08AAE698;
    }
L_08AAE698:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08AAE6A8u);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08AB4284u;
    return;
L_08AAE6A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAE6DC;
      }
      goto L_08AAE6B0;
    }
L_08AAE6B0:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3172), ctx.gpr[16]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08AAE6BC;
L_08AAE6BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE6DC:
    ctx.gpr[31] = (0x08AAE6E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08AB428Cu;
    return;
L_08AAE6E4:
    ctx.gpr[31] = (0x08AAE6ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8128)));
    ctx.pc = 0x08AB428Cu;
    return;
L_08AAE6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AAE6F0;
L_08AAE6F0:
    ctx.gpr[31] = (0x08AAE6F8u);
    // nop
    ctx.pc = 0x08AB428Cu;
    return;
L_08AAE6F8:
    ctx.gpr[15] = (32836u << 16u);
    ctx.gpr[3] = (ctx.gpr[15] | 1u);
    goto L_08AAE6BC;
L_08AAE704:
    ctx.gpr[31] = (0x08AAE70Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08AB428Cu;
    return;
L_08AAE70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8128)));
    goto L_08AAE6F0;
L_08AAE714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AAE6F0;
L_08AAEB2C:
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[3] = (ctx.gpr[2] | 5u);
      if (branch_taken) {
          goto L_08AAEB58;
      }
      goto L_08AAEB3C;
    }
L_08AAEB3C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(6892));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08AAEB58;
L_08AAEB58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEDC4:
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[3] = (ctx.gpr[2] | 5u);
      if (branch_taken) {
          goto L_08AAEE30;
      }
      goto L_08AAEDD8;
    }
L_08AAEDD8:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(6892));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(7500));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AAEE38;
      }
      goto L_08AAEE04;
    }
L_08AAEE04:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[12] = (18u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[10] = (ctx.gpr[11] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    goto L_08AAEE2C;
L_08AAEE2C:
    ctx.gpr[3] = (0u + 0u);
    goto L_08AAEE30;
L_08AAEE30:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEE38:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    goto L_08AAEE2C;
L_08AAEE50:
    ctx.gpr[6] = (0u | 65408u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (32836u << 16u);
    ctx.gpr[2] = (ctx.gpr[6] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 16u);
      if (branch_taken) {
          goto L_08AAEEB0;
      }
      goto L_08AAEE78;
    }
L_08AAEE78:
    ctx.gpr[3] = (32836u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] | 17u);
      if (branch_taken) {
          goto L_08AAEEB0;
      }
      goto L_08AAEE88;
    }
L_08AAEE88:
    ctx.gpr[9] = (2223u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(8128));
    ctx.gpr[3] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 17u);
      if (branch_taken) {
          goto L_08AAEEB0;
      }
      goto L_08AAEEA4;
    }
L_08AAEEA4:
    ctx.gpr[31] = (0x08AAEEACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08AB42ACu;
    return;
L_08AAEEAC:
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
    goto L_08AAEEB0;
L_08AAEEB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEF90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (0u | 32768u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[11] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[2] | 16u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAEFE8;
      }
      goto L_08AAEFB0;
    }
L_08AAEFB0:
    ctx.gpr[11] = (32836u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[11] | 10u);
      if (branch_taken) {
          goto L_08AAEFE8;
      }
      goto L_08AAEFC0;
    }
L_08AAEFC0:
    ctx.gpr[12] = (2223u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[9] = (ctx.gpr[12] + static_cast<std::uint32_t>(8128));
    ctx.gpr[4] = (32836u << 16u);
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 10u);
      if (branch_taken) {
          goto L_08AAEFE8;
      }
      goto L_08AAEFDC;
    }
L_08AAEFDC:
    ctx.gpr[31] = (0x08AAEFE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08AB427Cu;
    return;
L_08AAEFE4:
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    goto L_08AAEFE8;
L_08AAEFE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[8] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF0E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[3] = (32836u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[3] | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AAF150;
      }
      goto L_08AAF10C;
    }
L_08AAF10C:
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[31] = (0x08AAF118u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8112)));
    ctx.pc = 0x08AB428Cu;
    return;
L_08AAF118:
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8128)));
    ctx.gpr[31] = (0x08AAF128u);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(8128));
    ctx.pc = 0x08AB428Cu;
    return;
L_08AAF128:
    ctx.gpr[31] = (0x08AAF130u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08AB428Cu;
    return;
L_08AAF130:
    ctx.gpr[31] = (0x08AAF138u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08AB428Cu;
    return;
L_08AAF138:
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8124), 0u);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3172), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8120), 0u);
    ctx.gpr[4] = (0u + 0u);
    goto L_08AAF150;
L_08AAF150:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF2A4:
    ctx.gpr[3] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(8128));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[7] = (32836u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[7] | 16u);
      if (branch_taken) {
          goto L_08AAF2D4;
      }
      goto L_08AAF2CC;
    }
L_08AAF2CC:
    ctx.gpr[31] = (0x08AAF2D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08AB4294u;
    return;
L_08AAF2D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF2E0:
    ctx.gpr[3] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[3] + static_cast<std::uint32_t>(8128));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (32836u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 16u);
      if (branch_taken) {
          goto L_08AAF310;
      }
      goto L_08AAF308;
    }
L_08AAF308:
    ctx.gpr[31] = (0x08AAF310u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08AB429Cu;
    return;
L_08AAF310:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF31C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    ctx.gpr[2] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5572));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(4096));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-3136));
    ctx.gpr[6] = (ctx.gpr[16] + 0u);
    ctx.gpr[10] = (2223u << 16u);
    ctx.gpr[8] = (0u + 0u);
    ctx.gpr[9] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAF358u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(3176), 0u);
    ctx.pc = 0x08AB45E4u;
    return;
L_08AAF358:
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[3] = (32836u << 16u);
    ctx.gpr[7] = (ctx.gpr[3] | 3u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(8108));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8108), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[6] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AAF3AC;
      }
      goto L_08AAF37C;
    }
L_08AAF37C:
    ctx.gpr[31] = (0x08AAF384u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.pc = 0x08AB4594u;
    return;
L_08AAF384:
    ctx.gpr[6] = (32836u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(10000));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 3u);
      if (branch_taken) {
          goto L_08AAF3AC;
      }
      goto L_08AAF394;
    }
L_08AAF394:
    ctx.gpr[31] = (0x08AAF39Cu);
    // nop
    ctx.pc = 0x08AB469Cu;
    return;
L_08AAF39C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3172), ctx.gpr[7]);
    ctx.gpr[7] = (0u + 0u);
    goto L_08AAF3AC;
L_08AAF3AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF3C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[23] = (2223u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(3176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AAF480;
      }
      goto L_08AAF400;
    }
L_08AAF400:
    ctx.gpr[3] = (2223u << 16u);
    ctx.gpr[30] = (ctx.gpr[3] + 0u);
    ctx.gpr[22] = (ctx.gpr[3] + static_cast<std::uint32_t>(3308));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    goto L_08AAF410;
L_08AAF410:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] << 8u);
    ctx.gpr[31] = (0x08AAF420u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[22]);
    goto L_08AAF4DC;
L_08AAF420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(3308));
      if (branch_taken) {
          goto L_08AAF4CC;
      }
      goto L_08AAF428;
    }
L_08AAF428:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[16] + 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(112));
    goto L_08AAF438;
L_08AAF438:
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AAF444u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08AAF4DC;
L_08AAF444:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AAF438;
      }
      goto L_08AAF44C;
    }
L_08AAF44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08AAF45Cu);
    ctx.gpr[5] = (0u | 32768u);
    ctx.pc = 0x08AB4274u;
    return;
L_08AAF45C:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[7] >> 31u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[8] << 1u);
    ctx.gpr[19] = (ctx.gpr[7] - ctx.gpr[2]);
    goto L_08AAF474;
L_08AAF474:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(3176)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_08AAF410;
      }
      goto L_08AAF480;
    }
L_08AAF480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[31] = (0x08AAF490u);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08AB4274u;
    return;
L_08AAF490:
    ctx.gpr[31] = (0x08AAF498u);
    ctx.gpr[4] = (0u + 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_08AAF498:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF4CC:
    ctx.gpr[31] = (0x08AAF4D4u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(10000));
    ctx.pc = 0x08AB469Cu;
    return;
L_08AAF4D4:
    // nop
    goto L_08AAF474;
L_08AAF4DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[3] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u + 0u);
    goto L_08AAF518;
L_08AAF518:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF518;
      }
      goto L_08AAF52C;
    }
L_08AAF52C:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(6892));
    ctx.gpr[16] = (ctx.gpr[3] + 0u);
    ctx.gpr[17] = (0u + 0u);
    ctx.gpr[30] = (ctx.gpr[3] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (0u + 0u);
    ctx.gpr[23] = (ctx.gpr[3] + 0u);
    goto L_08AAF548;
L_08AAF548:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AAF59C;
    }
    goto L_08AAF554;
L_08AAF554:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AAF558;
L_08AAF558:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08AAF548;
      }
      goto L_08AAF568;
    }
L_08AAF568:
    ctx.gpr[2] = (ctx.gpr[20] + 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF59C:
    ctx.gpr[6] = (ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF610;
      }
      goto L_08AAF5A8;
    }
L_08AAF5A8:
    ctx.gpr[7] = (ctx.gpr[3] & 256u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AAF5F0;
    }
    goto L_08AAF5B4;
L_08AAF5B4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (2223u << 16u);
      if (branch_taken) {
          goto L_08AAF5DC;
      }
      goto L_08AAF5C0;
    }
L_08AAF5C0:
    ctx.gpr[3] = (2223u << 16u);
    goto L_08AAF5C4;
L_08AAF5C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8124)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08AAF5D4u);
    ctx.gpr[5] = (ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 3u, 0x08AB0024u>(ctx, &aot_mem) && ctx.pc == 0x08AAF5D4u) goto L_08AAF5D4;
    return;
L_08AAF5D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AAF558;
L_08AAF5DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8124)));
    ctx.gpr[31] = (0x08AAF5E8u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    goto L_08AAF808;
L_08AAF5E8:
    ctx.gpr[3] = (2223u << 16u);
    goto L_08AAF5C4;
L_08AAF5F0:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[3] = (2223u << 16u);
        goto L_08AAF5C4;
    }
    goto L_08AAF5F8;
L_08AAF5F8:
    ctx.gpr[2] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8124)));
    ctx.gpr[31] = (0x08AAF608u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    goto L_08AAFAB4;
L_08AAF608:
    ctx.gpr[3] = (2223u << 16u);
    goto L_08AAF5C4;
L_08AAF610:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[3] = (2223u << 16u);
        goto L_08AAF5C4;
    }
    goto L_08AAF61C;
L_08AAF61C:
    ctx.gpr[12] = (2223u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8124)));
    ctx.gpr[4] = (0u + 0u);
    goto L_08AAF628;
L_08AAF628:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[4] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF628;
      }
      goto L_08AAF63C;
    }
L_08AAF63C:
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[23]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[14] = (ctx.gpr[15] & 256u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[25] = (2223u << 16u);
      if (branch_taken) {
          goto L_08AAF69C;
      }
      goto L_08AAF650;
    }
L_08AAF650:
    ctx.gpr[22] = (2223u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.gpr[31] = (0x08AAF66Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAF66Cu) goto L_08AAF66C;
    return;
L_08AAF66C:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AAF674;
    }
    goto L_08AAF674;
L_08AAF674:
    ctx.gpr[24] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(8124)));
    ctx.gpr[22] = (2223u << 16u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(6944));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[30]);
    ctx.gpr[31] = (0x08AAF694u);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[18]);
    goto L_08AAF6C4;
L_08AAF694:
    ctx.gpr[3] = (2223u << 16u);
    goto L_08AAF5C4;
L_08AAF69C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8124)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[22];
    ctx.gpr[31] = (0x08AAF6B4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAF6B4u) goto L_08AAF6B4;
    return;
L_08AAF6B4:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AAF5C0;
    }
    goto L_08AAF6BC;
L_08AAF6BC:
    ctx.gpr[3] = (2223u << 16u);
    goto L_08AAF5C4;
L_08AAF6C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[15] = (ctx.gpr[5] + 0u);
    ctx.gpr[10] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-5584));
    ctx.gpr[19] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[7] + 0u);
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (ctx.gpr[3] & 15u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08AAF7E8;
      }
      goto L_08AAF724;
    }
L_08AAF724:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[24] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(13));
    goto L_08AAF740;
L_08AAF740:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[15] + ctx.gpr[12]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32768));
    ctx.gpr[5] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[3] = (ctx.gpr[4] << 28u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[24] & 31u)));
    ctx.gpr[3] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[3] << (ctx.gpr[16] & 31u));
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 6u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.gpr[5] = (ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < -32768 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) ctx.gpr[5] = (ctx.gpr[7]);
    ctx.gpr[3] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) ctx.gpr[4] = (ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < -32768 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) ctx.gpr[4] = (ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAF740;
      }
      goto L_08AAF7DC;
    }
L_08AAF7DC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[17] + 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AAF7E8;
L_08AAF7E8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF808:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(6892));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (0u + 0u);
    goto L_08AAF840;
L_08AAF840:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[3] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF840;
      }
      goto L_08AAF854;
    }
L_08AAF854:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(6892));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAFA10;
      }
      goto L_08AAF878;
    }
L_08AAF878:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF980;
      }
      goto L_08AAF880;
    }
L_08AAF880:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF8A0;
    }
    goto L_08AAF88C;
L_08AAF88C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AAF890;
L_08AAF890:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF8A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[3]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAF890;
      }
      goto L_08AAF8AC;
    }
L_08AAF8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AAF978;
    }
    goto L_08AAF8C0;
L_08AAF8C0:
    ctx.gpr[11] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AAF8D0;
L_08AAF8D0:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF8D0;
      }
      goto L_08AAF8EC;
    }
L_08AAF8EC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAF8F0;
L_08AAF8F0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(6940));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[2] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[10] + 0u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08AAF918u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_08AAF6C4;
L_08AAF918:
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[10];
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AAF95C;
      }
      goto L_08AAF924;
    }
L_08AAF924:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[14];
    ctx.gpr[12] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08AAF940;
      }
      goto L_08AAF92C;
    }
L_08AAF92C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[12]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    goto L_08AAF88C;
L_08AAF940:
    ctx.gpr[24] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    ctx.gpr[15] = (ctx.gpr[16] + ctx.gpr[24]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    goto L_08AAF88C;
L_08AAF95C:
    ctx.gpr[3] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    ctx.gpr[25] = (ctx.gpr[16] + ctx.gpr[3]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    goto L_08AAF88C;
L_08AAF978:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    goto L_08AAF88C;
L_08AAF980:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAF890;
      }
      goto L_08AAF988;
    }
L_08AAF988:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AAF978;
    }
    goto L_08AAF9A0;
L_08AAF9A0:
    ctx.gpr[11] = (2223u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (0u + 0u);
    goto L_08AAF9B0;
L_08AAF9B0:
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[8] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF9B0;
      }
      goto L_08AAF9CC;
    }
L_08AAF9CC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(6892));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(52));
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[25] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + 0u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AAFA08u);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08AAF6C4;
L_08AAFA08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AAF890;
L_08AAFA10:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAF890;
      }
      goto L_08AAFA20;
    }
L_08AAFA20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08AAFA68;
      }
      goto L_08AAFA34;
    }
L_08AAFA34:
    ctx.gpr[11] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AAFA44;
L_08AAFA44:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFA44;
      }
      goto L_08AAFA60;
    }
L_08AAFA60:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAF8F0;
L_08AAFA68:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[25] = (ctx.gpr[4] + static_cast<std::uint32_t>(6892));
    ctx.gpr[11] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[24] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[16]);
    goto L_08AAFA90;
L_08AAFA90:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFA90;
      }
      goto L_08AAFAAC;
    }
L_08AAFAAC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAF8F0;
L_08AAFAB4:
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[11] = (ctx.gpr[5] + 0u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAFC94;
      }
      goto L_08AAFAE4;
    }
L_08AAFAE4:
    ctx.gpr[5] = (ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AAFBD0;
      }
      goto L_08AAFAF0;
    }
L_08AAFAF0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[13] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AAFB50;
      }
      goto L_08AAFB08;
    }
L_08AAFB08:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    goto L_08AAFB10;
L_08AAFB10:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[6] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFB10;
      }
      goto L_08AAFB2C;
    }
L_08AAFB2C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAFB30;
L_08AAFB30:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[14]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(56));
    goto L_08AAFB48;
L_08AAFB48:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFB50:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFB50;
      }
      goto L_08AAFB64;
    }
L_08AAFB64:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[25] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[15] - ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[24]);
      if (branch_taken) {
          goto L_08AAFBB0;
      }
      goto L_08AAFB94;
    }
L_08AAFB94:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFB94;
      }
      goto L_08AAFBB0;
    }
L_08AAFBB0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAFBB4;
L_08AAFBB4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[11] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFBD0:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[15] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AAFC2C;
      }
      goto L_08AAFBE8;
    }
L_08AAFBE8:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    goto L_08AAFBF0;
L_08AAFBF0:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFBF0;
      }
      goto L_08AAFC0C;
    }
L_08AAFC0C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAFC10;
L_08AAFC10:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(112));
    goto L_08AAFB48;
L_08AAFC2C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFC2C;
      }
      goto L_08AAFC40;
    }
L_08AAFC40:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08AAFBB0;
      }
      goto L_08AAFC70;
    }
L_08AAFC70:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFC70;
      }
      goto L_08AAFC8C;
    }
L_08AAFC8C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAFBB4;
L_08AAFC94:
    ctx.gpr[24] = (ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08AAFE64;
      }
      goto L_08AAFCA0;
    }
L_08AAFCA0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[3]) < 56 ? 1u : 0u);
    if (ctx.gpr[25] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08AAFD8C;
    }
    goto L_08AAFCB0;
L_08AAFCB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[3] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAFCF4;
      }
      goto L_08AAFCC4;
    }
L_08AAFCC4:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AAFCD0;
L_08AAFCD0:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFCD0;
      }
      goto L_08AAFCEC;
    }
L_08AAFCEC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAFB30;
L_08AAFCF4:
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.gpr[7] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AAFD20;
      }
      goto L_08AAFD04;
    }
L_08AAFD04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFD04;
      }
      goto L_08AAFD20;
    }
L_08AAFD20:
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[25] - ctx.gpr[9]);
    ctx.gpr[24] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[24] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAFD6C;
      }
      goto L_08AAFD50;
    }
L_08AAFD50:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFD50;
      }
      goto L_08AAFD6C;
    }
L_08AAFD6C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(56));
    goto L_08AAFD7C;
L_08AAFD7C:
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AAFB48;
L_08AAFD8C:
    ctx.gpr[6] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[5] = (ctx.gpr[3] - ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AAFDBC;
      }
      goto L_08AAFDA0;
    }
L_08AAFDA0:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFDA0;
      }
      goto L_08AAFDBC;
    }
L_08AAFDBC:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(56));
    ctx.gpr[10] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[8] + 0u);
    goto L_08AAFDE0;
L_08AAFDE0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAFE28;
      }
      goto L_08AAFDF0;
    }
L_08AAFDF0:
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAFE18;
      }
      goto L_08AAFDFC;
    }
L_08AAFDFC:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFDFC;
      }
      goto L_08AAFE18;
    }
L_08AAFE18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_08AAFDE0;
L_08AAFE28:
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAFE54;
      }
      goto L_08AAFE38;
    }
L_08AAFE38:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFE38;
      }
      goto L_08AAFE54;
    }
L_08AAFE54:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08AAFE58;
L_08AAFE58:
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFE64:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[15] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 112 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
        goto L_08AAFF54;
    }
    goto L_08AAFE84;
L_08AAFE84:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.gpr[25] = (ctx.gpr[3] + static_cast<std::uint32_t>(112));
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[9] = (ctx.gpr[4] - ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAFEC8;
      }
      goto L_08AAFE98;
    }
L_08AAFE98:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AAFEA4;
L_08AAFEA4:
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFEA4;
      }
      goto L_08AAFEC0;
    }
L_08AAFEC0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AAFC10;
L_08AAFEC8:
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAFEF4;
      }
      goto L_08AAFED8;
    }
L_08AAFED8:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFED8;
      }
      goto L_08AAFEF4;
    }
L_08AAFEF4:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[15] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAFF40;
      }
      goto L_08AAFF24;
    }
L_08AAFF24:
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFF24;
      }
      goto L_08AAFF40;
    }
L_08AAFF40:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(112));
    goto L_08AAFD7C;
L_08AAFF54:
    ctx.gpr[6] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AAFF84;
      }
      goto L_08AAFF68;
    }
L_08AAFF68:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFF68;
      }
      goto L_08AAFF84;
    }
L_08AAFF84:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[10] + static_cast<std::uint32_t>(6892));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[14] + ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[8] + 0u);
    goto L_08AAFFA8;
L_08AAFFA8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAFFF0;
      }
      goto L_08AAFFB8;
    }
L_08AAFFB8:
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAFFE0;
      }
      goto L_08AAFFC4;
    }
L_08AAFFC4:
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[24] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[25]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFFC4;
      }
      goto L_08AAFFE0;
    }
L_08AAFFE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08AAFFA8;
L_08AAFFF0:
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAFE54;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1u, 0x08AB0000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0170(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0170_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_170(Runtime &runtime) {
    runtime.register_generated_unit(170u, 0x08AAC000u, 16384u, &recomp_unit_0170, &recomp_unit_0170_entry);
    runtime.register_function(0x08AAC000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC048u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC050u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC054u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC074u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC07Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC080u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC100u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC124u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC13Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC144u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC158u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC164u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC184u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC19Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC200u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC20Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC218u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC220u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC224u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC230u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC238u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC248u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC27Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC288u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC29Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC300u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC31Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC334u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC358u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC360u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC370u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC378u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC380u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC384u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC39Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC418u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC424u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC428u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC434u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC43Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC444u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC44Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC46Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC500u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC50Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC518u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC520u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC540u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC548u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC578u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC580u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC598u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC600u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC60Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC618u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC628u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC644u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC650u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC658u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC664u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC678u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC69Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC714u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC75Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC768u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC78Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC794u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC80Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC814u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC828u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC834u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC858u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC864u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC884u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC898u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC89Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC904u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC910u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC91Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC92Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC940u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC948u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC960u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC964u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC968u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC970u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC98Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC994u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC99Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACADCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACED4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD004u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD008u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD00Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD010u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD02Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD038u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD03Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD044u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD04Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD054u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD05Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD068u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD100u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD10Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD118u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD11Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD124u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD12Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD138u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD144u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD148u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD150u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD158u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD170u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD178u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD180u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD260u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD27Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD290u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD29Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD30Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD310u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD328u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD33Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD34Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD358u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD370u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD384u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD38Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD39Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD408u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD40Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD414u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD420u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD438u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD43Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD440u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD44Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD458u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD464u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD47Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD488u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD494u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD508u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD510u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD51Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD528u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD530u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD538u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD548u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD558u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD578u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD588u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD598u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD600u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD614u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD618u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD638u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD63Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD648u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD650u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD65Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD680u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD68Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD694u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD69Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD704u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD710u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD718u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD724u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD740u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD748u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD750u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD75Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD76Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD780u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD78Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD800u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD814u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD820u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD84Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD868u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD86Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD870u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD87Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD884u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD900u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD91Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD920u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD928u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD940u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD94Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD974u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD97Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD988u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD994u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD99Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADABCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADADCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE500u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE508u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE604u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE618u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE624u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE638u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE650u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE660u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE674u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE680u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE690u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE698u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE704u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE70Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE714u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF10Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF118u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF128u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF130u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF138u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF150u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF308u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF310u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF31Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF358u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF37Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF384u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF394u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF39Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF400u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF410u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF420u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF428u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF438u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF444u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF44Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF474u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF480u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF490u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF498u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF518u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF52Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF548u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF554u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF558u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF568u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF59Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF608u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF610u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF61Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF628u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF63Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF650u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF66Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF674u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF694u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF69Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF724u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF740u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF840u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF854u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF878u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF880u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF890u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF918u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF924u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF92Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF940u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF95Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF978u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF980u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF988u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFED8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFF0u, &recomp_unit_0170, "recomp_unit_0170");
}
} // namespace psprecomp

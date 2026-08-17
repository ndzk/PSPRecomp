#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0155[4091] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0,
    14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30,
    31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0,
    0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 76, 0, 77, 0, 78,
    0, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0,
    0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 141,
    0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 157, 0,
    0, 0, 0, 158, 0, 159, 160, 0, 0, 0, 161, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0,
    0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175,
    0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 188, 189, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 0, 213, 214, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 221, 222, 0,
    223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 239, 0, 0, 0, 0, 240, 0, 241, 242, 0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 273,
    0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332,
    0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 339, 0, 0, 340,
    0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0,
    363, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 369, 370, 0, 371, 0, 0, 0, 0,
    0, 0, 0, 372, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 378, 0, 0, 379, 380, 0, 0, 0, 381, 0, 382, 0, 383, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0,
    0, 0, 0, 388, 0, 389, 0, 390, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 397, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404,
    0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 411, 0, 412,
    0, 413, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420,
    0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 428, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0,
    434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0,
    0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0,
    0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0,
    0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 494, 0, 495, 0, 0,
    0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 498, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0,
    0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0,
    507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510,
    0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513,
    0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 519, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0,
    0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0,
    537, 0, 538, 0, 0, 0, 0, 0, 539, 540, 0, 0, 541, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 544, 545, 0, 546, 0, 0, 0,
    547, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0,
    559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571,
    0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574,
    0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581,
    0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0,
    0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0,
    0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 610, 0, 0, 611, 0, 612, 0, 0, 613, 0, 614, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 621,
    0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 627, 0, 628, 629, 0,
    630, 0, 631, 632, 0, 633, 0, 634, 635, 0, 636, 0, 637, 638, 0, 639, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0,
    647, 0, 648, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652,
    0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 657, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 658, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0,
    664, 0, 665, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 0, 676,
    677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0,
    0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0,
    690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 696, 0, 0, 0, 697, 0, 0, 698, 699, 0,
    0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0,
    704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 710, 0, 0, 711, 0,
    712, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0,
    0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 0, 0, 0, 726, 0, 0, 727, 0, 728, 0, 0,
    729, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0, 735, 0, 0, 736,
};
void recomp_unit_0155_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A70000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0155[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A70000;
    case 2u: goto L_08A70004;
    case 3u: goto L_08A70020;
    case 4u: goto L_08A7004C;
    case 5u: goto L_08A700A0;
    case 6u: goto L_08A700AC;
    case 7u: goto L_08A700CC;
    case 8u: goto L_08A70100;
    case 9u: goto L_08A7011C;
    case 10u: goto L_08A7014C;
    case 11u: goto L_08A70154;
    case 12u: goto L_08A7015C;
    case 13u: goto L_08A70174;
    case 14u: goto L_08A70180;
    case 15u: goto L_08A70188;
    case 16u: goto L_08A70190;
    case 17u: goto L_08A701C4;
    case 18u: goto L_08A701D4;
    case 19u: goto L_08A701E4;
    case 20u: goto L_08A701EC;
    case 21u: goto L_08A70228;
    case 22u: goto L_08A70230;
    case 23u: goto L_08A70238;
    case 24u: goto L_08A7024C;
    case 25u: goto L_08A70288;
    case 26u: goto L_08A702A4;
    case 27u: goto L_08A702B0;
    case 28u: goto L_08A702D4;
    case 29u: goto L_08A702E8;
    case 30u: goto L_08A702FC;
    case 31u: goto L_08A70300;
    case 32u: goto L_08A7030C;
    case 33u: goto L_08A70320;
    case 34u: goto L_08A7032C;
    case 35u: goto L_08A70334;
    case 36u: goto L_08A7033C;
    case 37u: goto L_08A70344;
    case 38u: goto L_08A70350;
    case 39u: goto L_08A70360;
    case 40u: goto L_08A70378;
    case 41u: goto L_08A703D0;
    case 42u: goto L_08A703EC;
    case 43u: goto L_08A70410;
    case 44u: goto L_08A70428;
    case 45u: goto L_08A70434;
    case 46u: goto L_08A7043C;
    case 47u: goto L_08A70458;
    case 48u: goto L_08A7046C;
    case 49u: goto L_08A70478;
    case 50u: goto L_08A7048C;
    case 51u: goto L_08A70498;
    case 52u: goto L_08A704B0;
    case 53u: goto L_08A704B8;
    case 54u: goto L_08A704C8;
    case 55u: goto L_08A704D0;
    case 56u: goto L_08A704D8;
    case 57u: goto L_08A704E0;
    case 58u: goto L_08A704E8;
    case 59u: goto L_08A704F0;
    case 60u: goto L_08A70504;
    case 61u: goto L_08A70514;
    case 62u: goto L_08A7051C;
    case 63u: goto L_08A70530;
    case 64u: goto L_08A70544;
    case 65u: goto L_08A70554;
    case 66u: goto L_08A7055C;
    case 67u: goto L_08A70570;
    case 68u: goto L_08A70590;
    case 69u: goto L_08A705A0;
    case 70u: goto L_08A705B0;
    case 71u: goto L_08A705C0;
    case 72u: goto L_08A705C8;
    case 73u: goto L_08A705D0;
    case 74u: goto L_08A705E0;
    case 75u: goto L_08A705E8;
    case 76u: goto L_08A705EC;
    case 77u: goto L_08A705F4;
    case 78u: goto L_08A705FC;
    case 79u: goto L_08A70608;
    case 80u: goto L_08A70610;
    case 81u: goto L_08A70618;
    case 82u: goto L_08A70624;
    case 83u: goto L_08A70630;
    case 84u: goto L_08A70638;
    case 85u: goto L_08A70640;
    case 86u: goto L_08A70648;
    case 87u: goto L_08A70650;
    case 88u: goto L_08A7066C;
    case 89u: goto L_08A70690;
    case 90u: goto L_08A70698;
    case 91u: goto L_08A706A0;
    case 92u: goto L_08A706B0;
    case 93u: goto L_08A706D8;
    case 94u: goto L_08A70700;
    case 95u: goto L_08A70760;
    case 96u: goto L_08A70798;
    case 97u: goto L_08A707D0;
    case 98u: goto L_08A707E0;
    case 99u: goto L_08A707E8;
    case 100u: goto L_08A707F8;
    case 101u: goto L_08A70804;
    case 102u: goto L_08A70814;
    case 103u: goto L_08A70828;
    case 104u: goto L_08A70838;
    case 105u: goto L_08A70840;
    case 106u: goto L_08A70870;
    case 107u: goto L_08A70890;
    case 108u: goto L_08A708C4;
    case 109u: goto L_08A7090C;
    case 110u: goto L_08A7091C;
    case 111u: goto L_08A70928;
    case 112u: goto L_08A70938;
    case 113u: goto L_08A70944;
    case 114u: goto L_08A70974;
    case 115u: goto L_08A70984;
    case 116u: goto L_08A70994;
    case 117u: goto L_08A709A0;
    case 118u: goto L_08A709AC;
    case 119u: goto L_08A709C0;
    case 120u: goto L_08A709CC;
    case 121u: goto L_08A709D8;
    case 122u: goto L_08A709E4;
    case 123u: goto L_08A709F8;
    case 124u: goto L_08A70A08;
    case 125u: goto L_08A70A18;
    case 126u: goto L_08A70A24;
    case 127u: goto L_08A70A3C;
    case 128u: goto L_08A70A48;
    case 129u: goto L_08A70A50;
    case 130u: goto L_08A70A60;
    case 131u: goto L_08A70A7C;
    case 132u: goto L_08A70A88;
    case 133u: goto L_08A70A90;
    case 134u: goto L_08A70AB0;
    case 135u: goto L_08A70AB8;
    case 136u: goto L_08A70ABC;
    case 137u: goto L_08A70AC4;
    case 138u: goto L_08A70AD8;
    case 139u: goto L_08A70AE4;
    case 140u: goto L_08A70AF4;
    case 141u: goto L_08A70AFC;
    case 142u: goto L_08A70B10;
    case 143u: goto L_08A70B20;
    case 144u: goto L_08A70B28;
    case 145u: goto L_08A70B34;
    case 146u: goto L_08A70B3C;
    case 147u: goto L_08A70B6C;
    case 148u: goto L_08A70B88;
    case 149u: goto L_08A70B90;
    case 150u: goto L_08A70B98;
    case 151u: goto L_08A70BA8;
    case 152u: goto L_08A70C40;
    case 153u: goto L_08A70C50;
    case 154u: goto L_08A70C5C;
    case 155u: goto L_08A70C68;
    case 156u: goto L_08A70C74;
    case 157u: goto L_08A70C78;
    case 158u: goto L_08A70C8C;
    case 159u: goto L_08A70C94;
    case 160u: goto L_08A70C98;
    case 161u: goto L_08A70CA8;
    case 162u: goto L_08A70CAC;
    case 163u: goto L_08A70CB8;
    case 164u: goto L_08A70CCC;
    case 165u: goto L_08A70CE4;
    case 166u: goto L_08A70CF4;
    case 167u: goto L_08A70D04;
    case 168u: goto L_08A70D10;
    case 169u: goto L_08A70D44;
    case 170u: goto L_08A70D68;
    case 171u: goto L_08A70D7C;
    case 172u: goto L_08A70D90;
    case 173u: goto L_08A70DA4;
    case 174u: goto L_08A70DF0;
    case 175u: goto L_08A70DFC;
    case 176u: goto L_08A70E14;
    case 177u: goto L_08A70E20;
    case 178u: goto L_08A70E30;
    case 179u: goto L_08A70E3C;
    case 180u: goto L_08A70E50;
    case 181u: goto L_08A70E58;
    case 182u: goto L_08A70E68;
    case 183u: goto L_08A70E74;
    case 184u: goto L_08A70E94;
    case 185u: goto L_08A70E9C;
    case 186u: goto L_08A70EB0;
    case 187u: goto L_08A70EBC;
    case 188u: goto L_08A70EC0;
    case 189u: goto L_08A70EC4;
    case 190u: goto L_08A70EC8;
    case 191u: goto L_08A70EE0;
    case 192u: goto L_08A70EEC;
    case 193u: goto L_08A70EF4;
    case 194u: goto L_08A70F04;
    case 195u: goto L_08A70F20;
    case 196u: goto L_08A70F2C;
    case 197u: goto L_08A70F30;
    case 198u: goto L_08A70F3C;
    case 199u: goto L_08A70F50;
    case 200u: goto L_08A70F5C;
    case 201u: goto L_08A70F6C;
    case 202u: goto L_08A70F78;
    case 203u: goto L_08A70F8C;
    case 204u: goto L_08A70F98;
    case 205u: goto L_08A70FA4;
    case 206u: goto L_08A70FAC;
    case 207u: goto L_08A70FB8;
    case 208u: goto L_08A70FC0;
    case 209u: goto L_08A70FC8;
    case 210u: goto L_08A70FD0;
    case 211u: goto L_08A70FD8;
    case 212u: goto L_08A70FE0;
    case 213u: goto L_08A70FEC;
    case 214u: goto L_08A70FF0;
    case 215u: goto L_08A70FF8;
    case 216u: goto L_08A71020;
    case 217u: goto L_08A71030;
    case 218u: goto L_08A7103C;
    case 219u: goto L_08A71064;
    case 220u: goto L_08A71070;
    case 221u: goto L_08A71074;
    case 222u: goto L_08A71078;
    case 223u: goto L_08A71080;
    case 224u: goto L_08A71094;
    case 225u: goto L_08A710A4;
    case 226u: goto L_08A710AC;
    case 227u: goto L_08A710B8;
    case 228u: goto L_08A710C0;
    case 229u: goto L_08A710F4;
    case 230u: goto L_08A7111C;
    case 231u: goto L_08A71124;
    case 232u: goto L_08A7112C;
    case 233u: goto L_08A7113C;
    case 234u: goto L_08A711F0;
    case 235u: goto L_08A71200;
    case 236u: goto L_08A7120C;
    case 237u: goto L_08A71218;
    case 238u: goto L_08A71224;
    case 239u: goto L_08A71228;
    case 240u: goto L_08A7123C;
    case 241u: goto L_08A71244;
    case 242u: goto L_08A71248;
    case 243u: goto L_08A71258;
    case 244u: goto L_08A7125C;
    case 245u: goto L_08A71298;
    case 246u: goto L_08A712A4;
    case 247u: goto L_08A712AC;
    case 248u: goto L_08A712B8;
    case 249u: goto L_08A712E8;
    case 250u: goto L_08A712F8;
    case 251u: goto L_08A71330;
    case 252u: goto L_08A7134C;
    case 253u: goto L_08A7135C;
    case 254u: goto L_08A71368;
    case 255u: goto L_08A71398;
    case 256u: goto L_08A713A0;
    case 257u: goto L_08A713C4;
    case 258u: goto L_08A713D8;
    case 259u: goto L_08A713E0;
    case 260u: goto L_08A713F4;
    case 261u: goto L_08A71414;
    case 262u: goto L_08A71420;
    case 263u: goto L_08A71428;
    case 264u: goto L_08A71430;
    case 265u: goto L_08A7144C;
    case 266u: goto L_08A71454;
    case 267u: goto L_08A7145C;
    case 268u: goto L_08A714A8;
    case 269u: goto L_08A714B0;
    case 270u: goto L_08A714C8;
    case 271u: goto L_08A714D0;
    case 272u: goto L_08A714F8;
    case 273u: goto L_08A714FC;
    case 274u: goto L_08A71504;
    case 275u: goto L_08A71570;
    case 276u: goto L_08A71580;
    case 277u: goto L_08A7158C;
    case 278u: goto L_08A715B4;
    case 279u: goto L_08A715C0;
    case 280u: goto L_08A715CC;
    case 281u: goto L_08A715F8;
    case 282u: goto L_08A71630;
    case 283u: goto L_08A71638;
    case 284u: goto L_08A71648;
    case 285u: goto L_08A71650;
    case 286u: goto L_08A7169C;
    case 287u: goto L_08A716B4;
    case 288u: goto L_08A716C4;
    case 289u: goto L_08A716C8;
    case 290u: goto L_08A7172C;
    case 291u: goto L_08A71734;
    case 292u: goto L_08A71748;
    case 293u: goto L_08A71750;
    case 294u: goto L_08A71764;
    case 295u: goto L_08A71788;
    case 296u: goto L_08A71794;
    case 297u: goto L_08A717A8;
    case 298u: goto L_08A717B8;
    case 299u: goto L_08A717EC;
    case 300u: goto L_08A717F4;
    case 301u: goto L_08A71808;
    case 302u: goto L_08A71838;
    case 303u: goto L_08A71848;
    case 304u: goto L_08A71870;
    case 305u: goto L_08A71894;
    case 306u: goto L_08A718B4;
    case 307u: goto L_08A718C0;
    case 308u: goto L_08A718D4;
    case 309u: goto L_08A718DC;
    case 310u: goto L_08A718E4;
    case 311u: goto L_08A71908;
    case 312u: goto L_08A71914;
    case 313u: goto L_08A7191C;
    case 314u: goto L_08A71924;
    case 315u: goto L_08A71944;
    case 316u: goto L_08A71964;
    case 317u: goto L_08A71974;
    case 318u: goto L_08A71980;
    case 319u: goto L_08A71990;
    case 320u: goto L_08A71A28;
    case 321u: goto L_08A71A38;
    case 322u: goto L_08A71A44;
    case 323u: goto L_08A71A94;
    case 324u: goto L_08A71AA8;
    case 325u: goto L_08A71AC8;
    case 326u: goto L_08A71AD0;
    case 327u: goto L_08A71AF0;
    case 328u: goto L_08A71AFC;
    case 329u: goto L_08A71B04;
    case 330u: goto L_08A71B5C;
    case 331u: goto L_08A71B6C;
    case 332u: goto L_08A71B7C;
    case 333u: goto L_08A71B8C;
    case 334u: goto L_08A71B9C;
    case 335u: goto L_08A71BAC;
    case 336u: goto L_08A71BB4;
    case 337u: goto L_08A71BD8;
    case 338u: goto L_08A71BEC;
    case 339u: goto L_08A71BF0;
    case 340u: goto L_08A71BFC;
    case 341u: goto L_08A71C08;
    case 342u: goto L_08A71C18;
    case 343u: goto L_08A71C3C;
    case 344u: goto L_08A71C48;
    case 345u: goto L_08A71C54;
    case 346u: goto L_08A71C8C;
    case 347u: goto L_08A71C94;
    case 348u: goto L_08A71CA4;
    case 349u: goto L_08A71CB8;
    case 350u: goto L_08A71CD0;
    case 351u: goto L_08A71CF4;
    case 352u: goto L_08A71D24;
    case 353u: goto L_08A71D30;
    case 354u: goto L_08A71D40;
    case 355u: goto L_08A71D4C;
    case 356u: goto L_08A71D5C;
    case 357u: goto L_08A71D68;
    case 358u: goto L_08A71DA8;
    case 359u: goto L_08A71DBC;
    case 360u: goto L_08A71DC8;
    case 361u: goto L_08A71DDC;
    case 362u: goto L_08A71DF0;
    case 363u: goto L_08A71E00;
    case 364u: goto L_08A71E14;
    case 365u: goto L_08A71E20;
    case 366u: goto L_08A71E2C;
    case 367u: goto L_08A71E4C;
    case 368u: goto L_08A71E58;
    case 369u: goto L_08A71E60;
    case 370u: goto L_08A71E64;
    case 371u: goto L_08A71E6C;
    case 372u: goto L_08A71E8C;
    case 373u: goto L_08A71E90;
    case 374u: goto L_08A71EA4;
    case 375u: goto L_08A71EC8;
    case 376u: goto L_08A71EE0;
    case 377u: goto L_08A71EF0;
    case 378u: goto L_08A71F08;
    case 379u: goto L_08A71F14;
    case 380u: goto L_08A71F18;
    case 381u: goto L_08A71F28;
    case 382u: goto L_08A71F30;
    case 383u: goto L_08A71F38;
    case 384u: goto L_08A71F3C;
    case 385u: goto L_08A71F4C;
    case 386u: goto L_08A71F60;
    case 387u: goto L_08A71F6C;
    case 388u: goto L_08A71F8C;
    case 389u: goto L_08A71F94;
    case 390u: goto L_08A71F9C;
    case 391u: goto L_08A71FA0;
    case 392u: goto L_08A71FBC;
    case 393u: goto L_08A71FDC;
    case 394u: goto L_08A71FE4;
    case 395u: goto L_08A71FEC;
    case 396u: goto L_08A71FF4;
    case 397u: goto L_08A71FF8;
    case 398u: goto L_08A72008;
    case 399u: goto L_08A72030;
    case 400u: goto L_08A7203C;
    case 401u: goto L_08A72054;
    case 402u: goto L_08A72060;
    case 403u: goto L_08A72068;
    case 404u: goto L_08A7207C;
    case 405u: goto L_08A72094;
    case 406u: goto L_08A720A4;
    case 407u: goto L_08A720BC;
    case 408u: goto L_08A720D4;
    case 409u: goto L_08A720E0;
    case 410u: goto L_08A720EC;
    case 411u: goto L_08A720F4;
    case 412u: goto L_08A720FC;
    case 413u: goto L_08A72104;
    case 414u: goto L_08A7210C;
    case 415u: goto L_08A72124;
    case 416u: goto L_08A72144;
    case 417u: goto L_08A72154;
    case 418u: goto L_08A7216C;
    case 419u: goto L_08A72174;
    case 420u: goto L_08A7217C;
    case 421u: goto L_08A72184;
    case 422u: goto L_08A7218C;
    case 423u: goto L_08A72194;
    case 424u: goto L_08A7219C;
    case 425u: goto L_08A721A4;
    case 426u: goto L_08A721AC;
    case 427u: goto L_08A721B4;
    case 428u: goto L_08A721B8;
    case 429u: goto L_08A721C0;
    case 430u: goto L_08A721D0;
    case 431u: goto L_08A721E8;
    case 432u: goto L_08A721F0;
    case 433u: goto L_08A721F8;
    case 434u: goto L_08A72200;
    case 435u: goto L_08A72208;
    case 436u: goto L_08A72210;
    case 437u: goto L_08A72218;
    case 438u: goto L_08A72220;
    case 439u: goto L_08A72228;
    case 440u: goto L_08A72230;
    case 441u: goto L_08A72234;
    case 442u: goto L_08A72248;
    case 443u: goto L_08A72258;
    case 444u: goto L_08A72274;
    case 445u: goto L_08A72298;
    case 446u: goto L_08A722A8;
    case 447u: goto L_08A722C0;
    case 448u: goto L_08A722C4;
    case 449u: goto L_08A722D8;
    case 450u: goto L_08A72454;
    case 451u: goto L_08A7245C;
    case 452u: goto L_08A7246C;
    case 453u: goto L_08A72478;
    case 454u: goto L_08A72488;
    case 455u: goto L_08A724A0;
    case 456u: goto L_08A724A8;
    case 457u: goto L_08A724B0;
    case 458u: goto L_08A724B8;
    case 459u: goto L_08A724C0;
    case 460u: goto L_08A724C8;
    case 461u: goto L_08A724E0;
    case 462u: goto L_08A724E8;
    case 463u: goto L_08A72508;
    case 464u: goto L_08A72518;
    case 465u: goto L_08A72530;
    case 466u: goto L_08A72590;
    case 467u: goto L_08A7259C;
    case 468u: goto L_08A725AC;
    case 469u: goto L_08A725C4;
    case 470u: goto L_08A7261C;
    case 471u: goto L_08A72680;
    case 472u: goto L_08A7268C;
    case 473u: goto L_08A7269C;
    case 474u: goto L_08A726B4;
    case 475u: goto L_08A72714;
    case 476u: goto L_08A72720;
    case 477u: goto L_08A72730;
    case 478u: goto L_08A72748;
    case 479u: goto L_08A727A8;
    case 480u: goto L_08A727B4;
    case 481u: goto L_08A727C4;
    case 482u: goto L_08A727DC;
    case 483u: goto L_08A72854;
    case 484u: goto L_08A72860;
    case 485u: goto L_08A72870;
    case 486u: goto L_08A72888;
    case 487u: goto L_08A728E0;
    case 488u: goto L_08A728F8;
    case 489u: goto L_08A72908;
    case 490u: goto L_08A7291C;
    case 491u: goto L_08A72940;
    case 492u: goto L_08A72950;
    case 493u: goto L_08A72968;
    case 494u: goto L_08A7296C;
    case 495u: goto L_08A72974;
    case 496u: goto L_08A7298C;
    case 497u: goto L_08A72998;
    case 498u: goto L_08A729A8;
    case 499u: goto L_08A729AC;
    case 500u: goto L_08A72A74;
    case 501u: goto L_08A72A88;
    case 502u: goto L_08A72A9C;
    case 503u: goto L_08A72AB0;
    case 504u: goto L_08A72AC4;
    case 505u: goto L_08A72AD8;
    case 506u: goto L_08A72AEC;
    case 507u: goto L_08A72B00;
    case 508u: goto L_08A72B14;
    case 509u: goto L_08A72B70;
    case 510u: goto L_08A72B7C;
    case 511u: goto L_08A72B84;
    case 512u: goto L_08A72B98;
    case 513u: goto L_08A72BFC;
    case 514u: goto L_08A72C0C;
    case 515u: goto L_08A72C14;
    case 516u: goto L_08A72C28;
    case 517u: goto L_08A72C30;
    case 518u: goto L_08A72C48;
    case 519u: goto L_08A72C4C;
    case 520u: goto L_08A72C54;
    case 521u: goto L_08A72C64;
    case 522u: goto L_08A72C6C;
    case 523u: goto L_08A72C88;
    case 524u: goto L_08A72C90;
    case 525u: goto L_08A72CA0;
    case 526u: goto L_08A72CB8;
    case 527u: goto L_08A72D20;
    case 528u: goto L_08A72D28;
    case 529u: goto L_08A72D48;
    case 530u: goto L_08A72DAC;
    case 531u: goto L_08A72DB4;
    case 532u: goto L_08A72DBC;
    case 533u: goto L_08A72DDC;
    case 534u: goto L_08A72DFC;
    case 535u: goto L_08A72E64;
    case 536u: goto L_08A72E6C;
    case 537u: goto L_08A72E80;
    case 538u: goto L_08A72E88;
    case 539u: goto L_08A72EA0;
    case 540u: goto L_08A72EA4;
    case 541u: goto L_08A72EB0;
    case 542u: goto L_08A72EC4;
    case 543u: goto L_08A72ECC;
    case 544u: goto L_08A72EE4;
    case 545u: goto L_08A72EE8;
    case 546u: goto L_08A72EF0;
    case 547u: goto L_08A72F00;
    case 548u: goto L_08A72F08;
    case 549u: goto L_08A72F24;
    case 550u: goto L_08A72F2C;
    case 551u: goto L_08A72F3C;
    case 552u: goto L_08A72F54;
    case 553u: goto L_08A72FB8;
    case 554u: goto L_08A72FC0;
    case 555u: goto L_08A72FC8;
    case 556u: goto L_08A72FE8;
    case 557u: goto L_08A73008;
    case 558u: goto L_08A73078;
    case 559u: goto L_08A73080;
    case 560u: goto L_08A7309C;
    case 561u: goto L_08A730AC;
    case 562u: goto L_08A730C4;
    case 563u: goto L_08A730E0;
    case 564u: goto L_08A73144;
    case 565u: goto L_08A7314C;
    case 566u: goto L_08A73180;
    case 567u: goto L_08A73218;
    case 568u: goto L_08A73224;
    case 569u: goto L_08A73234;
    case 570u: goto L_08A7324C;
    case 571u: goto L_08A7327C;
    case 572u: goto L_08A73284;
    case 573u: goto L_08A73298;
    case 574u: goto L_08A7337C;
    case 575u: goto L_08A7339C;
    case 576u: goto L_08A733AC;
    case 577u: goto L_08A733C4;
    case 578u: goto L_08A73440;
    case 579u: goto L_08A734DC;
    case 580u: goto L_08A734EC;
    case 581u: goto L_08A734FC;
    case 582u: goto L_08A73514;
    case 583u: goto L_08A73530;
    case 584u: goto L_08A73564;
    case 585u: goto L_08A7359C;
    case 586u: goto L_08A735BC;
    case 587u: goto L_08A735C4;
    case 588u: goto L_08A735D0;
    case 589u: goto L_08A735E4;
    case 590u: goto L_08A73608;
    case 591u: goto L_08A7362C;
    case 592u: goto L_08A73658;
    case 593u: goto L_08A7367C;
    case 594u: goto L_08A736B0;
    case 595u: goto L_08A736C0;
    case 596u: goto L_08A736E0;
    case 597u: goto L_08A736F8;
    case 598u: goto L_08A73738;
    case 599u: goto L_08A73744;
    case 600u: goto L_08A73750;
    case 601u: goto L_08A7375C;
    case 602u: goto L_08A73764;
    case 603u: goto L_08A73784;
    case 604u: goto L_08A7378C;
    case 605u: goto L_08A73794;
    case 606u: goto L_08A7379C;
    case 607u: goto L_08A737A4;
    case 608u: goto L_08A737C0;
    case 609u: goto L_08A737C8;
    case 610u: goto L_08A737D0;
    case 611u: goto L_08A737DC;
    case 612u: goto L_08A737E4;
    case 613u: goto L_08A737F0;
    case 614u: goto L_08A737F8;
    case 615u: goto L_08A73820;
    case 616u: goto L_08A7382C;
    case 617u: goto L_08A73834;
    case 618u: goto L_08A7383C;
    case 619u: goto L_08A73860;
    case 620u: goto L_08A73874;
    case 621u: goto L_08A7387C;
    case 622u: goto L_08A7389C;
    case 623u: goto L_08A738B4;
    case 624u: goto L_08A738BC;
    case 625u: goto L_08A738CC;
    case 626u: goto L_08A738D4;
    case 627u: goto L_08A738EC;
    case 628u: goto L_08A738F4;
    case 629u: goto L_08A738F8;
    case 630u: goto L_08A73900;
    case 631u: goto L_08A73908;
    case 632u: goto L_08A7390C;
    case 633u: goto L_08A73914;
    case 634u: goto L_08A7391C;
    case 635u: goto L_08A73920;
    case 636u: goto L_08A73928;
    case 637u: goto L_08A73930;
    case 638u: goto L_08A73934;
    case 639u: goto L_08A7393C;
    case 640u: goto L_08A73944;
    case 641u: goto L_08A7394C;
    case 642u: goto L_08A73958;
    case 643u: goto L_08A73960;
    case 644u: goto L_08A73968;
    case 645u: goto L_08A73970;
    case 646u: goto L_08A73978;
    case 647u: goto L_08A73980;
    case 648u: goto L_08A73988;
    case 649u: goto L_08A73990;
    case 650u: goto L_08A7399C;
    case 651u: goto L_08A739B4;
    case 652u: goto L_08A739FC;
    case 653u: goto L_08A73A10;
    case 654u: goto L_08A73A3C;
    case 655u: goto L_08A73A48;
    case 656u: goto L_08A73A68;
    case 657u: goto L_08A73A6C;
    case 658u: goto L_08A73A94;
    case 659u: goto L_08A73A98;
    case 660u: goto L_08A73AB0;
    case 661u: goto L_08A73AC4;
    case 662u: goto L_08A73AE8;
    case 663u: goto L_08A73AF8;
    case 664u: goto L_08A73B00;
    case 665u: goto L_08A73B08;
    case 666u: goto L_08A73B10;
    case 667u: goto L_08A73B1C;
    case 668u: goto L_08A73B24;
    case 669u: goto L_08A73B2C;
    case 670u: goto L_08A73B38;
    case 671u: goto L_08A73B40;
    case 672u: goto L_08A73B48;
    case 673u: goto L_08A73B58;
    case 674u: goto L_08A73B60;
    case 675u: goto L_08A73B70;
    case 676u: goto L_08A73B7C;
    case 677u: goto L_08A73B80;
    case 678u: goto L_08A73B8C;
    case 679u: goto L_08A73C2C;
    case 680u: goto L_08A73C54;
    case 681u: goto L_08A73C68;
    case 682u: goto L_08A73C74;
    case 683u: goto L_08A73C88;
    case 684u: goto L_08A73CA0;
    case 685u: goto L_08A73CB8;
    case 686u: goto L_08A73CCC;
    case 687u: goto L_08A73CD4;
    case 688u: goto L_08A73CE4;
    case 689u: goto L_08A73CF0;
    case 690u: goto L_08A73D00;
    case 691u: goto L_08A73D0C;
    case 692u: goto L_08A73D2C;
    case 693u: goto L_08A73D3C;
    case 694u: goto L_08A73D48;
    case 695u: goto L_08A73D54;
    case 696u: goto L_08A73D58;
    case 697u: goto L_08A73D68;
    case 698u: goto L_08A73D74;
    case 699u: goto L_08A73D78;
    case 700u: goto L_08A73D84;
    case 701u: goto L_08A73D8C;
    case 702u: goto L_08A73DEC;
    case 703u: goto L_08A73DF8;
    case 704u: goto L_08A73E00;
    case 705u: goto L_08A73E34;
    case 706u: goto L_08A73E3C;
    case 707u: goto L_08A73E50;
    case 708u: goto L_08A73E5C;
    case 709u: goto L_08A73E64;
    case 710u: goto L_08A73E6C;
    case 711u: goto L_08A73E78;
    case 712u: goto L_08A73E80;
    case 713u: goto L_08A73E88;
    case 714u: goto L_08A73E98;
    case 715u: goto L_08A73EA8;
    case 716u: goto L_08A73EB8;
    case 717u: goto L_08A73EC8;
    case 718u: goto L_08A73EEC;
    case 719u: goto L_08A73EF8;
    case 720u: goto L_08A73F14;
    case 721u: goto L_08A73F1C;
    case 722u: goto L_08A73F34;
    case 723u: goto L_08A73F3C;
    case 724u: goto L_08A73F44;
    case 725u: goto L_08A73F4C;
    case 726u: goto L_08A73F60;
    case 727u: goto L_08A73F6C;
    case 728u: goto L_08A73F74;
    case 729u: goto L_08A73F80;
    case 730u: goto L_08A73F88;
    case 731u: goto L_08A73F94;
    case 732u: goto L_08A73FB8;
    case 733u: goto L_08A73FC4;
    case 734u: goto L_08A73FD4;
    case 735u: goto L_08A73FDC;
    case 736u: goto L_08A73FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A70000:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21956), ctx.gpr[4]);
    goto L_08A70004;
L_08A70004:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21960)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21960)));
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
        goto L_08A70020;
    }
    goto L_08A70020;
L_08A70020:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21960), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7004C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A70100;
      }
      goto L_08A700A0;
    }
L_08A700A0:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(16384) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A700CC;
      }
      goto L_08A700AC;
    }
L_08A700AC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21960)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08A7014C;
      }
      goto L_08A700CC;
    }
L_08A700CC:
    ctx.gpr[2] = (0u | 0u);
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
L_08A70100:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7011Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7011Cu) goto L_08A7011C;
    return;
L_08A7011C:
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
L_08A7014C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 95 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A70180;
      }
      goto L_08A70154;
    }
L_08A70154:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70180;
      }
      goto L_08A7015C;
    }
L_08A7015C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A70174u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A70174u) goto L_08A70174;
    return;
L_08A70174:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A7014C;
      }
      goto L_08A70180;
    }
L_08A70180:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 95 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A70190;
      }
      goto L_08A70188;
    }
L_08A70188:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A701EC;
      }
      goto L_08A70190;
    }
L_08A70190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A701C4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A701C4u) goto L_08A701C4;
    return;
L_08A701C4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A701D4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A71CB8;
L_08A701D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A70228;
      }
      goto L_08A701E4;
    }
L_08A701E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70230;
      }
      goto L_08A701EC;
    }
L_08A701EC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (0u | 2u);
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
L_08A70228:
    ctx.gpr[31] = (0x08A70230u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 753u, 0x08A6F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A70230u) goto L_08A70230;
    return;
L_08A70230:
    ctx.gpr[31] = (0x08A70238u);
    // nop
    goto L_08A71CF4;
L_08A70238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A7024Cu);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7024Cu) goto L_08A7024C;
    return;
L_08A7024C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08A70288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A70350;
      }
      goto L_08A702A4;
    }
L_08A702A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70350;
      }
      goto L_08A702B0;
    }
L_08A702B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08A70300;
    }
    goto L_08A702D4;
L_08A702D4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08A70300;
    }
    goto L_08A702E8;
L_08A702E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A702FCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A702FCu) goto L_08A702FC;
    return;
L_08A702FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08A70300;
L_08A70300:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70350;
      }
      goto L_08A7030C;
    }
L_08A7030C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A7032C;
    }
    goto L_08A70320;
L_08A70320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21936), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08A7032C;
L_08A7032C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A7033C;
      }
      goto L_08A70334;
    }
L_08A70334:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08A7033C;
L_08A7033C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
        goto L_08A70350;
    }
    goto L_08A70344;
L_08A70344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    goto L_08A70350;
L_08A70350:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A70378u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70378u) goto L_08A70378;
    return;
L_08A70378:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (18219u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A703D0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21956), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21960), 0u);
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21964), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A703EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5388)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7043C;
      }
      goto L_08A70410;
    }
L_08A70410:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(21968));
    ctx.gpr[4] = (2215u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1792));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A70428u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 838u, 0x08A6FFE0u>(ctx, &aot_mem) && ctx.pc == 0x08A70428u) goto L_08A70428;
    return;
L_08A70428:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A70434u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A70004;
L_08A70434:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5388), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7043C;
L_08A7043C:
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
L_08A70458:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5320), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7046C:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5320), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70478:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
        goto L_08A704B0;
    }
    goto L_08A7048C;
L_08A7048C:
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A704C8;
      }
      goto L_08A70498;
    }
L_08A70498:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A704B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A704C8;
      }
      goto L_08A704B8;
    }
L_08A704B8:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A704C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A704D0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A704D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A704E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A704E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A704F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A70504u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A71CB8;
L_08A70504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_08A70514;
    }
    goto L_08A70514;
L_08A70514:
    ctx.gpr[31] = (0x08A7051Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_08A71CF4;
L_08A7051C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A70544u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A71CB8;
L_08A70544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
        goto L_08A70554;
    }
    goto L_08A70554;
L_08A70554:
    ctx.gpr[31] = (0x08A7055Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    goto L_08A71CF4;
L_08A7055C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70650;
      }
      goto L_08A70590;
    }
L_08A70590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (153u << 16u);
      if (branch_taken) {
          goto L_08A70650;
      }
      goto L_08A705A0;
    }
L_08A705A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A705B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_08A71980;
L_08A705B0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A705C0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08AB4564u;
    return;
L_08A705C0:
    ctx.gpr[31] = (0x08A705C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.pc = 0x08AB4684u;
    return;
L_08A705C8:
    ctx.gpr[31] = (0x08A705D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.pc = 0x08AB419Cu;
    return;
L_08A705D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A705EC;
      }
      goto L_08A705E0;
    }
L_08A705E0:
    ctx.gpr[31] = (0x08A705E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    goto L_08A7046C;
L_08A705E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    goto L_08A705EC;
L_08A705EC:
    ctx.gpr[31] = (0x08A705F4u);
    // nop
    goto L_08A71CB8;
L_08A705F4:
    ctx.gpr[31] = (0x08A705FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    goto L_08A7158C;
L_08A705FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70610;
      }
      goto L_08A70608;
    }
L_08A70608:
    ctx.gpr[31] = (0x08A70610u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    goto L_08A7158C;
L_08A70610:
    ctx.gpr[31] = (0x08A70618u);
    // nop
    goto L_08A71CF4;
L_08A70618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A70638;
      }
      goto L_08A70624;
    }
L_08A70624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A70630u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 678u, 0x08A8BC20u>(ctx, &aot_mem) && ctx.pc == 0x08A70630u) goto L_08A70630;
    return;
L_08A70630:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), 0u);
    goto L_08A70638;
L_08A70638:
    ctx.gpr[31] = (0x08A70640u);
    // nop
    goto L_08A71CB8;
L_08A70640:
    ctx.gpr[31] = (0x08A70648u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A7158C;
L_08A70648:
    ctx.gpr[31] = (0x08A70650u);
    // nop
    goto L_08A71CF4;
L_08A70650:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7066C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (18176u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70690:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70698:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A706A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A706B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (18220u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | 17408u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A706D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (18220u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | 17408u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] << 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[10] = (ctx.gpr[11] << 16u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    ctx.gpr[6] = (21065u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17990));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A70870;
      }
      goto L_08A70760;
    }
L_08A70760:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (22337u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22085));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A70870;
      }
      goto L_08A70798;
    }
L_08A70798:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (26221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29728));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A70870;
      }
      goto L_08A707D0;
    }
L_08A707D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 624u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65534u);
      if (branch_taken) {
          goto L_08A70890;
      }
      goto L_08A707E0;
    }
L_08A707E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A70870;
      }
      goto L_08A707E8;
    }
L_08A707E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A70870;
      }
      goto L_08A707F8;
    }
L_08A707F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A70870;
      }
      goto L_08A70804;
    }
L_08A70804:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18)));
    ctx.gpr[5] = (0u | 2048u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A70870;
      }
      goto L_08A70814;
    }
L_08A70814:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08A70828u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5389));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A70828u) goto L_08A70828;
    return;
L_08A70828:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A70838u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08A70838u) goto L_08A70838;
    return;
L_08A70838:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A70870;
      }
      goto L_08A70840;
    }
L_08A70840:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5324));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 100u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70870:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70890:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5324));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 100u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A708C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A70928;
      }
      goto L_08A7090C;
    }
L_08A7090C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A7091Cu);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7091Cu) goto L_08A7091C;
    return;
L_08A7091C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A709A0;
      }
      goto L_08A70928;
    }
L_08A70928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A70938u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70938u) goto L_08A70938;
    return;
L_08A70938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A70944u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.pc = 0x08AB418Cu;
    return;
L_08A70944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08A70974u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.pc = 0x08AB41A4u;
    return;
L_08A70974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A709A0;
      }
      goto L_08A70984;
    }
L_08A70984:
    ctx.gpr[5] = (32867u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(35));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08A709A0;
      }
      goto L_08A70994;
    }
L_08A70994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A709A0;
L_08A709A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08A709ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08A709ACu) goto L_08A709AC;
    return;
L_08A709AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08A709C0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A709C0u) goto L_08A709C0;
    return;
L_08A709C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08A709D8;
      }
      goto L_08A709CC;
    }
L_08A709CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A709D8;
L_08A709D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (32867u << 16u);
      if (branch_taken) {
          goto L_08A70AFC;
      }
      goto L_08A709E4;
    }
L_08A709E4:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(35));
    goto L_08A709F8;
L_08A709F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (ctx.gpr[16] << 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A70A24;
      }
      goto L_08A70A08;
    }
L_08A70A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A70A18u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70A18u) goto L_08A70A18;
    return;
L_08A70A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70AB8;
      }
      goto L_08A70A24;
    }
L_08A70A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A70A3Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08AB41A4u;
    return;
L_08A70A3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A70A60;
    }
    goto L_08A70A48;
L_08A70A48:
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A70A60;
    }
    goto L_08A70A50;
L_08A70A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08A70A60;
L_08A70A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A70A88;
    }
    goto L_08A70A7C;
L_08A70A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A70A88;
L_08A70A88:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
        goto L_08A70ABC;
    }
    goto L_08A70A90;
L_08A70A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[31] = (0x08A70AB0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70AB0u) goto L_08A70AB0;
    return;
L_08A70AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A70AB8;
L_08A70AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    goto L_08A70ABC;
L_08A70ABC:
    ctx.gpr[31] = (0x08A70AC4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08A70AC4u) goto L_08A70AC4;
    return;
L_08A70AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08A70AD8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A70AD8u) goto L_08A70AD8;
    return;
L_08A70AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
        goto L_08A70AF4;
    }
    goto L_08A70AE4;
L_08A70AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_08A70AF4;
L_08A70AF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] ^ 1u);
      if (branch_taken) {
          goto L_08A709F8;
      }
      goto L_08A70AFC;
    }
L_08A70AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A70B10u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A70B10u) goto L_08A70B10;
    return;
L_08A70B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A70B34;
      }
      goto L_08A70B20;
    }
L_08A70B20:
    ctx.gpr[31] = (0x08A70B28u);
    // nop
    goto L_08A71CB8;
L_08A70B28:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08A70B34u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A71CF4;
L_08A70B34:
    ctx.gpr[31] = (0x08A70B3Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_08A70B3C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70B6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A70B88u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A71CB8;
L_08A70B88:
    ctx.gpr[31] = (0x08A70B90u);
    ctx.gpr[4] = (0u | 120u);
    goto L_08A71650;
L_08A70B90:
    ctx.gpr[31] = (0x08A70B98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A71CF4;
L_08A70B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A70BA8u);
    ctx.gpr[6] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A70BA8u) goto L_08A70BA8;
    return;
L_08A70BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (18176u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[11] = (0u | 12u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[9] = (0u | 102u);
    ctx.gpr[8] = (0u | 97u);
    ctx.gpr[7] = (0u | 99u);
    ctx.gpr[6] = (0u | 116u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A70C40;
L_08A70C40:
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] != ctx.gpr[9]) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
        goto L_08A70C78;
    }
    goto L_08A70C50;
L_08A70C50:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[3] != ctx.gpr[8]) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
        goto L_08A70C78;
    }
    goto L_08A70C5C;
L_08A70C5C:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[3] != ctx.gpr[7]) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
        goto L_08A70C78;
    }
    goto L_08A70C68;
L_08A70C68:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    if (ctx.gpr[3] == ctx.gpr[6]) {
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
        goto L_08A70C98;
    }
    goto L_08A70C74;
L_08A70C74:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08A70C78;
L_08A70C78:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A70C40;
      }
      goto L_08A70C8C;
    }
L_08A70C8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A70CA8;
      }
      goto L_08A70C94;
    }
L_08A70C94:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    goto L_08A70C98;
L_08A70C98:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A70CAC;
      }
      goto L_08A70CA8;
    }
L_08A70CA8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), 0u);
    goto L_08A70CAC;
L_08A70CAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A70CB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A70458;
L_08A70CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A70CCCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.pc = 0x08AB41ACu;
    return;
L_08A70CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A70CE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.pc = 0x08AB41C4u;
    return;
L_08A70CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A70CF4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08A71CB8;
L_08A70CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[31] = (0x08A70D04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(63));
    goto L_08A71650;
L_08A70D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A70D10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    goto L_08A71CF4;
L_08A70D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A70D44u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    goto L_08A71A28;
L_08A70D44:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (2215u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (0u | 32768u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15680));
    ctx.gpr[31] = (0x08A70D68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2244));
    ctx.pc = 0x08AB45E4u;
    return;
L_08A70D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A70D7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    goto L_08A71964;
L_08A70D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A70D90u);
    ctx.gpr[5] = (0u | 120u);
    ctx.pc = 0x08AB4594u;
    return;
L_08A70D90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70DA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08A70DF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08A70DF0u) goto L_08A70DF0;
    return;
L_08A70DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (32867u << 16u);
      if (branch_taken) {
          goto L_08A71080;
      }
      goto L_08A70DFC;
    }
L_08A70DFC:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(35));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    goto L_08A70E14;
L_08A70E14:
    ctx.gpr[18] = (ctx.gpr[19] << 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A70E3C;
      }
      goto L_08A70E20;
    }
L_08A70E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A70E30u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70E30u) goto L_08A70E30;
    return;
L_08A70E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70F30;
      }
      goto L_08A70E3C;
    }
L_08A70E3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A70E50u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.pc = 0x08AB418Cu;
    return;
L_08A70E50:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_08A70EC8;
    }
    goto L_08A70E58;
L_08A70E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_08A70EC8;
    }
    goto L_08A70E68;
L_08A70E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08A70E9C;
    }
    goto L_08A70E74;
L_08A70E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08A70E94u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70E94u) goto L_08A70E94;
    return;
L_08A70E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A70EC4;
      }
      goto L_08A70E9C;
    }
L_08A70E9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08A70EC0;
    }
    goto L_08A70EB0;
L_08A70EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08A70EBCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70EBCu) goto L_08A70EBC;
    return;
L_08A70EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_08A70EC0;
L_08A70EC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08A70EC4;
L_08A70EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_08A70EC8;
L_08A70EC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A70EE0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = 0x08AB41A4u;
    return;
L_08A70EE0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A70F04;
    }
    goto L_08A70EEC;
L_08A70EEC:
    if (ctx.gpr[16] == ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A70F04;
    }
    goto L_08A70EF4;
L_08A70EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08A70F04;
L_08A70F04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A70F2C;
    }
    goto L_08A70F20;
L_08A70F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A70F2C;
L_08A70F2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A70F30;
L_08A70F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08A70F3Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08A70F3Cu) goto L_08A70F3C;
    return;
L_08A70F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08A70F50u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A70F50u) goto L_08A70F50;
    return;
L_08A70F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08A70F6C;
    }
    goto L_08A70F5C;
L_08A70F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A70F6C;
L_08A70F6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] ^ 1u);
      if (branch_taken) {
          goto L_08A71074;
      }
      goto L_08A70F78;
    }
L_08A70F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A70F8Cu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB4194u;
    return;
L_08A70F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
        goto L_08A71078;
    }
    goto L_08A70F98;
L_08A70F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_08A70FF0;
    }
    goto L_08A70FA4;
L_08A70FA4:
    ctx.gpr[31] = (0x08A70FACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 666u, 0x08A8BB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70FACu) goto L_08A70FAC;
    return;
L_08A70FAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A70FD8;
      }
      goto L_08A70FB8;
    }
L_08A70FB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A70FEC;
      }
      goto L_08A70FC0;
    }
L_08A70FC0:
    ctx.gpr[31] = (0x08A70FC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 678u, 0x08A8BC20u>(ctx, &aot_mem) && ctx.pc == 0x08A70FC8u) goto L_08A70FC8;
    return;
L_08A70FC8:
    ctx.gpr[31] = (0x08A70FD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 666u, 0x08A8BB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70FD0u) goto L_08A70FD0;
    return;
L_08A70FD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    goto L_08A70FD8;
L_08A70FD8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_08A70FF0;
    }
    goto L_08A70FE0;
L_08A70FE0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08A70FEC;
L_08A70FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    goto L_08A70FF0;
L_08A70FF0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
        goto L_08A71078;
    }
    goto L_08A70FF8;
L_08A70FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_08A71020;
    }
    goto L_08A71020;
L_08A71020:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A71030u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A71414;
L_08A71030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A7103Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB41B4u;
    return;
L_08A7103C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71074;
      }
      goto L_08A71064;
    }
L_08A71064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A71070u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 678u, 0x08A8BC20u>(ctx, &aot_mem) && ctx.pc == 0x08A71070u) goto L_08A71070;
    return;
L_08A71070:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    goto L_08A71074;
L_08A71074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_08A71078;
L_08A71078:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
        goto L_08A70E14;
    }
    goto L_08A71080;
L_08A71080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A71094u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A71094u) goto L_08A71094;
    return;
L_08A71094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A710B8;
      }
      goto L_08A710A4;
    }
L_08A710A4:
    ctx.gpr[31] = (0x08A710ACu);
    // nop
    goto L_08A71CB8;
L_08A710AC:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08A710B8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A71CF4;
L_08A710B8:
    ctx.gpr[31] = (0x08A710C0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_08A710C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A710F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7111Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08A71CB8;
L_08A7111C:
    ctx.gpr[31] = (0x08A71124u);
    ctx.gpr[4] = (0u | 120u);
    goto L_08A71650;
L_08A71124:
    ctx.gpr[31] = (0x08A7112Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A71CF4;
L_08A7112C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A7113Cu);
    ctx.gpr[6] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A7113Cu) goto L_08A7113C;
    return;
L_08A7113C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 8192u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[2] = (0u | 12u);
    ctx.gpr[11] = (0u | 4u);
    ctx.gpr[10] = (0u | 102u);
    ctx.gpr[9] = (0u | 97u);
    ctx.gpr[8] = (0u | 99u);
    ctx.gpr[7] = (0u | 116u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A711F0;
L_08A711F0:
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[13] != ctx.gpr[10]) {
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
        goto L_08A71228;
    }
    goto L_08A71200;
L_08A71200:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[13] != ctx.gpr[9]) {
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
        goto L_08A71228;
    }
    goto L_08A7120C;
L_08A7120C:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[13] != ctx.gpr[8]) {
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
        goto L_08A71228;
    }
    goto L_08A71218;
L_08A71218:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(3)));
    if (ctx.gpr[13] == ctx.gpr[7]) {
    ctx.gpr[7] = (ctx.gpr[12] + static_cast<std::uint32_t>(8));
        goto L_08A71248;
    }
    goto L_08A71224;
L_08A71224:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
    goto L_08A71228;
L_08A71228:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A711F0;
      }
      goto L_08A7123C;
    }
L_08A7123C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A71258;
      }
      goto L_08A71244;
    }
L_08A71244:
    ctx.gpr[7] = (ctx.gpr[12] + static_cast<std::uint32_t>(8));
    goto L_08A71248;
L_08A71248:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A7125C;
      }
      goto L_08A71258;
    }
L_08A71258:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), 0u);
    goto L_08A7125C;
L_08A7125C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (18176u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A71298u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08A70458;
L_08A71298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A712A4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    goto L_08A71CB8;
L_08A712A4:
    ctx.gpr[31] = (0x08A712ACu);
    ctx.gpr[4] = (0u | 16447u);
    goto L_08A71650;
L_08A712AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A712B8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    goto L_08A71CF4;
L_08A712B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (0u | 16384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A712E8u);
    ctx.gpr[6] = (0u | 16384u);
    goto L_08A71414;
L_08A712E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A712F8u);
    ctx.gpr[5] = (0u | 16384u);
    ctx.pc = 0x08AB41ACu;
    return;
L_08A712F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A71330u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.pc = 0x08AB41C4u;
    return;
L_08A71330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A7134Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_08A71CB8;
L_08A7134C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[31] = (0x08A7135Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(63));
    goto L_08A71650;
L_08A7135C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A71368u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    goto L_08A71CF4;
L_08A71368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A71398u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    goto L_08A71CB8;
L_08A71398:
    ctx.gpr[31] = (0x08A713A0u);
    // nop
    goto L_08A71A28;
L_08A713A0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15680));
    ctx.gpr[5] = (2215u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3492));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (0u | 32768u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A713C4u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08AB45E4u;
    return;
L_08A713C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A713D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    goto L_08A71964;
L_08A713D8:
    ctx.gpr[31] = (0x08A713E0u);
    // nop
    goto L_08A71CF4;
L_08A713E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A713F4u);
    ctx.gpr[5] = (0u | 120u);
    ctx.pc = 0x08AB4594u;
    return;
L_08A713F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71414:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] & 3u);
    goto L_08A71420;
L_08A71420:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08A7144C;
      }
      goto L_08A71428;
    }
L_08A71428:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08A7144C;
      }
      goto L_08A71430;
    }
L_08A71430:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08A71420;
      }
      goto L_08A7144C;
    }
L_08A7144C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A714A8;
      }
      goto L_08A71454;
    }
L_08A71454:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A714A8;
      }
      goto L_08A7145C;
    }
L_08A7145C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A7145C;
      }
      goto L_08A714A8;
    }
L_08A714A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A714C8;
      }
      goto L_08A714B0;
    }
L_08A714B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A714B0;
      }
      goto L_08A714C8;
    }
L_08A714C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A714D0:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21312));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A714FC;
      }
      goto L_08A714F8;
    }
L_08A714F8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A714FC;
L_08A714FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71504:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21312));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15));
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A71580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 652u, 0x08A7BAD4u>(ctx, &aot_mem) && ctx.pc == 0x08A71580u) goto L_08A71580;
    return;
L_08A71580:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7158C:
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(21312));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(476)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A71648;
      }
      goto L_08A715B4;
    }
L_08A715B4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    goto L_08A715C0;
L_08A715C0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[11] != ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
        goto L_08A71638;
    }
    goto L_08A715CC;
L_08A715CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(476)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71648;
      }
      goto L_08A715F8;
    }
L_08A715F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A715F8;
      }
      goto L_08A71630;
    }
L_08A71630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71648;
      }
      goto L_08A71638;
    }
L_08A71638:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A715C0;
      }
      goto L_08A71648;
    }
L_08A71648:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A71734;
      }
      goto L_08A7169C;
    }
L_08A7169C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A716B4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A714D0;
L_08A716B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71848;
      }
      goto L_08A716C4;
    }
L_08A716C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    goto L_08A716C8;
L_08A716C8:
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
        goto L_08A71870;
    }
    goto L_08A7172C;
L_08A7172C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71870;
      }
      goto L_08A71734;
    }
L_08A71734:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < 0 ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A71808;
      }
      goto L_08A71748;
    }
L_08A71748:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08A71764;
      }
      goto L_08A71750;
    }
L_08A71750:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71788;
      }
      goto L_08A71764;
    }
L_08A71764:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08A71788;
L_08A71788:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A71794u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A714D0;
L_08A71794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A717F4;
      }
      goto L_08A717A8;
    }
L_08A717A8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_08A716C4;
      }
      goto L_08A717B8;
    }
L_08A717B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A717B8;
      }
      goto L_08A717EC;
    }
L_08A717EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
      if (branch_taken) {
          goto L_08A716C8;
      }
      goto L_08A717F4;
    }
L_08A717F4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A71748;
      }
      goto L_08A71808;
    }
L_08A71808:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A71838u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A714D0;
L_08A71838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
        goto L_08A716C8;
    }
    goto L_08A71848;
L_08A71848:
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
L_08A71870:
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
L_08A71894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A718B4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 555u, 0x08A6E44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A718B4u) goto L_08A718B4;
    return;
L_08A718B4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A71944;
      }
      goto L_08A718C0;
    }
L_08A718C0:
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A718D4;
L_08A718D4:
    ctx.gpr[31] = (0x08A718DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 666u, 0x08A7BCD4u>(ctx, &aot_mem) && ctx.pc == 0x08A718DCu) goto L_08A718DC;
    return;
L_08A718DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71944;
      }
      goto L_08A718E4;
    }
L_08A718E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A71924;
      }
      goto L_08A71908;
    }
L_08A71908:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x08A71914u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 603u, 0x08A7B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A71914u) goto L_08A71914;
    return;
L_08A71914:
    ctx.gpr[31] = (0x08A7191Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 217u, 0x08A79380u>(ctx, &aot_mem) && ctx.pc == 0x08A7191Cu) goto L_08A7191C;
    return;
L_08A7191C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A718D4;
      }
      goto L_08A71924;
    }
L_08A71924:
    ctx.gpr[2] = (0u | 0u);
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
L_08A71944:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08A71964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A71974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 387u, 0x08A7A3ECu>(ctx, &aot_mem) && ctx.pc == 0x08A71974u) goto L_08A71974;
    return;
L_08A71974:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A71990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 392u, 0x08A7A420u>(ctx, &aot_mem) && ctx.pc == 0x08A71990u) goto L_08A71990;
    return;
L_08A71990:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A71A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 386u, 0x08A7A3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A71A38u) goto L_08A71A38;
    return;
L_08A71A38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71A44:
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[6] = (0u | 4096u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 127u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71A94:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5408));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21984));
    goto L_08A71AA8;
L_08A71AA8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A71AA8;
      }
      goto L_08A71AC8;
    }
L_08A71AC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71AD0:
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(21984));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A71AFC;
      }
      goto L_08A71AF0;
    }
L_08A71AF0:
    ctx.gpr[5] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
        goto L_08A71B04;
    }
    goto L_08A71AFC;
L_08A71AFC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_08A71B04;
L_08A71B04:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(21984)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(21984), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71BAC;
      }
      goto L_08A71B5C;
    }
L_08A71B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71BAC;
      }
      goto L_08A71B6C;
    }
L_08A71B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71BAC;
      }
      goto L_08A71B7C;
    }
L_08A71B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71BAC;
      }
      goto L_08A71B8C;
    }
L_08A71B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71BAC;
      }
      goto L_08A71B9C;
    }
L_08A71B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(21984)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(21984), ctx.gpr[4]);
    goto L_08A71BAC;
L_08A71BAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71BB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22008)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A71C08;
      }
      goto L_08A71BD8;
    }
L_08A71BD8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5440), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21936)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71C08;
      }
      goto L_08A71BEC;
    }
L_08A71BEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A71BF0;
L_08A71BF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A71BFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A71BFCu) goto L_08A71BFC;
    return;
L_08A71BFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A71BF0;
    }
    goto L_08A71C08;
L_08A71C08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71C18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(21312));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(360))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71CA4;
      }
      goto L_08A71C3C;
    }
L_08A71C3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(564))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08A71C54;
      }
      goto L_08A71C48;
    }
L_08A71C48:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(564), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(368), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(560), 0u);
    goto L_08A71C54;
L_08A71C54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(560)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71CA4;
      }
      goto L_08A71C8C;
    }
L_08A71C8C:
    ctx.gpr[31] = (0x08A71C94u);
    // nop
    goto L_08A71D68;
L_08A71C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71C8C;
      }
      goto L_08A71CA4;
    }
L_08A71CA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71CB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5432)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A71CD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A71CD0u) goto L_08A71CD0;
    return;
L_08A71CD0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(361));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(361));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5436)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A71D24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A71D24u) goto L_08A71D24;
    return;
L_08A71D24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71D30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A71D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 271u, 0x08A79BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A71D40u) goto L_08A71D40;
    return;
L_08A71D40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A71D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 276u, 0x08A79C54u>(ctx, &aot_mem) && ctx.pc == 0x08A71D5Cu) goto L_08A71D5C;
    return;
L_08A71D5C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(368));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A71DA8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 174u, 0x08A78E58u>(ctx, &aot_mem) && ctx.pc == 0x08A71DA8u) goto L_08A71DA8;
    return;
L_08A71DA8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(362))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A71DDC;
      }
      goto L_08A71DBC;
    }
L_08A71DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A71DC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A71DC8u) goto L_08A71DC8;
    return;
L_08A71DC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(362))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A71DBC;
      }
      goto L_08A71DDC;
    }
L_08A71DDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(364))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A72008;
      }
      goto L_08A71DF0;
    }
L_08A71DF0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A71E00;
L_08A71E00:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(109))))));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(364))))));
        goto L_08A71FF8;
    }
    goto L_08A71E14;
L_08A71E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
        goto L_08A71E64;
    }
    goto L_08A71E20;
L_08A71E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(128)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
        goto L_08A71E64;
    }
    goto L_08A71E2C;
L_08A71E2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(106)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
        goto L_08A71E4C;
    }
    goto L_08A71E4C;
L_08A71E4C:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08A71E58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 603u, 0x08A7B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A71E58u) goto L_08A71E58;
    return;
L_08A71E58:
    ctx.gpr[31] = (0x08A71E60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 217u, 0x08A79380u>(ctx, &aot_mem) && ctx.pc == 0x08A71E60u) goto L_08A71E60;
    return;
L_08A71E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    goto L_08A71E64;
L_08A71E64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A71E90;
      }
      goto L_08A71E6C;
    }
L_08A71E6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(107)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(105)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(107)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A71E90;
      }
      goto L_08A71E8C;
    }
L_08A71E8C:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    goto L_08A71E90;
L_08A71E90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
        goto L_08A71F3C;
    }
    goto L_08A71EA4;
L_08A71EA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A71EF0;
      }
      goto L_08A71EC8;
    }
L_08A71EC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
        goto L_08A71F18;
    }
    goto L_08A71EE0;
L_08A71EE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A71F14;
      }
      goto L_08A71EF0;
    }
L_08A71EF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
        goto L_08A71F18;
    }
    goto L_08A71F08;
L_08A71F08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A71F14;
L_08A71F14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    goto L_08A71F18;
L_08A71F18:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
        goto L_08A71F3C;
    }
    goto L_08A71F28;
L_08A71F28:
    ctx.gpr[31] = (0x08A71F30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08A720BC;
L_08A71F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(364))))));
      if (branch_taken) {
          goto L_08A71FF8;
      }
      goto L_08A71F38;
    }
L_08A71F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    goto L_08A71F3C;
L_08A71F3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71F60;
      }
      goto L_08A71F4C;
    }
L_08A71F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08A71F60;
L_08A71F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71FDC;
      }
      goto L_08A71F6C;
    }
L_08A71F6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(93))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(92))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(93))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(93))))));
        goto L_08A71FA0;
    }
    goto L_08A71F8C;
L_08A71F8C:
    ctx.gpr[31] = (0x08A71F94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08A720BC;
L_08A71F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(364))))));
      if (branch_taken) {
          goto L_08A71FF8;
      }
      goto L_08A71F9C;
    }
L_08A71F9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(93))))));
    goto L_08A71FA0;
L_08A71FA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
        goto L_08A71FBC;
    }
    goto L_08A71FBC;
L_08A71FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08A71FDC;
L_08A71FDC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(364))))));
        goto L_08A71FF8;
    }
    goto L_08A71FE4;
L_08A71FE4:
    ctx.gpr[31] = (0x08A71FECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 647u, 0x08A7BA04u>(ctx, &aot_mem) && ctx.pc == 0x08A71FECu) goto L_08A71FEC;
    return;
L_08A71FEC:
    ctx.gpr[31] = (0x08A71FF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 126u, 0x08A7512Cu>(ctx, &aot_mem) && ctx.pc == 0x08A71FF4u) goto L_08A71FF4;
    return;
L_08A71FF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(364))))));
    goto L_08A71FF8;
L_08A71FF8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A71E00;
      }
      goto L_08A72008;
    }
L_08A72008:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72030:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21936), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7203C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5448));
      if (branch_taken) {
          goto L_08A72094;
      }
      goto L_08A72054;
    }
L_08A72054:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7207C;
      }
      goto L_08A72060;
    }
L_08A72060:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (0u | 256u);
      if (branch_taken) {
          goto L_08A720A4;
      }
      goto L_08A72068;
    }
L_08A72068:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7207C:
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72094:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A720A4:
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A720BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A720D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 555u, 0x08A6E44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A720D4u) goto L_08A720D4;
    return;
L_08A720D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A7210C;
      }
      goto L_08A720E0;
    }
L_08A720E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A720EC;
L_08A720EC:
    ctx.gpr[31] = (0x08A720F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 666u, 0x08A7BCD4u>(ctx, &aot_mem) && ctx.pc == 0x08A720F4u) goto L_08A720F4;
    return;
L_08A720F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7210C;
      }
      goto L_08A720FC;
    }
L_08A720FC:
    ctx.gpr[31] = (0x08A72104u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 254u, 0x08A797D8u>(ctx, &aot_mem) && ctx.pc == 0x08A72104u) goto L_08A72104;
    return;
L_08A72104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A720EC;
      }
      goto L_08A7210C;
    }
L_08A7210C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A72144u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A73530;
L_08A72144:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-6));
        goto L_08A721B8;
    }
    goto L_08A72154;
L_08A72154:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7216C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A72174;
    }
L_08A72174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A7217C;
    }
L_08A7217C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A72184;
    }
L_08A72184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A7218C;
    }
L_08A7218C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A72194;
    }
L_08A72194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A7219C;
    }
L_08A7219C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A721A4;
    }
L_08A721A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A721AC;
    }
L_08A721AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A721B4;
    }
L_08A721B4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-6));
    goto L_08A721B8;
L_08A721B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A72248;
      }
      goto L_08A721C0;
    }
L_08A721C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-6));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A721D0;
    }
L_08A721D0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15480)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A721E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A721F0;
    }
L_08A721F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A721F8;
    }
L_08A721F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A72200;
    }
L_08A72200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A72208;
    }
L_08A72208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A72210;
    }
L_08A72210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A72218;
    }
L_08A72218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A72220;
    }
L_08A72220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A72228;
    }
L_08A72228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_08A72234;
      }
      goto L_08A72230;
    }
L_08A72230:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-6));
    goto L_08A72234;
L_08A72234:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72248:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22016));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22048));
    goto L_08A72258;
L_08A72258:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A72258;
      }
      goto L_08A72274;
    }
L_08A72274:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22080));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(567), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(568), 0u);
    ctx.gpr[31] = (0x08A72298u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A7362C;
L_08A72298:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A722C4;
      }
      goto L_08A722A8;
    }
L_08A722A8:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15400)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A722C0:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A722C4;
L_08A722C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22012)));
    ctx.gpr[31] = (0x08A722D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A736F8;
L_08A722D8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72454:
    ctx.gpr[31] = (0x08A7245Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A73AC4;
L_08A7245C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5976)));
    ctx.gpr[31] = (0x08A7246Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 283u, 0x08A79CACu>(ctx, &aot_mem) && ctx.pc == 0x08A7246Cu) goto L_08A7246C;
    return;
L_08A7246C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A72478u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A7362C;
L_08A72478:
    ctx.gpr[19] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A724A0;
      }
      goto L_08A72488;
    }
L_08A72488:
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[19]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A724A0:
    ctx.gpr[31] = (0x08A724A8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08A71CB8;
L_08A724A8:
    ctx.gpr[31] = (0x08A724B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    goto L_08A7158C;
L_08A724B0:
    ctx.gpr[31] = (0x08A724B8u);
    // nop
    goto L_08A739B4;
L_08A724B8:
    ctx.gpr[31] = (0x08A724C0u);
    // nop
    goto L_08A71CF4;
L_08A724C0:
    ctx.gpr[31] = (0x08A724C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 466u, 0x08A7A958u>(ctx, &aot_mem) && ctx.pc == 0x08A724C8u) goto L_08A724C8;
    return;
L_08A724C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(63)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A724E0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(22092), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 582u, 0x08A7B48Cu>(ctx, &aot_mem) && ctx.pc == 0x08A724E0u) goto L_08A724E0;
    return;
L_08A724E0:
    ctx.gpr[31] = (0x08A724E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 550u, 0x08A7B138u>(ctx, &aot_mem) && ctx.pc == 0x08A724E8u) goto L_08A724E8;
    return;
L_08A724E8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A72518u);
    // nop
    goto L_08A7389C;
L_08A72518:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5972), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72530:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360))))));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72590:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x08A7259Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A7362C;
L_08A7259C:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A725C4;
      }
      goto L_08A725AC;
    }
L_08A725AC:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A725C4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7261C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72680:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x08A7268Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A7362C;
L_08A7268C:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A726B4;
      }
      goto L_08A7269C;
    }
L_08A7269C:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14840)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A726B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72714:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x08A72720u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A7362C;
L_08A72720:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72748;
      }
      goto L_08A72730;
    }
L_08A72730:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72748:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A727A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[31] = (0x08A727B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A7362C;
L_08A727B4:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A727DC;
      }
      goto L_08A727C4;
    }
L_08A727C4:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A727DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72854:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A72860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A7362C;
L_08A72860:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72888;
      }
      goto L_08A72870;
    }
L_08A72870:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72888:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A728E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A72908;
      }
      goto L_08A728F8;
    }
L_08A728F8:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A72908;
L_08A72908:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7291C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A72940u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A73530;
L_08A72940:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
        goto L_08A7296C;
    }
    goto L_08A72950;
L_08A72950:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14200)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72968:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    goto L_08A7296C;
L_08A7296C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A729AC;
      }
      goto L_08A72974;
    }
L_08A72974:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14120)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7298C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A729AC;
      }
      goto L_08A72998;
    }
L_08A72998:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A729AC;
      }
      goto L_08A729A8;
    }
L_08A729A8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A729AC;
L_08A729AC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72A74:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15656));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72A88:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15648));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72A9C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15640));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72AB0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15636));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72AC4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15632));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72AD8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15624));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72AEC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15616));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72B00:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15596));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72B14:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15580));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72B70:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08A72B7C;
    }
    goto L_08A72B7C;
L_08A72B7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72B98;
      }
      goto L_08A72B84;
    }
L_08A72B84:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72B98:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72BFC:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 65535u);
        goto L_08A72C0C;
    }
    goto L_08A72C0C;
L_08A72C0C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A72C4C;
      }
      goto L_08A72C14;
    }
L_08A72C14:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A72C30;
      }
      goto L_08A72C28;
    }
L_08A72C28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A72C48;
      }
      goto L_08A72C30;
    }
L_08A72C30:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22048));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A72C48;
L_08A72C48:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A72C4C;
L_08A72C4C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A72C6C;
      }
      goto L_08A72C54;
    }
L_08A72C54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72C88;
      }
      goto L_08A72C64;
    }
L_08A72C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72CB8;
      }
      goto L_08A72C6C;
    }
L_08A72C6C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72C88:
    ctx.gpr[31] = (0x08A72C90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A7362C;
L_08A72C90:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72CB8;
      }
      goto L_08A72CA0;
    }
L_08A72CA0:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13880)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72CB8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72D20:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A72D48;
      }
      goto L_08A72D28;
    }
L_08A72D28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72D48:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72DAC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A72DDC;
      }
      goto L_08A72DB4;
    }
L_08A72DB4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72DFC;
      }
      goto L_08A72DBC;
    }
L_08A72DBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72DDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72DFC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72E64:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A72EA4;
      }
      goto L_08A72E6C;
    }
L_08A72E6C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A72E88;
      }
      goto L_08A72E80;
    }
L_08A72E80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A72EA0;
      }
      goto L_08A72E88;
    }
L_08A72E88:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22016));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A72EA0;
L_08A72EA0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A72EA4;
L_08A72EA4:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A72EE8;
      }
      goto L_08A72EB0;
    }
L_08A72EB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A72ECC;
      }
      goto L_08A72EC4;
    }
L_08A72EC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A72EE4;
      }
      goto L_08A72ECC;
    }
L_08A72ECC:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22016));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A72EE4;
L_08A72EE4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A72EE8;
L_08A72EE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A72F08;
      }
      goto L_08A72EF0;
    }
L_08A72EF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72F24;
      }
      goto L_08A72F00;
    }
L_08A72F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72F54;
      }
      goto L_08A72F08;
    }
L_08A72F08:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72F24:
    ctx.gpr[31] = (0x08A72F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A7362C;
L_08A72F2C:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72F54;
      }
      goto L_08A72F3C;
    }
L_08A72F3C:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72F54:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72FB8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A72FE8;
      }
      goto L_08A72FC0;
    }
L_08A72FC0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A73008;
      }
      goto L_08A72FC8;
    }
L_08A72FC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72FE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73008:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73078:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_08A730E0;
      }
      goto L_08A73080;
    }
L_08A73080:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7309Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A7362C;
L_08A7309C:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A730C4;
      }
      goto L_08A730AC;
    }
L_08A730AC:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A730C4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A730E0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73144:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73180;
      }
      goto L_08A7314C;
    }
L_08A7314C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73180:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73218:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    ctx.gpr[31] = (0x08A73224u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A7362C;
L_08A73224:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7324C;
      }
      goto L_08A73234;
    }
L_08A73234:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7324C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7327C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A73298;
      }
      goto L_08A73284;
    }
L_08A73284:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5972), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22012), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73298:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7337C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7339Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A7362C;
L_08A7339C:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A733C4;
      }
      goto L_08A733AC;
    }
L_08A733AC:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12920)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A733C4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73440:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A734DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    ctx.gpr[31] = (0x08A734ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A7362C;
L_08A734EC:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73514;
      }
      goto L_08A734FC;
    }
L_08A734FC:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73514:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5984)));
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21312));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A735D0;
      }
      goto L_08A73564;
    }
L_08A73564:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (0u | 90u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (49024u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    goto L_08A7359C;
L_08A7359C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(204), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(208), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A7359C;
      }
      goto L_08A735BC;
    }
L_08A735BC:
    ctx.gpr[31] = (0x08A735C4u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(204), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 145u, 0x08A78B90u>(ctx, &aot_mem) && ctx.pc == 0x08A735C4u) goto L_08A735C4;
    return;
L_08A735C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(6000), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(5984), ctx.gpr[4]);
    goto L_08A735D0;
L_08A735D0:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A735E4;
L_08A735E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A735E4;
      }
      goto L_08A73608;
    }
L_08A73608:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6000)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7362C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 19u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    goto L_08A73658;
L_08A73658:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A73658;
      }
      goto L_08A7367C;
    }
L_08A7367C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A736B0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 419u, 0x08A7A6A4u>(ctx, &aot_mem) && ctx.pc == 0x08A736B0u) goto L_08A736B0;
    return;
L_08A736B0:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    goto L_08A736C0;
L_08A736C0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(204), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(208), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A736C0;
      }
      goto L_08A736E0;
    }
L_08A736E0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(204), ctx.gpr[7]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A736F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (0u | 83u);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(7720), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(360))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A73764;
      }
      goto L_08A73738;
    }
L_08A73738:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A73744u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73744u) goto L_08A73744;
    return;
L_08A73744:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A73750u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A71504;
L_08A73750:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(364))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73784;
      }
      goto L_08A7375C;
    }
L_08A7375C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A737C0;
      }
      goto L_08A73764;
    }
L_08A73764:
    ctx.gpr[2] = (0u | 0u);
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
L_08A73784:
    ctx.gpr[31] = (0x08A7378Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A73530;
L_08A7378C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A737A4;
      }
      goto L_08A73794;
    }
L_08A73794:
    ctx.gpr[31] = (0x08A7379Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A7362C;
L_08A7379C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A737C0;
      }
      goto L_08A737A4;
    }
L_08A737A4:
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
L_08A737C0:
    ctx.gpr[31] = (0x08A737C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A71A94;
L_08A737C8:
    ctx.gpr[31] = (0x08A737D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 267u, 0x08A79B60u>(ctx, &aot_mem) && ctx.pc == 0x08A737D0u) goto L_08A737D0;
    return;
L_08A737D0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A737DCu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A71CB8;
L_08A737DC:
    ctx.gpr[31] = (0x08A737E4u);
    // nop
    goto L_08A739B4;
L_08A737E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A737F0u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    goto L_08A71650;
L_08A737F0:
    ctx.gpr[31] = (0x08A737F8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[2]);
    goto L_08A71CF4;
L_08A737F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5992), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(366), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(362), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(363), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A73820u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 466u, 0x08A7A958u>(ctx, &aot_mem) && ctx.pc == 0x08A73820u) goto L_08A73820;
    return;
L_08A73820:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[18]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(63)));
        goto L_08A73860;
    }
    goto L_08A7382C;
L_08A7382C:
    ctx.gpr[31] = (0x08A73834u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 157u, 0x08A78D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73834u) goto L_08A73834;
    return;
L_08A73834:
    ctx.gpr[31] = (0x08A7383Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 269u, 0x08A79BB0u>(ctx, &aot_mem) && ctx.pc == 0x08A7383Cu) goto L_08A7383C;
    return;
L_08A7383C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(0u));
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
L_08A73860:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A73874u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(22092), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 582u, 0x08A7B48Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73874u) goto L_08A73874;
    return;
L_08A73874:
    ctx.gpr[31] = (0x08A7387Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 550u, 0x08A7B138u>(ctx, &aot_mem) && ctx.pc == 0x08A7387Cu) goto L_08A7387C;
    return;
L_08A7387C:
    ctx.gpr[2] = (0u | 0u);
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
L_08A7389C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A738B4u);
    // nop
    goto L_08A72530;
L_08A738B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A738D4;
      }
      goto L_08A738BC;
    }
L_08A738BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A738EC;
      }
      goto L_08A738CC;
    }
L_08A738CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_08A738F8;
      }
      goto L_08A738D4;
    }
L_08A738D4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-14));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A738EC:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A738F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A738F4u) goto L_08A738F4;
    return;
L_08A738F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(444)));
    goto L_08A738F8;
L_08A738F8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
        goto L_08A7390C;
    }
    goto L_08A73900;
L_08A73900:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A73908u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A73908u) goto L_08A73908;
    return;
L_08A73908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    goto L_08A7390C;
L_08A7390C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_08A73920;
    }
    goto L_08A73914;
L_08A73914:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A7391Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7391Cu) goto L_08A7391C;
    return;
L_08A7391C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    goto L_08A73920;
L_08A73920:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
        goto L_08A73934;
    }
    goto L_08A73928;
L_08A73928:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A73930u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A73930u) goto L_08A73930;
    return;
L_08A73930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    goto L_08A73934;
L_08A73934:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73944;
      }
      goto L_08A7393C;
    }
L_08A7393C:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A73944u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A73944u) goto L_08A73944;
    return;
L_08A73944:
    ctx.gpr[31] = (0x08A7394Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 546u, 0x08A7B108u>(ctx, &aot_mem) && ctx.pc == 0x08A7394Cu) goto L_08A7394C;
    return;
L_08A7394C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A73960;
      }
      goto L_08A73958;
    }
L_08A73958:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A73960u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A73960u) goto L_08A73960;
    return;
L_08A73960:
    ctx.gpr[31] = (0x08A73968u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 157u, 0x08A78D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73968u) goto L_08A73968;
    return;
L_08A73968:
    ctx.gpr[31] = (0x08A73970u);
    // nop
    goto L_08A71CB8;
L_08A73970:
    ctx.gpr[31] = (0x08A73978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    goto L_08A7158C;
L_08A73978:
    ctx.gpr[31] = (0x08A73980u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    goto L_08A7158C;
L_08A73980:
    ctx.gpr[31] = (0x08A73988u);
    // nop
    goto L_08A71CF4;
L_08A73988:
    ctx.gpr[31] = (0x08A73990u);
    // nop
    goto L_08A71570;
L_08A73990:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A7399Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 269u, 0x08A79BB0u>(ctx, &aot_mem) && ctx.pc == 0x08A7399Cu) goto L_08A7399C;
    return;
L_08A7399C:
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
L_08A739B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(364))))));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5996)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A739FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A71650;
L_08A739FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A73A10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73A10u) goto L_08A73A10;
    return;
L_08A73A10:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(364))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[10] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A73AB0;
      }
      goto L_08A73A3C;
    }
L_08A73A3C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A73A48;
L_08A73A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] << 2u);
      if (branch_taken) {
          goto L_08A73A98;
      }
      goto L_08A73A68;
    }
L_08A73A68:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A73A6C;
L_08A73A6C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(100)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A73A6C;
      }
      goto L_08A73A94;
    }
L_08A73A94:
    ctx.gpr[4] = (ctx.gpr[9] << 2u);
    goto L_08A73A98;
L_08A73A98:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(364))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A73A48;
      }
      goto L_08A73AB0;
    }
L_08A73AB0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73AC4:
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(22080));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22016));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22048));
      if (branch_taken) {
          goto L_08A73AF8;
      }
      goto L_08A73AE8;
    }
L_08A73AE8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[9] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(5976), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A73AF8;
L_08A73AF8:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    goto L_08A73B00;
L_08A73B00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A73B24;
      }
      goto L_08A73B08;
    }
L_08A73B08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A73B40;
      }
      goto L_08A73B10;
    }
L_08A73B10:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A73B48;
      }
      goto L_08A73B1C;
    }
L_08A73B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A73B58;
      }
      goto L_08A73B24;
    }
L_08A73B24:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A73B40;
      }
      goto L_08A73B2C;
    }
L_08A73B2C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A73B70;
      }
      goto L_08A73B38;
    }
L_08A73B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A73B80;
      }
      goto L_08A73B40;
    }
L_08A73B40:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73B48:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08A73B58;
L_08A73B58:
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
        goto L_08A73B80;
    }
    goto L_08A73B60;
L_08A73B60:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A73B7C;
      }
      goto L_08A73B70;
    }
L_08A73B70:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A73B7C;
L_08A73B7C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A73B80;
L_08A73B80:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A73B00;
      }
      goto L_08A73B8C;
    }
L_08A73B8C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73C2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(360))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73C88;
      }
      goto L_08A73C54;
    }
L_08A73C54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(363))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A73C88;
      }
      goto L_08A73C68;
    }
L_08A73C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A73C74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A73C74u) goto L_08A73C74;
    return;
L_08A73C74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(363))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A73C68;
      }
      goto L_08A73C88;
    }
L_08A73C88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73CA0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5432)));
    ctx.gpr[4] = (2215u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15572));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A73CCC;
      }
      goto L_08A73CB8;
    }
L_08A73CB8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5432), ctx.gpr[4]);
    ctx.gpr[4] = (2215u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15600));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5436), ctx.gpr[4]);
    goto L_08A73CCC;
L_08A73CCC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73CD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A73CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 52u, 0x08A84484u>(ctx, &aot_mem) && ctx.pc == 0x08A73CE4u) goto L_08A73CE4;
    return;
L_08A73CE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A73D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 57u, 0x08A8451Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73D00u) goto L_08A73D00;
    return;
L_08A73D00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73D0C:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6008)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(364))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A73D2C;
      }
      goto L_08A73D2C;
    }
L_08A73D2C:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6008), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6008)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08A73D48;
      }
      goto L_08A73D3C;
    }
L_08A73D3C:
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6008), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6008)));
    goto L_08A73D48;
L_08A73D48:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A73D84;
      }
      goto L_08A73D54;
    }
L_08A73D54:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    goto L_08A73D58;
L_08A73D58:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(109))))));
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08A73D78;
    }
    goto L_08A73D68;
L_08A73D68:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(38)));
    if (ctx.gpr[7] == ctx.gpr[2]) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08A73D2C;
    }
    goto L_08A73D74;
L_08A73D74:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A73D78;
L_08A73D78:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A73D58;
      }
      goto L_08A73D84;
    }
L_08A73D84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73D8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[6]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A73E00;
      }
      goto L_08A73DEC;
    }
L_08A73DEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A73E34;
      }
      goto L_08A73DF8;
    }
L_08A73DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_08A73E3C;
      }
      goto L_08A73E00;
    }
L_08A73E00:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
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
L_08A73E34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    goto L_08A73E3C;
L_08A73E3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A73E50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A73D0C;
L_08A73E50:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08A73E5C;
L_08A73E5C:
    ctx.gpr[31] = (0x08A73E64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 69u, 0x08A746F8u>(ctx, &aot_mem) && ctx.pc == 0x08A73E64u) goto L_08A73E64;
    return;
L_08A73E64:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A73E88;
      }
      goto L_08A73E6C;
    }
L_08A73E6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A73E88;
      }
      goto L_08A73E78;
    }
L_08A73E78:
    ctx.gpr[31] = (0x08A73E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 79u, 0x08A7CDC8u>(ctx, &aot_mem) && ctx.pc == 0x08A73E80u) goto L_08A73E80;
    return;
L_08A73E80:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08A73E88;
L_08A73E88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73F14;
      }
      goto L_08A73E98;
    }
L_08A73E98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73F14;
      }
      goto L_08A73EA8;
    }
L_08A73EA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73F14;
      }
      goto L_08A73EB8;
    }
L_08A73EB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73F14;
      }
      goto L_08A73EC8;
    }
L_08A73EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A73EECu);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 8u, 0x08A74084u>(ctx, &aot_mem) && ctx.pc == 0x08A73EECu) goto L_08A73EEC;
    return;
L_08A73EEC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 4u, 0x08A7401Cu>(ctx, &aot_mem); return;
      }
      goto L_08A73EF8;
    }
L_08A73EF8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A73F14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 620u, 0x08A6E99Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73F14u) goto L_08A73F14;
    return;
L_08A73F14:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A73E5C;
      }
      goto L_08A73F1C;
    }
L_08A73F1C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
      if (branch_taken) {
          goto L_08A73F6C;
      }
      goto L_08A73F34;
    }
L_08A73F34:
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_08A73F3C;
L_08A73F3C:
    ctx.gpr[31] = (0x08A73F44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 663u, 0x08A7BC9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73F44u) goto L_08A73F44;
    return;
L_08A73F44:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A73F60;
    }
    goto L_08A73F4C;
L_08A73F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(240)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A73F60;
L_08A73F60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A73F3C;
      }
      goto L_08A73F6C;
    }
L_08A73F6C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 4u, 0x08A7401Cu>(ctx, &aot_mem); return;
      }
      goto L_08A73F74;
    }
L_08A73F74:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A73FB8;
      }
      goto L_08A73F80;
    }
L_08A73F80:
    ctx.gpr[31] = (0x08A73F88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 555u, 0x08A6E44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73F88u) goto L_08A73F88;
    return;
L_08A73F88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 7u, 0x08A74050u>(ctx, &aot_mem); return;
      }
      goto L_08A73F94;
    }
L_08A73F94:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21312));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 7u, 0x08A74050u>(ctx, &aot_mem); return;
      }
      goto L_08A73FB8;
    }
L_08A73FB8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 3u, 0x08A74014u>(ctx, &aot_mem); return;
      }
      goto L_08A73FC4;
    }
L_08A73FC4:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
    goto L_08A73FD4;
L_08A73FD4:
    ctx.gpr[31] = (0x08A73FDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 555u, 0x08A6E44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73FDCu) goto L_08A73FDC;
    return;
L_08A73FDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 1u, 0x08A74000u>(ctx, &aot_mem); return;
      }
      goto L_08A73FE8;
    }
L_08A73FE8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    ctx.pc = 0x08A74000u; return;
}

void recomp_unit_0155(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0155_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_155(Runtime &runtime) {
    runtime.register_generated_unit(155u, 0x08A70000u, 16384u, &recomp_unit_0155, &recomp_unit_0155_entry);
    runtime.register_function(0x08A70000u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70004u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70020u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7004Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70100u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7011Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7014Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70154u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7015Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70174u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70180u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70188u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70190u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70228u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70230u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70238u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7024Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70288u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70300u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7030Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70320u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7032Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70334u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7033Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70344u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70350u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70360u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70378u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70410u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70428u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70434u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7043Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70458u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7046Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70478u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7048Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70498u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70504u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70514u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7051Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70530u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70544u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70554u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7055Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70570u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70590u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70608u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70610u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70618u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70624u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70630u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70638u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70640u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70648u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70650u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7066Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70690u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70698u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70700u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70760u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70798u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70804u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70814u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70828u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70838u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70840u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70870u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70890u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7090Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7091Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70928u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70938u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70944u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70974u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70984u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70994u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70ABCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B34u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CCCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71020u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71030u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7103Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71064u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71070u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71074u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71078u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71080u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71094u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7111Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71124u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7112Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7113Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71200u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7120Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71218u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71224u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71228u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7123Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71244u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71248u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71258u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7125Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71298u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71330u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7134Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7135Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71368u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71398u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71414u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71420u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71428u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71430u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7144Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71454u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7145Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71504u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71570u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71580u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7158Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71630u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71638u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71648u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71650u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7169Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7172Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71734u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71748u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71750u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71764u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71788u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71794u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71808u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71838u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71848u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71870u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71894u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71908u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71914u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7191Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71924u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71944u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71964u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71974u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71980u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71990u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BB4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72008u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72030u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7203Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72054u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72060u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72068u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7207Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72094u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72104u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7210Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72124u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72144u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72154u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7216Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72174u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7217Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72184u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7218Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72194u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7219Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72200u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72208u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72210u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72218u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72220u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72228u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72230u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72234u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72248u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72258u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72274u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72298u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72454u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7245Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7246Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72478u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72488u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72508u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72518u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72530u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72590u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7259Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7261Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72680u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7268Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7269Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72714u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72720u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72730u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72748u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72854u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72860u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72870u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72888u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72908u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7291Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72940u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72950u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72968u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7296Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72974u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7298Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72998u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72AB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72AC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72AD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72AECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B84u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72BFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DB4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72ECCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73008u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73078u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73080u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7309Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A730ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A730C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A730E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73144u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7314Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73180u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73218u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73224u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73234u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7324Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7327Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73284u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73298u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7337Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7339Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A733ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A733C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73440u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A734DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A734ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A734FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73514u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73530u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73564u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7359Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73608u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7362Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73658u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7367Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73738u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73744u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73750u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7375Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73764u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73784u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7378Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73794u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7379Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73820u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7382Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73834u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7383Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73860u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73874u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7387Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7389Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73900u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73908u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7390Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73914u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7391Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73920u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73928u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73930u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73934u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7393Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73944u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7394Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73958u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73960u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73968u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73970u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73978u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73980u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73988u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73990u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7399Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A739B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A739FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73AB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73AC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73AE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73AF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CCCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D84u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E34u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F34u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FE8u, &recomp_unit_0155, "recomp_unit_0155");
}
} // namespace psprecomp

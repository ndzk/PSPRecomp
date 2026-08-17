#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0061[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0,
    0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0,
    29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0,
    43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 58,
    0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 67, 0, 68, 0, 69, 0, 70, 0, 71, 72, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82,
    83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87,
    0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 97, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0,
    113, 0, 114, 0, 115, 0, 116, 0, 117, 118, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0,
    127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0,
    0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 188, 189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 243, 0, 244,
    0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 0,
    258, 0, 259, 0, 260, 0, 0, 261, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 274,
    0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0,
    0, 284, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0,
    303, 0, 304, 0, 305, 306, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 311,
    0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 323,
    0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339,
    0, 340, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351,
    0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0,
    0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375,
    0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387,
    0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0,
    426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 429, 0, 430, 0, 0, 0,
    0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 439, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0,
    488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0,
    0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0,
    0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0,
    0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 0, 0, 516, 0, 517,
    0, 518, 0, 519, 0, 520, 0, 521, 522, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0,
    0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582,
    0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 589, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0,
    0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 618,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624,
    0, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639,
    0, 640, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0,
    655, 0, 656, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 663, 0, 664, 0,
    0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674,
    0, 675, 0, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 685, 0, 686,
    0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0,
    699, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0,
    0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0,
    0, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0,
    0, 736, 0, 737, 0, 738, 0, 0, 0, 0, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0,
    745, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0,
    0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763,
    0, 764, 0, 765, 0, 766, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 772,
    0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 778, 0, 779, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0,
    0, 781, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 785, 0, 786, 0, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 790, 0, 791, 0,
    0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 798, 0, 0, 0, 0, 0,
    799, 0, 800, 0, 801, 0, 802, 0, 803, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0,
    807, 0, 0, 808, 0, 809, 0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 814,
};
void recomp_unit_0061_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0061[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F8000;
    case 2u: goto L_088F8048;
    case 3u: goto L_088F8050;
    case 4u: goto L_088F8058;
    case 5u: goto L_088F80BC;
    case 6u: goto L_088F80C4;
    case 7u: goto L_088F80CC;
    case 8u: goto L_088F812C;
    case 9u: goto L_088F813C;
    case 10u: goto L_088F8150;
    case 11u: goto L_088F8158;
    case 12u: goto L_088F8160;
    case 13u: goto L_088F8168;
    case 14u: goto L_088F8170;
    case 15u: goto L_088F8178;
    case 16u: goto L_088F8184;
    case 17u: goto L_088F818C;
    case 18u: goto L_088F8194;
    case 19u: goto L_088F819C;
    case 20u: goto L_088F81A4;
    case 21u: goto L_088F81AC;
    case 22u: goto L_088F81B4;
    case 23u: goto L_088F81BC;
    case 24u: goto L_088F81C0;
    case 25u: goto L_088F81D4;
    case 26u: goto L_088F81E8;
    case 27u: goto L_088F81F0;
    case 28u: goto L_088F81F8;
    case 29u: goto L_088F8200;
    case 30u: goto L_088F8208;
    case 31u: goto L_088F8218;
    case 32u: goto L_088F8220;
    case 33u: goto L_088F8228;
    case 34u: goto L_088F8230;
    case 35u: goto L_088F8238;
    case 36u: goto L_088F8240;
    case 37u: goto L_088F8248;
    case 38u: goto L_088F8250;
    case 39u: goto L_088F8258;
    case 40u: goto L_088F8260;
    case 41u: goto L_088F8268;
    case 42u: goto L_088F8270;
    case 43u: goto L_088F8280;
    case 44u: goto L_088F8288;
    case 45u: goto L_088F8290;
    case 46u: goto L_088F8298;
    case 47u: goto L_088F82A0;
    case 48u: goto L_088F82A8;
    case 49u: goto L_088F82B0;
    case 50u: goto L_088F82B8;
    case 51u: goto L_088F82C8;
    case 52u: goto L_088F82D0;
    case 53u: goto L_088F82D8;
    case 54u: goto L_088F82E0;
    case 55u: goto L_088F82E8;
    case 56u: goto L_088F82F0;
    case 57u: goto L_088F82F8;
    case 58u: goto L_088F82FC;
    case 59u: goto L_088F8304;
    case 60u: goto L_088F830C;
    case 61u: goto L_088F8314;
    case 62u: goto L_088F831C;
    case 63u: goto L_088F8324;
    case 64u: goto L_088F832C;
    case 65u: goto L_088F8334;
    case 66u: goto L_088F833C;
    case 67u: goto L_088F8340;
    case 68u: goto L_088F8348;
    case 69u: goto L_088F8350;
    case 70u: goto L_088F8358;
    case 71u: goto L_088F8360;
    case 72u: goto L_088F8364;
    case 73u: goto L_088F8378;
    case 74u: goto L_088F839C;
    case 75u: goto L_088F83A8;
    case 76u: goto L_088F83C0;
    case 77u: goto L_088F8414;
    case 78u: goto L_088F842C;
    case 79u: goto L_088F8444;
    case 80u: goto L_088F845C;
    case 81u: goto L_088F8474;
    case 82u: goto L_088F847C;
    case 83u: goto L_088F8480;
    case 84u: goto L_088F8498;
    case 85u: goto L_088F84D8;
    case 86u: goto L_088F84EC;
    case 87u: goto L_088F84FC;
    case 88u: goto L_088F850C;
    case 89u: goto L_088F8514;
    case 90u: goto L_088F852C;
    case 91u: goto L_088F853C;
    case 92u: goto L_088F854C;
    case 93u: goto L_088F8554;
    case 94u: goto L_088F8560;
    case 95u: goto L_088F856C;
    case 96u: goto L_088F8574;
    case 97u: goto L_088F8578;
    case 98u: goto L_088F8590;
    case 99u: goto L_088F85A0;
    case 100u: goto L_088F85A8;
    case 101u: goto L_088F85BC;
    case 102u: goto L_088F85CC;
    case 103u: goto L_088F85D0;
    case 104u: goto L_088F85EC;
    case 105u: goto L_088F8624;
    case 106u: goto L_088F8648;
    case 107u: goto L_088F8650;
    case 108u: goto L_088F8658;
    case 109u: goto L_088F8660;
    case 110u: goto L_088F8668;
    case 111u: goto L_088F8670;
    case 112u: goto L_088F8678;
    case 113u: goto L_088F8680;
    case 114u: goto L_088F8688;
    case 115u: goto L_088F8690;
    case 116u: goto L_088F8698;
    case 117u: goto L_088F86A0;
    case 118u: goto L_088F86A4;
    case 119u: goto L_088F86AC;
    case 120u: goto L_088F86B8;
    case 121u: goto L_088F86C0;
    case 122u: goto L_088F86C8;
    case 123u: goto L_088F86D8;
    case 124u: goto L_088F86E0;
    case 125u: goto L_088F86E8;
    case 126u: goto L_088F86F0;
    case 127u: goto L_088F8700;
    case 128u: goto L_088F8708;
    case 129u: goto L_088F8710;
    case 130u: goto L_088F872C;
    case 131u: goto L_088F8734;
    case 132u: goto L_088F873C;
    case 133u: goto L_088F8744;
    case 134u: goto L_088F8760;
    case 135u: goto L_088F8768;
    case 136u: goto L_088F8770;
    case 137u: goto L_088F8778;
    case 138u: goto L_088F8794;
    case 139u: goto L_088F879C;
    case 140u: goto L_088F87A4;
    case 141u: goto L_088F87AC;
    case 142u: goto L_088F87C8;
    case 143u: goto L_088F87D0;
    case 144u: goto L_088F87D8;
    case 145u: goto L_088F87E0;
    case 146u: goto L_088F8808;
    case 147u: goto L_088F8810;
    case 148u: goto L_088F8818;
    case 149u: goto L_088F8820;
    case 150u: goto L_088F883C;
    case 151u: goto L_088F8844;
    case 152u: goto L_088F884C;
    case 153u: goto L_088F8854;
    case 154u: goto L_088F887C;
    case 155u: goto L_088F8890;
    case 156u: goto L_088F88B8;
    case 157u: goto L_088F88C8;
    case 158u: goto L_088F88DC;
    case 159u: goto L_088F88E4;
    case 160u: goto L_088F88EC;
    case 161u: goto L_088F8910;
    case 162u: goto L_088F8918;
    case 163u: goto L_088F8920;
    case 164u: goto L_088F8928;
    case 165u: goto L_088F894C;
    case 166u: goto L_088F8954;
    case 167u: goto L_088F895C;
    case 168u: goto L_088F8964;
    case 169u: goto L_088F8988;
    case 170u: goto L_088F8990;
    case 171u: goto L_088F8998;
    case 172u: goto L_088F89A0;
    case 173u: goto L_088F89C4;
    case 174u: goto L_088F89CC;
    case 175u: goto L_088F89D4;
    case 176u: goto L_088F89DC;
    case 177u: goto L_088F8A0C;
    case 178u: goto L_088F8A14;
    case 179u: goto L_088F8A1C;
    case 180u: goto L_088F8A24;
    case 181u: goto L_088F8A48;
    case 182u: goto L_088F8A50;
    case 183u: goto L_088F8A58;
    case 184u: goto L_088F8A60;
    case 185u: goto L_088F8A8C;
    case 186u: goto L_088F8A94;
    case 187u: goto L_088F8A9C;
    case 188u: goto L_088F8AA8;
    case 189u: goto L_088F8AAC;
    case 190u: goto L_088F8AB8;
    case 191u: goto L_088F8AC8;
    case 192u: goto L_088F8AD0;
    case 193u: goto L_088F8AD4;
    case 194u: goto L_088F8ADC;
    case 195u: goto L_088F8AE4;
    case 196u: goto L_088F8B08;
    case 197u: goto L_088F8B34;
    case 198u: goto L_088F8B44;
    case 199u: goto L_088F8B50;
    case 200u: goto L_088F8B58;
    case 201u: goto L_088F8B70;
    case 202u: goto L_088F8B78;
    case 203u: goto L_088F8B80;
    case 204u: goto L_088F8BA4;
    case 205u: goto L_088F8BAC;
    case 206u: goto L_088F8BB4;
    case 207u: goto L_088F8BBC;
    case 208u: goto L_088F8BE0;
    case 209u: goto L_088F8BE8;
    case 210u: goto L_088F8BF0;
    case 211u: goto L_088F8BF8;
    case 212u: goto L_088F8C1C;
    case 213u: goto L_088F8C24;
    case 214u: goto L_088F8C2C;
    case 215u: goto L_088F8C34;
    case 216u: goto L_088F8C58;
    case 217u: goto L_088F8C60;
    case 218u: goto L_088F8C68;
    case 219u: goto L_088F8C70;
    case 220u: goto L_088F8CA0;
    case 221u: goto L_088F8CA8;
    case 222u: goto L_088F8CB0;
    case 223u: goto L_088F8CB8;
    case 224u: goto L_088F8CDC;
    case 225u: goto L_088F8CE4;
    case 226u: goto L_088F8CEC;
    case 227u: goto L_088F8CF4;
    case 228u: goto L_088F8D20;
    case 229u: goto L_088F8D28;
    case 230u: goto L_088F8D30;
    case 231u: goto L_088F8D3C;
    case 232u: goto L_088F8D40;
    case 233u: goto L_088F8D4C;
    case 234u: goto L_088F8D5C;
    case 235u: goto L_088F8D84;
    case 236u: goto L_088F8DAC;
    case 237u: goto L_088F8DB4;
    case 238u: goto L_088F8DC8;
    case 239u: goto L_088F8DD0;
    case 240u: goto L_088F8DD8;
    case 241u: goto L_088F8DE0;
    case 242u: goto L_088F8DE8;
    case 243u: goto L_088F8DF4;
    case 244u: goto L_088F8DFC;
    case 245u: goto L_088F8E04;
    case 246u: goto L_088F8E10;
    case 247u: goto L_088F8E18;
    case 248u: goto L_088F8E20;
    case 249u: goto L_088F8E2C;
    case 250u: goto L_088F8E34;
    case 251u: goto L_088F8E3C;
    case 252u: goto L_088F8E48;
    case 253u: goto L_088F8E50;
    case 254u: goto L_088F8E58;
    case 255u: goto L_088F8E64;
    case 256u: goto L_088F8E6C;
    case 257u: goto L_088F8E74;
    case 258u: goto L_088F8E80;
    case 259u: goto L_088F8E88;
    case 260u: goto L_088F8E90;
    case 261u: goto L_088F8E9C;
    case 262u: goto L_088F8EA0;
    case 263u: goto L_088F8EB4;
    case 264u: goto L_088F8ED8;
    case 265u: goto L_088F8F08;
    case 266u: goto L_088F8F20;
    case 267u: goto L_088F8F2C;
    case 268u: goto L_088F8F34;
    case 269u: goto L_088F8F44;
    case 270u: goto L_088F8F4C;
    case 271u: goto L_088F8F5C;
    case 272u: goto L_088F8F64;
    case 273u: goto L_088F8F74;
    case 274u: goto L_088F8F7C;
    case 275u: goto L_088F8F84;
    case 276u: goto L_088F8F9C;
    case 277u: goto L_088F8FA4;
    case 278u: goto L_088F8FAC;
    case 279u: goto L_088F8FC4;
    case 280u: goto L_088F8FCC;
    case 281u: goto L_088F8FD4;
    case 282u: goto L_088F8FEC;
    case 283u: goto L_088F8FF4;
    case 284u: goto L_088F9004;
    case 285u: goto L_088F900C;
    case 286u: goto L_088F901C;
    case 287u: goto L_088F9024;
    case 288u: goto L_088F9034;
    case 289u: goto L_088F903C;
    case 290u: goto L_088F904C;
    case 291u: goto L_088F9060;
    case 292u: goto L_088F9090;
    case 293u: goto L_088F90A8;
    case 294u: goto L_088F90B0;
    case 295u: goto L_088F90B8;
    case 296u: goto L_088F90C0;
    case 297u: goto L_088F90C8;
    case 298u: goto L_088F90D0;
    case 299u: goto L_088F90DC;
    case 300u: goto L_088F90E4;
    case 301u: goto L_088F90F0;
    case 302u: goto L_088F90F8;
    case 303u: goto L_088F9100;
    case 304u: goto L_088F9108;
    case 305u: goto L_088F9110;
    case 306u: goto L_088F9114;
    case 307u: goto L_088F9118;
    case 308u: goto L_088F9148;
    case 309u: goto L_088F915C;
    case 310u: goto L_088F9174;
    case 311u: goto L_088F917C;
    case 312u: goto L_088F9184;
    case 313u: goto L_088F918C;
    case 314u: goto L_088F9194;
    case 315u: goto L_088F919C;
    case 316u: goto L_088F91B4;
    case 317u: goto L_088F91BC;
    case 318u: goto L_088F91C4;
    case 319u: goto L_088F91CC;
    case 320u: goto L_088F91D4;
    case 321u: goto L_088F91DC;
    case 322u: goto L_088F91F4;
    case 323u: goto L_088F91FC;
    case 324u: goto L_088F9204;
    case 325u: goto L_088F920C;
    case 326u: goto L_088F9214;
    case 327u: goto L_088F921C;
    case 328u: goto L_088F9224;
    case 329u: goto L_088F922C;
    case 330u: goto L_088F9234;
    case 331u: goto L_088F923C;
    case 332u: goto L_088F9244;
    case 333u: goto L_088F924C;
    case 334u: goto L_088F9254;
    case 335u: goto L_088F925C;
    case 336u: goto L_088F9264;
    case 337u: goto L_088F926C;
    case 338u: goto L_088F9274;
    case 339u: goto L_088F927C;
    case 340u: goto L_088F9284;
    case 341u: goto L_088F929C;
    case 342u: goto L_088F92A4;
    case 343u: goto L_088F92AC;
    case 344u: goto L_088F92B4;
    case 345u: goto L_088F92BC;
    case 346u: goto L_088F92C4;
    case 347u: goto L_088F92DC;
    case 348u: goto L_088F92E4;
    case 349u: goto L_088F92EC;
    case 350u: goto L_088F92F4;
    case 351u: goto L_088F92FC;
    case 352u: goto L_088F9304;
    case 353u: goto L_088F931C;
    case 354u: goto L_088F9324;
    case 355u: goto L_088F932C;
    case 356u: goto L_088F9334;
    case 357u: goto L_088F933C;
    case 358u: goto L_088F9354;
    case 359u: goto L_088F935C;
    case 360u: goto L_088F9364;
    case 361u: goto L_088F936C;
    case 362u: goto L_088F9374;
    case 363u: goto L_088F938C;
    case 364u: goto L_088F9394;
    case 365u: goto L_088F939C;
    case 366u: goto L_088F93A4;
    case 367u: goto L_088F93AC;
    case 368u: goto L_088F93C4;
    case 369u: goto L_088F93CC;
    case 370u: goto L_088F93D4;
    case 371u: goto L_088F93DC;
    case 372u: goto L_088F93E4;
    case 373u: goto L_088F93EC;
    case 374u: goto L_088F93F4;
    case 375u: goto L_088F93FC;
    case 376u: goto L_088F9404;
    case 377u: goto L_088F941C;
    case 378u: goto L_088F9424;
    case 379u: goto L_088F942C;
    case 380u: goto L_088F9434;
    case 381u: goto L_088F943C;
    case 382u: goto L_088F9444;
    case 383u: goto L_088F944C;
    case 384u: goto L_088F9454;
    case 385u: goto L_088F945C;
    case 386u: goto L_088F9474;
    case 387u: goto L_088F947C;
    case 388u: goto L_088F9484;
    case 389u: goto L_088F948C;
    case 390u: goto L_088F9494;
    case 391u: goto L_088F949C;
    case 392u: goto L_088F94B4;
    case 393u: goto L_088F94BC;
    case 394u: goto L_088F94C4;
    case 395u: goto L_088F94CC;
    case 396u: goto L_088F94D4;
    case 397u: goto L_088F94DC;
    case 398u: goto L_088F94E4;
    case 399u: goto L_088F94EC;
    case 400u: goto L_088F94F4;
    case 401u: goto L_088F952C;
    case 402u: goto L_088F954C;
    case 403u: goto L_088F9564;
    case 404u: goto L_088F9584;
    case 405u: goto L_088F9598;
    case 406u: goto L_088F95B4;
    case 407u: goto L_088F960C;
    case 408u: goto L_088F9620;
    case 409u: goto L_088F963C;
    case 410u: goto L_088F9644;
    case 411u: goto L_088F9654;
    case 412u: goto L_088F9694;
    case 413u: goto L_088F96D4;
    case 414u: goto L_088F96E4;
    case 415u: goto L_088F96F4;
    case 416u: goto L_088F97B8;
    case 417u: goto L_088F9830;
    case 418u: goto L_088F9840;
    case 419u: goto L_088F9864;
    case 420u: goto L_088F98C0;
    case 421u: goto L_088F98DC;
    case 422u: goto L_088F998C;
    case 423u: goto L_088F999C;
    case 424u: goto L_088F99A8;
    case 425u: goto L_088F99F8;
    case 426u: goto L_088F9A00;
    case 427u: goto L_088F9A10;
    case 428u: goto L_088F9A64;
    case 429u: goto L_088F9A68;
    case 430u: goto L_088F9A70;
    case 431u: goto L_088F9A84;
    case 432u: goto L_088F9A90;
    case 433u: goto L_088F9AAC;
    case 434u: goto L_088F9AF8;
    case 435u: goto L_088F9B00;
    case 436u: goto L_088F9B0C;
    case 437u: goto L_088F9B18;
    case 438u: goto L_088F9B58;
    case 439u: goto L_088F9B5C;
    case 440u: goto L_088F9B80;
    case 441u: goto L_088F9B98;
    case 442u: goto L_088F9BA8;
    case 443u: goto L_088F9BB8;
    case 444u: goto L_088F9C00;
    case 445u: goto L_088F9C58;
    case 446u: goto L_088F9C74;
    case 447u: goto L_088F9CB8;
    case 448u: goto L_088F9CCC;
    case 449u: goto L_088F9CE4;
    case 450u: goto L_088F9D68;
    case 451u: goto L_088F9DD4;
    case 452u: goto L_088F9DE4;
    case 453u: goto L_088F9DF8;
    case 454u: goto L_088F9E10;
    case 455u: goto L_088F9E8C;
    case 456u: goto L_088F9EA4;
    case 457u: goto L_088F9F14;
    case 458u: goto L_088F9F2C;
    case 459u: goto L_088F9F3C;
    case 460u: goto L_088F9F50;
    case 461u: goto L_088F9F94;
    case 462u: goto L_088F9FF0;
    case 463u: goto L_088FA010;
    case 464u: goto L_088FA070;
    case 465u: goto L_088FA104;
    case 466u: goto L_088FA168;
    case 467u: goto L_088FA19C;
    case 468u: goto L_088FA238;
    case 469u: goto L_088FA250;
    case 470u: goto L_088FA2D4;
    case 471u: goto L_088FA360;
    case 472u: goto L_088FA370;
    case 473u: goto L_088FA3CC;
    case 474u: goto L_088FA450;
    case 475u: goto L_088FA458;
    case 476u: goto L_088FA50C;
    case 477u: goto L_088FA520;
    case 478u: goto L_088FA53C;
    case 479u: goto L_088FA554;
    case 480u: goto L_088FA57C;
    case 481u: goto L_088FA5D4;
    case 482u: goto L_088FA5E4;
    case 483u: goto L_088FA5F4;
    case 484u: goto L_088FA63C;
    case 485u: goto L_088FA690;
    case 486u: goto L_088FA6AC;
    case 487u: goto L_088FA770;
    case 488u: goto L_088FA780;
    case 489u: goto L_088FA7F0;
    case 490u: goto L_088FA808;
    case 491u: goto L_088FA818;
    case 492u: goto L_088FA830;
    case 493u: goto L_088FA838;
    case 494u: goto L_088FA8B0;
    case 495u: goto L_088FA8C8;
    case 496u: goto L_088FA8D8;
    case 497u: goto L_088FA910;
    case 498u: goto L_088FA928;
    case 499u: goto L_088FA974;
    case 500u: goto L_088FA990;
    case 501u: goto L_088FA9B4;
    case 502u: goto L_088FA9D4;
    case 503u: goto L_088FA9DC;
    case 504u: goto L_088FA9F4;
    case 505u: goto L_088FAA08;
    case 506u: goto L_088FAA1C;
    case 507u: goto L_088FAA8C;
    case 508u: goto L_088FAAAC;
    case 509u: goto L_088FAAB4;
    case 510u: goto L_088FAABC;
    case 511u: goto L_088FAAC4;
    case 512u: goto L_088FAACC;
    case 513u: goto L_088FAAD4;
    case 514u: goto L_088FAADC;
    case 515u: goto L_088FAAE4;
    case 516u: goto L_088FAAF4;
    case 517u: goto L_088FAAFC;
    case 518u: goto L_088FAB04;
    case 519u: goto L_088FAB0C;
    case 520u: goto L_088FAB14;
    case 521u: goto L_088FAB1C;
    case 522u: goto L_088FAB20;
    case 523u: goto L_088FAB28;
    case 524u: goto L_088FAB30;
    case 525u: goto L_088FAB40;
    case 526u: goto L_088FABA4;
    case 527u: goto L_088FABB0;
    case 528u: goto L_088FABEC;
    case 529u: goto L_088FABF4;
    case 530u: goto L_088FAC2C;
    case 531u: goto L_088FAC30;
    case 532u: goto L_088FAC50;
    case 533u: goto L_088FAC58;
    case 534u: goto L_088FAC60;
    case 535u: goto L_088FACC4;
    case 536u: goto L_088FACCC;
    case 537u: goto L_088FACD8;
    case 538u: goto L_088FACF8;
    case 539u: goto L_088FAD4C;
    case 540u: goto L_088FAD54;
    case 541u: goto L_088FAD5C;
    case 542u: goto L_088FADA4;
    case 543u: goto L_088FADBC;
    case 544u: goto L_088FADC4;
    case 545u: goto L_088FADDC;
    case 546u: goto L_088FAE34;
    case 547u: goto L_088FAE50;
    case 548u: goto L_088FAE5C;
    case 549u: goto L_088FAEAC;
    case 550u: goto L_088FAEBC;
    case 551u: goto L_088FAED0;
    case 552u: goto L_088FAEE4;
    case 553u: goto L_088FAEFC;
    case 554u: goto L_088FAF94;
    case 555u: goto L_088FAFDC;
    case 556u: goto L_088FB008;
    case 557u: goto L_088FB038;
    case 558u: goto L_088FB090;
    case 559u: goto L_088FB114;
    case 560u: goto L_088FB15C;
    case 561u: goto L_088FB188;
    case 562u: goto L_088FB1B8;
    case 563u: goto L_088FB208;
    case 564u: goto L_088FB220;
    case 565u: goto L_088FB264;
    case 566u: goto L_088FB274;
    case 567u: goto L_088FB288;
    case 568u: goto L_088FB2CC;
    case 569u: goto L_088FB314;
    case 570u: goto L_088FB31C;
    case 571u: goto L_088FB324;
    case 572u: goto L_088FB32C;
    case 573u: goto L_088FB334;
    case 574u: goto L_088FB33C;
    case 575u: goto L_088FB344;
    case 576u: goto L_088FB34C;
    case 577u: goto L_088FB354;
    case 578u: goto L_088FB35C;
    case 579u: goto L_088FB364;
    case 580u: goto L_088FB36C;
    case 581u: goto L_088FB374;
    case 582u: goto L_088FB37C;
    case 583u: goto L_088FB384;
    case 584u: goto L_088FB38C;
    case 585u: goto L_088FB394;
    case 586u: goto L_088FB39C;
    case 587u: goto L_088FB3A4;
    case 588u: goto L_088FB3AC;
    case 589u: goto L_088FB3B0;
    case 590u: goto L_088FB3B8;
    case 591u: goto L_088FB3C0;
    case 592u: goto L_088FB3D4;
    case 593u: goto L_088FB400;
    case 594u: goto L_088FB40C;
    case 595u: goto L_088FB430;
    case 596u: goto L_088FB438;
    case 597u: goto L_088FB454;
    case 598u: goto L_088FB45C;
    case 599u: goto L_088FB464;
    case 600u: goto L_088FB494;
    case 601u: goto L_088FB49C;
    case 602u: goto L_088FB4AC;
    case 603u: goto L_088FB4B8;
    case 604u: goto L_088FB4E4;
    case 605u: goto L_088FB508;
    case 606u: goto L_088FB514;
    case 607u: goto L_088FB524;
    case 608u: goto L_088FB530;
    case 609u: goto L_088FB594;
    case 610u: goto L_088FB59C;
    case 611u: goto L_088FB5A8;
    case 612u: goto L_088FB5B4;
    case 613u: goto L_088FB5D0;
    case 614u: goto L_088FB5D8;
    case 615u: goto L_088FB5E0;
    case 616u: goto L_088FB5E8;
    case 617u: goto L_088FB5F4;
    case 618u: goto L_088FB5FC;
    case 619u: goto L_088FB628;
    case 620u: goto L_088FB63C;
    case 621u: goto L_088FB654;
    case 622u: goto L_088FB66C;
    case 623u: goto L_088FB674;
    case 624u: goto L_088FB67C;
    case 625u: goto L_088FB688;
    case 626u: goto L_088FB694;
    case 627u: goto L_088FB69C;
    case 628u: goto L_088FB6A4;
    case 629u: goto L_088FB6AC;
    case 630u: goto L_088FB6B4;
    case 631u: goto L_088FB6BC;
    case 632u: goto L_088FB6C4;
    case 633u: goto L_088FB6CC;
    case 634u: goto L_088FB6D4;
    case 635u: goto L_088FB6DC;
    case 636u: goto L_088FB6E4;
    case 637u: goto L_088FB6EC;
    case 638u: goto L_088FB6F4;
    case 639u: goto L_088FB6FC;
    case 640u: goto L_088FB704;
    case 641u: goto L_088FB70C;
    case 642u: goto L_088FB714;
    case 643u: goto L_088FB71C;
    case 644u: goto L_088FB728;
    case 645u: goto L_088FB730;
    case 646u: goto L_088FB738;
    case 647u: goto L_088FB740;
    case 648u: goto L_088FB748;
    case 649u: goto L_088FB750;
    case 650u: goto L_088FB758;
    case 651u: goto L_088FB760;
    case 652u: goto L_088FB768;
    case 653u: goto L_088FB770;
    case 654u: goto L_088FB778;
    case 655u: goto L_088FB780;
    case 656u: goto L_088FB788;
    case 657u: goto L_088FB78C;
    case 658u: goto L_088FB7A0;
    case 659u: goto L_088FB7BC;
    case 660u: goto L_088FB7C4;
    case 661u: goto L_088FB7E0;
    case 662u: goto L_088FB7E8;
    case 663u: goto L_088FB7F0;
    case 664u: goto L_088FB7F8;
    case 665u: goto L_088FB818;
    case 666u: goto L_088FB820;
    case 667u: goto L_088FB82C;
    case 668u: goto L_088FB834;
    case 669u: goto L_088FB83C;
    case 670u: goto L_088FB844;
    case 671u: goto L_088FB84C;
    case 672u: goto L_088FB854;
    case 673u: goto L_088FB85C;
    case 674u: goto L_088FB87C;
    case 675u: goto L_088FB884;
    case 676u: goto L_088FB890;
    case 677u: goto L_088FB898;
    case 678u: goto L_088FB8A0;
    case 679u: goto L_088FB8A8;
    case 680u: goto L_088FB8B0;
    case 681u: goto L_088FB8B8;
    case 682u: goto L_088FB8C0;
    case 683u: goto L_088FB8E0;
    case 684u: goto L_088FB8E8;
    case 685u: goto L_088FB8F4;
    case 686u: goto L_088FB8FC;
    case 687u: goto L_088FB904;
    case 688u: goto L_088FB90C;
    case 689u: goto L_088FB914;
    case 690u: goto L_088FB91C;
    case 691u: goto L_088FB924;
    case 692u: goto L_088FB944;
    case 693u: goto L_088FB94C;
    case 694u: goto L_088FB958;
    case 695u: goto L_088FB960;
    case 696u: goto L_088FB968;
    case 697u: goto L_088FB970;
    case 698u: goto L_088FB978;
    case 699u: goto L_088FB980;
    case 700u: goto L_088FB988;
    case 701u: goto L_088FB9B4;
    case 702u: goto L_088FB9BC;
    case 703u: goto L_088FB9C8;
    case 704u: goto L_088FB9D0;
    case 705u: goto L_088FB9D8;
    case 706u: goto L_088FB9E0;
    case 707u: goto L_088FB9E8;
    case 708u: goto L_088FB9F0;
    case 709u: goto L_088FB9F8;
    case 710u: goto L_088FBA18;
    case 711u: goto L_088FBA20;
    case 712u: goto L_088FBA2C;
    case 713u: goto L_088FBA34;
    case 714u: goto L_088FBA3C;
    case 715u: goto L_088FBA44;
    case 716u: goto L_088FBA4C;
    case 717u: goto L_088FBA54;
    case 718u: goto L_088FBA5C;
    case 719u: goto L_088FBA88;
    case 720u: goto L_088FBA90;
    case 721u: goto L_088FBA9C;
    case 722u: goto L_088FBAA4;
    case 723u: goto L_088FBAAC;
    case 724u: goto L_088FBAB4;
    case 725u: goto L_088FBACC;
    case 726u: goto L_088FBAE8;
    case 727u: goto L_088FBAF0;
    case 728u: goto L_088FBB0C;
    case 729u: goto L_088FBB14;
    case 730u: goto L_088FBB1C;
    case 731u: goto L_088FBB24;
    case 732u: goto L_088FBB38;
    case 733u: goto L_088FBB58;
    case 734u: goto L_088FBB60;
    case 735u: goto L_088FBB78;
    case 736u: goto L_088FBB84;
    case 737u: goto L_088FBB8C;
    case 738u: goto L_088FBB94;
    case 739u: goto L_088FBBAC;
    case 740u: goto L_088FBBB4;
    case 741u: goto L_088FBBBC;
    case 742u: goto L_088FBBC4;
    case 743u: goto L_088FBBCC;
    case 744u: goto L_088FBBE0;
    case 745u: goto L_088FBC00;
    case 746u: goto L_088FBC08;
    case 747u: goto L_088FBC20;
    case 748u: goto L_088FBC2C;
    case 749u: goto L_088FBC34;
    case 750u: goto L_088FBC3C;
    case 751u: goto L_088FBC54;
    case 752u: goto L_088FBC5C;
    case 753u: goto L_088FBC64;
    case 754u: goto L_088FBC6C;
    case 755u: goto L_088FBC74;
    case 756u: goto L_088FBC88;
    case 757u: goto L_088FBCA8;
    case 758u: goto L_088FBCB0;
    case 759u: goto L_088FBCC8;
    case 760u: goto L_088FBCD4;
    case 761u: goto L_088FBCDC;
    case 762u: goto L_088FBCE4;
    case 763u: goto L_088FBCFC;
    case 764u: goto L_088FBD04;
    case 765u: goto L_088FBD0C;
    case 766u: goto L_088FBD14;
    case 767u: goto L_088FBD1C;
    case 768u: goto L_088FBD30;
    case 769u: goto L_088FBD50;
    case 770u: goto L_088FBD58;
    case 771u: goto L_088FBD70;
    case 772u: goto L_088FBD7C;
    case 773u: goto L_088FBD84;
    case 774u: goto L_088FBD8C;
    case 775u: goto L_088FBDA4;
    case 776u: goto L_088FBDAC;
    case 777u: goto L_088FBDB4;
    case 778u: goto L_088FBDBC;
    case 779u: goto L_088FBDC4;
    case 780u: goto L_088FBDE4;
    case 781u: goto L_088FBE04;
    case 782u: goto L_088FBE0C;
    case 783u: goto L_088FBE24;
    case 784u: goto L_088FBE30;
    case 785u: goto L_088FBE38;
    case 786u: goto L_088FBE40;
    case 787u: goto L_088FBE58;
    case 788u: goto L_088FBE60;
    case 789u: goto L_088FBE68;
    case 790u: goto L_088FBE70;
    case 791u: goto L_088FBE78;
    case 792u: goto L_088FBE8C;
    case 793u: goto L_088FBEAC;
    case 794u: goto L_088FBEB4;
    case 795u: goto L_088FBECC;
    case 796u: goto L_088FBED8;
    case 797u: goto L_088FBEE0;
    case 798u: goto L_088FBEE8;
    case 799u: goto L_088FBF00;
    case 800u: goto L_088FBF08;
    case 801u: goto L_088FBF10;
    case 802u: goto L_088FBF18;
    case 803u: goto L_088FBF20;
    case 804u: goto L_088FBF40;
    case 805u: goto L_088FBF60;
    case 806u: goto L_088FBF68;
    case 807u: goto L_088FBF80;
    case 808u: goto L_088FBF8C;
    case 809u: goto L_088FBF94;
    case 810u: goto L_088FBF9C;
    case 811u: goto L_088FBFB4;
    case 812u: goto L_088FBFBC;
    case 813u: goto L_088FBFD4;
    case 814u: goto L_088FBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F8000:
    ctx.gpr[7] = (17082u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (17050u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F812C;
      }
      goto L_088F8048;
    }
L_088F8048:
    ctx.gpr[31] = (0x088F8050u);
    // nop
    goto L_088F919C;
L_088F8050:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F80BC;
      }
      goto L_088F8058;
    }
L_088F8058:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (17104u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (17038u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (17046u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F812C;
      }
      goto L_088F80BC;
    }
L_088F80BC:
    ctx.gpr[31] = (0x088F80C4u);
    // nop
    goto L_088F915C;
L_088F80C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F812C;
      }
      goto L_088F80CC;
    }
L_088F80CC:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (17068u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (17062u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (17064u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F812C;
L_088F812C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F813C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F8150u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088F93AC;
L_088F8150:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8168;
      }
      goto L_088F8158;
    }
L_088F8158:
    ctx.gpr[31] = (0x088F8160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 519u, 0x088EA2ECu>(ctx, &aot_mem) && ctx.pc == 0x088F8160u) goto L_088F8160;
    return;
L_088F8160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F81C0;
      }
      goto L_088F8168;
    }
L_088F8168:
    ctx.gpr[31] = (0x088F8170u);
    // nop
    goto L_088F9404;
L_088F8170:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F818C;
      }
      goto L_088F8178;
    }
L_088F8178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F8184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 521u, 0x088EA30Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8184u) goto L_088F8184;
    return;
L_088F8184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F81C0;
      }
      goto L_088F818C;
    }
L_088F818C:
    ctx.gpr[31] = (0x088F8194u);
    // nop
    goto L_088F945C;
L_088F8194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F81AC;
      }
      goto L_088F819C;
    }
L_088F819C:
    ctx.gpr[31] = (0x088F81A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 531u, 0x088EA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088F81A4u) goto L_088F81A4;
    return;
L_088F81A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F81C0;
      }
      goto L_088F81AC;
    }
L_088F81AC:
    ctx.gpr[31] = (0x088F81B4u);
    // nop
    goto L_088F949C;
L_088F81B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F81C0;
      }
      goto L_088F81BC;
    }
L_088F81BC:
    ctx.gpr[16] = (0u | 1u);
    goto L_088F81C0;
L_088F81C0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F81D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F81E8u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088F945C;
L_088F81E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F81F8;
      }
      goto L_088F81F0;
    }
L_088F81F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 146u);
      if (branch_taken) {
          goto L_088F8340;
      }
      goto L_088F81F8;
    }
L_088F81F8:
    ctx.gpr[31] = (0x088F8200u);
    // nop
    goto L_088F9284;
L_088F8200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F8260;
      }
      goto L_088F8208;
    }
L_088F8208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088F8220;
      }
      goto L_088F8218;
    }
L_088F8218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 114u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F8220;
    }
L_088F8220:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088F8230;
      }
      goto L_088F8228;
    }
L_088F8228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 116u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F8230;
    }
L_088F8230:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088F8240;
      }
      goto L_088F8238;
    }
L_088F8238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 118u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F8240;
    }
L_088F8240:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088F8250;
      }
      goto L_088F8248;
    }
L_088F8248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 120u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F8250;
    }
L_088F8250:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F8258;
    }
L_088F8258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 122u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F8260;
    }
L_088F8260:
    ctx.gpr[31] = (0x088F8268u);
    // nop
    goto L_088F919C;
L_088F8268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F82A8;
      }
      goto L_088F8270;
    }
L_088F8270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088F8288;
      }
      goto L_088F8280;
    }
L_088F8280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 124u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F8288;
    }
L_088F8288:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088F8298;
      }
      goto L_088F8290;
    }
L_088F8290:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 126u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F8298;
    }
L_088F8298:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F82A0;
    }
L_088F82A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 128u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F82A8;
    }
L_088F82A8:
    ctx.gpr[31] = (0x088F82B0u);
    // nop
    goto L_088F915C;
L_088F82B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F82B8;
    }
L_088F82B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088F82D0;
      }
      goto L_088F82C8;
    }
L_088F82C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 130u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F82D0;
    }
L_088F82D0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088F82E0;
      }
      goto L_088F82D8;
    }
L_088F82D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 134u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F82E0;
    }
L_088F82E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088F82F0;
      }
      goto L_088F82E8;
    }
L_088F82E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 132u);
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F82F0;
    }
L_088F82F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F82FC;
      }
      goto L_088F82F8;
    }
L_088F82F8:
    ctx.gpr[16] = (0u | 136u);
    goto L_088F82FC;
L_088F82FC:
    ctx.gpr[31] = (0x088F8304u);
    // nop
    goto L_088F92C4;
L_088F8304:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 138u);
        goto L_088F830C;
    }
    goto L_088F830C;
L_088F830C:
    ctx.gpr[31] = (0x088F8314u);
    // nop
    goto L_088F9304;
L_088F8314:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 140u);
        goto L_088F831C;
    }
    goto L_088F831C;
L_088F831C:
    ctx.gpr[31] = (0x088F8324u);
    // nop
    goto L_088F933C;
L_088F8324:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 142u);
        goto L_088F832C;
    }
    goto L_088F832C;
L_088F832C:
    ctx.gpr[31] = (0x088F8334u);
    // nop
    goto L_088F9374;
L_088F8334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8340;
      }
      goto L_088F833C;
    }
L_088F833C:
    ctx.gpr[16] = (0u | 144u);
    goto L_088F8340;
L_088F8340:
    ctx.gpr[31] = (0x088F8348u);
    // nop
    goto L_088F9404;
L_088F8348:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088F8364;
    }
    goto L_088F8350;
L_088F8350:
    ctx.gpr[31] = (0x088F8358u);
    // nop
    goto L_088F949C;
L_088F8358:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8364;
      }
      goto L_088F8360;
    }
L_088F8360:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088F8364;
L_088F8364:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F8378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F839Cu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 627u, 0x08833120u>(ctx, &aot_mem) && ctx.pc == 0x088F839Cu) goto L_088F839C;
    return;
L_088F839C:
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F8480;
      }
      goto L_088F83A8;
    }
L_088F83A8:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2584)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F83C0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19328));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19388));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(19448));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(19508));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F8480;
      }
      goto L_088F8414;
    }
L_088F8414:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19328));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088F8480;
      }
      goto L_088F842C;
    }
L_088F842C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19388));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088F8480;
      }
      goto L_088F8444;
    }
L_088F8444:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19448));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088F8480;
      }
      goto L_088F845C;
    }
L_088F845C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19508));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088F8480;
      }
      goto L_088F8474;
    }
L_088F8474:
    ctx.gpr[31] = (0x088F847Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 519u, 0x088EA2ECu>(ctx, &aot_mem) && ctx.pc == 0x088F847Cu) goto L_088F847C;
    return;
L_088F847C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088F8480;
L_088F8480:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F8498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F84D8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F84D8u) goto L_088F84D8;
    return;
L_088F84D8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088F84ECu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F84ECu) goto L_088F84EC;
    return;
L_088F84EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088F84FCu);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3028));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x088F84FCu) goto L_088F84FC;
    return;
L_088F84FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088F850Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088F850Cu) goto L_088F850C;
    return;
L_088F850C:
    ctx.gpr[31] = (0x088F8514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088F8514u) goto L_088F8514;
    return;
L_088F8514:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(19572));
      if (branch_taken) {
          goto L_088F8590;
      }
      goto L_088F852C;
    }
L_088F852C:
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_088F853C;
L_088F853C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
        goto L_088F8574;
    }
    goto L_088F854C;
L_088F854C:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
        goto L_088F856C;
    }
    goto L_088F8554;
L_088F8554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088F8560u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x088F8560u) goto L_088F8560;
    return;
L_088F8560:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
    goto L_088F856C;
L_088F856C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088F8578;
      }
      goto L_088F8574;
    }
L_088F8574:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088F8578;
L_088F8578:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F853C;
      }
      goto L_088F8590;
    }
L_088F8590:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088F85A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F85A0u) goto L_088F85A0;
    return;
L_088F85A0:
    ctx.gpr[31] = (0x088F85A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088F85A8u) goto L_088F85A8;
    return;
L_088F85A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F85BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F85BCu) goto L_088F85BC;
    return;
L_088F85BC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F85EC;
      }
      goto L_088F85CC;
    }
L_088F85CC:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    goto L_088F85D0;
L_088F85D0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F85D0;
      }
      goto L_088F85EC;
    }
L_088F85EC:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
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
L_088F8624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F8648u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F8648u) goto L_088F8648;
    return;
L_088F8648:
    ctx.gpr[31] = (0x088F8650u);
    // nop
    goto L_088F93AC;
L_088F8650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8668;
      }
      goto L_088F8658;
    }
L_088F8658:
    ctx.gpr[31] = (0x088F8660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8660u) goto L_088F8660;
    return;
L_088F8660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F86A4;
      }
      goto L_088F8668;
    }
L_088F8668:
    ctx.gpr[31] = (0x088F8670u);
    // nop
    goto L_088F9404;
L_088F8670:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8688;
      }
      goto L_088F8678;
    }
L_088F8678:
    ctx.gpr[31] = (0x088F8680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F8680u) goto L_088F8680;
    return;
L_088F8680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F86A4;
      }
      goto L_088F8688;
    }
L_088F8688:
    ctx.gpr[31] = (0x088F8690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 518u, 0x088EA2DCu>(ctx, &aot_mem) && ctx.pc == 0x088F8690u) goto L_088F8690;
    return;
L_088F8690:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F86A4;
      }
      goto L_088F8698;
    }
L_088F8698:
    ctx.gpr[31] = (0x088F86A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 517u, 0x088EA2CCu>(ctx, &aot_mem) && ctx.pc == 0x088F86A0u) goto L_088F86A0;
    return;
L_088F86A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088F86A4;
L_088F86A4:
    ctx.gpr[31] = (0x088F86ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 536u, 0x088EA6B4u>(ctx, &aot_mem) && ctx.pc == 0x088F86ACu) goto L_088F86AC;
    return;
L_088F86AC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F86E0;
      }
      goto L_088F86B8;
    }
L_088F86B8:
    ctx.gpr[31] = (0x088F86C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088F8890;
L_088F86C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F86E0;
      }
      goto L_088F86C8;
    }
L_088F86C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19572));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088F86D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F86D8u) goto L_088F86D8;
    return;
L_088F86D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F887C;
      }
      goto L_088F86E0;
    }
L_088F86E0:
    ctx.gpr[31] = (0x088F86E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088F86E8u) goto L_088F86E8;
    return;
L_088F86E8:
    ctx.gpr[31] = (0x088F86F0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F86F0u) goto L_088F86F0;
    return;
L_088F86F0:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F8700u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088F9284;
L_088F8700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F872C;
      }
      goto L_088F8708;
    }
L_088F8708:
    ctx.gpr[31] = (0x088F8710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088F8710u) goto L_088F8710;
    return;
L_088F8710:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F872Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    goto L_088F8498;
L_088F872C:
    ctx.gpr[31] = (0x088F8734u);
    // nop
    goto L_088F919C;
L_088F8734:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8760;
      }
      goto L_088F873C;
    }
L_088F873C:
    ctx.gpr[31] = (0x088F8744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088F8744u) goto L_088F8744;
    return;
L_088F8744:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F8760u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    goto L_088F8498;
L_088F8760:
    ctx.gpr[31] = (0x088F8768u);
    // nop
    goto L_088F915C;
L_088F8768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8794;
      }
      goto L_088F8770;
    }
L_088F8770:
    ctx.gpr[31] = (0x088F8778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088F8778u) goto L_088F8778;
    return;
L_088F8778:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F8794u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    goto L_088F8498;
L_088F8794:
    ctx.gpr[31] = (0x088F879Cu);
    // nop
    goto L_088F92C4;
L_088F879C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F87C8;
      }
      goto L_088F87A4;
    }
L_088F87A4:
    ctx.gpr[31] = (0x088F87ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088F87ACu) goto L_088F87AC;
    return;
L_088F87AC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F87C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    goto L_088F8498;
L_088F87C8:
    ctx.gpr[31] = (0x088F87D0u);
    // nop
    goto L_088F9304;
L_088F87D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8808;
      }
      goto L_088F87D8;
    }
L_088F87D8:
    ctx.gpr[31] = (0x088F87E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 587u, 0x088EA8E8u>(ctx, &aot_mem) && ctx.pc == 0x088F87E0u) goto L_088F87E0;
    return;
L_088F87E0:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F8808u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F8498;
L_088F8808:
    ctx.gpr[31] = (0x088F8810u);
    // nop
    goto L_088F933C;
L_088F8810:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F883C;
      }
      goto L_088F8818;
    }
L_088F8818:
    ctx.gpr[31] = (0x088F8820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 588u, 0x088EA8F8u>(ctx, &aot_mem) && ctx.pc == 0x088F8820u) goto L_088F8820;
    return;
L_088F8820:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F883Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    goto L_088F8498;
L_088F883C:
    ctx.gpr[31] = (0x088F8844u);
    // nop
    goto L_088F9374;
L_088F8844:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F887C;
      }
      goto L_088F884C;
    }
L_088F884C:
    ctx.gpr[31] = (0x088F8854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 589u, 0x088EA908u>(ctx, &aot_mem) && ctx.pc == 0x088F8854u) goto L_088F8854;
    return;
L_088F8854:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F887Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F8498;
L_088F887C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F8890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(956), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F88B8u);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088F88B8u) goto L_088F88B8;
    return;
L_088F88B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088F88C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088F88C8u) goto L_088F88C8;
    return;
L_088F88C8:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088F88DCu);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088F9284;
L_088F88DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088F8910;
      }
      goto L_088F88E4;
    }
L_088F88E4:
    ctx.gpr[31] = (0x088F88ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088F88ECu) goto L_088F88EC;
    return;
L_088F88EC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8A8C;
      }
      goto L_088F8910;
    }
L_088F8910:
    ctx.gpr[31] = (0x088F8918u);
    // nop
    goto L_088F919C;
L_088F8918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F894C;
      }
      goto L_088F8920;
    }
L_088F8920:
    ctx.gpr[31] = (0x088F8928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088F8928u) goto L_088F8928;
    return;
L_088F8928:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8A8C;
      }
      goto L_088F894C;
    }
L_088F894C:
    ctx.gpr[31] = (0x088F8954u);
    // nop
    goto L_088F915C;
L_088F8954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8988;
      }
      goto L_088F895C;
    }
L_088F895C:
    ctx.gpr[31] = (0x088F8964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088F8964u) goto L_088F8964;
    return;
L_088F8964:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(378)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8A8C;
      }
      goto L_088F8988;
    }
L_088F8988:
    ctx.gpr[31] = (0x088F8990u);
    // nop
    goto L_088F92C4;
L_088F8990:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F89C4;
      }
      goto L_088F8998;
    }
L_088F8998:
    ctx.gpr[31] = (0x088F89A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088F89A0u) goto L_088F89A0;
    return;
L_088F89A0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(444)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8A8C;
      }
      goto L_088F89C4;
    }
L_088F89C4:
    ctx.gpr[31] = (0x088F89CCu);
    // nop
    goto L_088F9304;
L_088F89CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8A0C;
      }
      goto L_088F89D4;
    }
L_088F89D4:
    ctx.gpr[31] = (0x088F89DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 587u, 0x088EA8E8u>(ctx, &aot_mem) && ctx.pc == 0x088F89DCu) goto L_088F89DC;
    return;
L_088F89DC:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8A8C;
      }
      goto L_088F8A0C;
    }
L_088F8A0C:
    ctx.gpr[31] = (0x088F8A14u);
    // nop
    goto L_088F933C;
L_088F8A14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8A48;
      }
      goto L_088F8A1C;
    }
L_088F8A1C:
    ctx.gpr[31] = (0x088F8A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 588u, 0x088EA8F8u>(ctx, &aot_mem) && ctx.pc == 0x088F8A24u) goto L_088F8A24;
    return;
L_088F8A24:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8A8C;
      }
      goto L_088F8A48;
    }
L_088F8A48:
    ctx.gpr[31] = (0x088F8A50u);
    // nop
    goto L_088F9374;
L_088F8A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8A8C;
      }
      goto L_088F8A58;
    }
L_088F8A58:
    ctx.gpr[31] = (0x088F8A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 589u, 0x088EA908u>(ctx, &aot_mem) && ctx.pc == 0x088F8A60u) goto L_088F8A60;
    return;
L_088F8A60:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(638)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_088F8A8C;
L_088F8A8C:
    ctx.gpr[31] = (0x088F8A94u);
    // nop
    goto L_088F93AC;
L_088F8A94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088F8AD0;
      }
      goto L_088F8A9C;
    }
L_088F8A9C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8AD4;
      }
      goto L_088F8AA8;
    }
L_088F8AA8:
    ctx.gpr[5] = (ctx.gpr[16] << (ctx.gpr[4] & 31u));
    goto L_088F8AAC;
L_088F8AAC:
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088F8AB8;
    }
    goto L_088F8AB8;
L_088F8AB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] << (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_088F8AAC;
      }
      goto L_088F8AC8;
    }
L_088F8AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8AD4;
      }
      goto L_088F8AD0;
    }
L_088F8AD0:
    ctx.gpr[19] = (0u | 0u);
    goto L_088F8AD4;
L_088F8AD4:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    ctx.gpr[19] = (0u | 0u);
        goto L_088F8ADC;
    }
    goto L_088F8ADC;
L_088F8ADC:
    if (ctx.gpr[18] == ctx.gpr[19]) {
    ctx.gpr[19] = (0u | 0u);
        goto L_088F8AE4;
    }
    goto L_088F8AE4;
L_088F8AE4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(956)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F8B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(956), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F8B34u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088F8B34u) goto L_088F8B34;
    return;
L_088F8B34:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088F8B44u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8B44u) goto L_088F8B44;
    return;
L_088F8B44:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088F8B50u);
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8B50u) goto L_088F8B50;
    return;
L_088F8B50:
    ctx.gpr[31] = (0x088F8B58u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 514u, 0x088EA29Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8B58u) goto L_088F8B58;
    return;
L_088F8B58:
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F8B70u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088F9284;
L_088F8B70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8BA4;
      }
      goto L_088F8B78;
    }
L_088F8B78:
    ctx.gpr[31] = (0x088F8B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088F8B80u) goto L_088F8B80;
    return;
L_088F8B80:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8D20;
      }
      goto L_088F8BA4;
    }
L_088F8BA4:
    ctx.gpr[31] = (0x088F8BACu);
    // nop
    goto L_088F919C;
L_088F8BAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8BE0;
      }
      goto L_088F8BB4;
    }
L_088F8BB4:
    ctx.gpr[31] = (0x088F8BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088F8BBCu) goto L_088F8BBC;
    return;
L_088F8BBC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8D20;
      }
      goto L_088F8BE0;
    }
L_088F8BE0:
    ctx.gpr[31] = (0x088F8BE8u);
    // nop
    goto L_088F915C;
L_088F8BE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8C1C;
      }
      goto L_088F8BF0;
    }
L_088F8BF0:
    ctx.gpr[31] = (0x088F8BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088F8BF8u) goto L_088F8BF8;
    return;
L_088F8BF8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(378)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8D20;
      }
      goto L_088F8C1C;
    }
L_088F8C1C:
    ctx.gpr[31] = (0x088F8C24u);
    // nop
    goto L_088F92C4;
L_088F8C24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8C58;
      }
      goto L_088F8C2C;
    }
L_088F8C2C:
    ctx.gpr[31] = (0x088F8C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088F8C34u) goto L_088F8C34;
    return;
L_088F8C34:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(444)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8D20;
      }
      goto L_088F8C58;
    }
L_088F8C58:
    ctx.gpr[31] = (0x088F8C60u);
    // nop
    goto L_088F9304;
L_088F8C60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8CA0;
      }
      goto L_088F8C68;
    }
L_088F8C68:
    ctx.gpr[31] = (0x088F8C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 587u, 0x088EA8E8u>(ctx, &aot_mem) && ctx.pc == 0x088F8C70u) goto L_088F8C70;
    return;
L_088F8C70:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8D20;
      }
      goto L_088F8CA0;
    }
L_088F8CA0:
    ctx.gpr[31] = (0x088F8CA8u);
    // nop
    goto L_088F933C;
L_088F8CA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8CDC;
      }
      goto L_088F8CB0;
    }
L_088F8CB0:
    ctx.gpr[31] = (0x088F8CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 588u, 0x088EA8F8u>(ctx, &aot_mem) && ctx.pc == 0x088F8CB8u) goto L_088F8CB8;
    return;
L_088F8CB8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F8D20;
      }
      goto L_088F8CDC;
    }
L_088F8CDC:
    ctx.gpr[31] = (0x088F8CE4u);
    // nop
    goto L_088F9374;
L_088F8CE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F8D20;
      }
      goto L_088F8CEC;
    }
L_088F8CEC:
    ctx.gpr[31] = (0x088F8CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 589u, 0x088EA908u>(ctx, &aot_mem) && ctx.pc == 0x088F8CF4u) goto L_088F8CF4;
    return;
L_088F8CF4:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(638)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_088F8D20;
L_088F8D20:
    ctx.gpr[31] = (0x088F8D28u);
    // nop
    goto L_088F93AC;
L_088F8D28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088F8D5C;
      }
      goto L_088F8D30;
    }
L_088F8D30:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088F8D5C;
      }
      goto L_088F8D3C;
    }
L_088F8D3C:
    ctx.gpr[6] = (ctx.gpr[4] << (ctx.gpr[5] & 31u));
    goto L_088F8D40;
L_088F8D40:
    ctx.gpr[6] = (ctx.gpr[16] & ctx.gpr[6]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_088F8D4C;
    }
    goto L_088F8D4C;
L_088F8D4C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] << (ctx.gpr[5] & 31u));
      if (branch_taken) {
          goto L_088F8D40;
      }
      goto L_088F8D5C;
    }
L_088F8D5C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(956)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F8D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(956), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F8DACu);
    ctx.gpr[20] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088F8DACu) goto L_088F8DAC;
    return;
L_088F8DAC:
    ctx.gpr[31] = (0x088F8DB4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8DB4u) goto L_088F8DB4;
    return;
L_088F8DB4:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088F8DC8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8DC8u) goto L_088F8DC8;
    return;
L_088F8DC8:
    ctx.gpr[31] = (0x088F8DD0u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F8DD0u) goto L_088F8DD0;
    return;
L_088F8DD0:
    ctx.gpr[31] = (0x088F8DD8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 516u, 0x088EA2BCu>(ctx, &aot_mem) && ctx.pc == 0x088F8DD8u) goto L_088F8DD8;
    return;
L_088F8DD8:
    ctx.gpr[31] = (0x088F8DE0u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[2]);
    goto L_088F9284;
L_088F8DE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F8DF4;
      }
      goto L_088F8DE8;
    }
L_088F8DE8:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088F8E9C;
      }
      goto L_088F8DF4;
    }
L_088F8DF4:
    ctx.gpr[31] = (0x088F8DFCu);
    // nop
    goto L_088F919C;
L_088F8DFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F8E10;
      }
      goto L_088F8E04;
    }
L_088F8E04:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
      if (branch_taken) {
          goto L_088F8E9C;
      }
      goto L_088F8E10;
    }
L_088F8E10:
    ctx.gpr[31] = (0x088F8E18u);
    // nop
    goto L_088F915C;
L_088F8E18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F8E2C;
      }
      goto L_088F8E20;
    }
L_088F8E20:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(378)));
      if (branch_taken) {
          goto L_088F8E9C;
      }
      goto L_088F8E2C;
    }
L_088F8E2C:
    ctx.gpr[31] = (0x088F8E34u);
    // nop
    goto L_088F92C4;
L_088F8E34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F8E48;
      }
      goto L_088F8E3C;
    }
L_088F8E3C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_088F8E9C;
      }
      goto L_088F8E48;
    }
L_088F8E48:
    ctx.gpr[31] = (0x088F8E50u);
    // nop
    goto L_088F9304;
L_088F8E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F8E64;
      }
      goto L_088F8E58;
    }
L_088F8E58:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
      if (branch_taken) {
          goto L_088F8E9C;
      }
      goto L_088F8E64;
    }
L_088F8E64:
    ctx.gpr[31] = (0x088F8E6Cu);
    // nop
    goto L_088F933C;
L_088F8E6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F8E80;
      }
      goto L_088F8E74;
    }
L_088F8E74:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
      if (branch_taken) {
          goto L_088F8E9C;
      }
      goto L_088F8E80;
    }
L_088F8E80:
    ctx.gpr[31] = (0x088F8E88u);
    // nop
    goto L_088F9374;
L_088F8E88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F8EA0;
      }
      goto L_088F8E90;
    }
L_088F8E90:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(638)));
    goto L_088F8E9C;
L_088F8E9C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_088F8EA0;
L_088F8EA0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 1u);
        goto L_088F8EB4;
    }
    goto L_088F8EB4;
L_088F8EB4:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(956)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F8ED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(29) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F8F08;
    }
L_088F8F08:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2464)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (2221u << 16u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F8F20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19688)));
    ctx.gpr[31] = (0x088F8F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F8F2Cu) goto L_088F8F2C;
    return;
L_088F8F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F8F34;
    }
L_088F8F34:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088F8F44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F8F44u) goto L_088F8F44;
    return;
L_088F8F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F8F4C;
    }
L_088F8F4C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088F8F5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F8F5Cu) goto L_088F8F5C;
    return;
L_088F8F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F8F64;
    }
L_088F8F64:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088F8F74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F8F74u) goto L_088F8F74;
    return;
L_088F8F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F8F7C;
    }
L_088F8F7C:
    ctx.gpr[31] = (0x088F8F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8F84u) goto L_088F8F84;
    return;
L_088F8F84:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088F8F9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F8F9Cu) goto L_088F8F9C;
    return;
L_088F8F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F8FA4;
    }
L_088F8FA4:
    ctx.gpr[31] = (0x088F8FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8FACu) goto L_088F8FAC;
    return;
L_088F8FAC:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088F8FC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F8FC4u) goto L_088F8FC4;
    return;
L_088F8FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F8FCC;
    }
L_088F8FCC:
    ctx.gpr[31] = (0x088F8FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F8FD4u) goto L_088F8FD4;
    return;
L_088F8FD4:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F8FECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F8FECu) goto L_088F8FEC;
    return;
L_088F8FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F8FF4;
    }
L_088F8FF4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088F9004u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F9004u) goto L_088F9004;
    return;
L_088F9004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F900C;
    }
L_088F900C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F901Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F901Cu) goto L_088F901C;
    return;
L_088F901C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F9024;
    }
L_088F9024:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F9034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F9034u) goto L_088F9034;
    return;
L_088F9034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F904C;
      }
      goto L_088F903C;
    }
L_088F903C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(19688));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088F904Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F904Cu) goto L_088F904C;
    return;
L_088F904C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9060:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9114;
      }
      goto L_088F9090;
    }
L_088F9090:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2344)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F90A8:
    ctx.gpr[31] = (0x088F90B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F90B0u) goto L_088F90B0;
    return;
L_088F90B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F9114;
      }
      goto L_088F90B8;
    }
L_088F90B8:
    ctx.gpr[31] = (0x088F90C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F90C0u) goto L_088F90C0;
    return;
L_088F90C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088F9114;
      }
      goto L_088F90C8;
    }
L_088F90C8:
    ctx.gpr[31] = (0x088F90D0u);
    ctx.gpr[17] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F90D0u) goto L_088F90D0;
    return;
L_088F90D0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F90F0;
      }
      goto L_088F90DC;
    }
L_088F90DC:
    ctx.gpr[31] = (0x088F90E4u);
    ctx.gpr[17] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F90E4u) goto L_088F90E4;
    return;
L_088F90E4:
    ctx.gpr[4] = (0u | 3u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[17] = (0u | 10u);
        goto L_088F90F0;
    }
    goto L_088F90F0;
L_088F90F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F9118;
      }
      goto L_088F90F8;
    }
L_088F90F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 11u);
      if (branch_taken) {
          goto L_088F9114;
      }
      goto L_088F9100;
    }
L_088F9100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 12u);
      if (branch_taken) {
          goto L_088F9114;
      }
      goto L_088F9108;
    }
L_088F9108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 13u);
      if (branch_taken) {
          goto L_088F9114;
      }
      goto L_088F9110;
    }
L_088F9110:
    ctx.gpr[17] = (0u | 14u);
    goto L_088F9114;
L_088F9114:
    ctx.gpr[5] = (2221u << 16u);
    goto L_088F9118;
L_088F9118:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19768));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19572));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F9148u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3024));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088F9148u) goto L_088F9148;
    return;
L_088F9148:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F915C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_088F918C;
      }
      goto L_088F9174;
    }
L_088F9174:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_088F918C;
      }
      goto L_088F917C;
    }
L_088F917C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_088F918C;
      }
      goto L_088F9184;
    }
L_088F9184:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F9194;
      }
      goto L_088F918C;
    }
L_088F918C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9194:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F919C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088F91CC;
      }
      goto L_088F91B4;
    }
L_088F91B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_088F91CC;
      }
      goto L_088F91BC;
    }
L_088F91BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088F91CC;
      }
      goto L_088F91C4;
    }
L_088F91C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F91D4;
      }
      goto L_088F91CC;
    }
L_088F91CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F91D4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F91DC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F91F4;
    }
L_088F91F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F91FC;
    }
L_088F91FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F9204;
    }
L_088F9204:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F920C;
    }
L_088F920C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F9214;
    }
L_088F9214:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F921C;
    }
L_088F921C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F9224;
    }
L_088F9224:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F922C;
    }
L_088F922C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F9234;
    }
L_088F9234:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F923C;
    }
L_088F923C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F9244;
    }
L_088F9244:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F924C;
    }
L_088F924C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F9254;
    }
L_088F9254:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F925C;
    }
L_088F925C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F9264;
    }
L_088F9264:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 29u);
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F926C;
    }
L_088F926C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F927C;
      }
      goto L_088F9274;
    }
L_088F9274:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F927C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9284:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088F92B4;
      }
      goto L_088F929C;
    }
L_088F929C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088F92B4;
      }
      goto L_088F92A4;
    }
L_088F92A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088F92B4;
      }
      goto L_088F92AC;
    }
L_088F92AC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F92BC;
      }
      goto L_088F92B4;
    }
L_088F92B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F92BC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F92C4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_088F92F4;
      }
      goto L_088F92DC;
    }
L_088F92DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_088F92F4;
      }
      goto L_088F92E4;
    }
L_088F92E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_088F92F4;
      }
      goto L_088F92EC;
    }
L_088F92EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F92FC;
      }
      goto L_088F92F4;
    }
L_088F92F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F92FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9304:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_088F932C;
      }
      goto L_088F931C;
    }
L_088F931C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_088F932C;
      }
      goto L_088F9324;
    }
L_088F9324:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F9334;
      }
      goto L_088F932C;
    }
L_088F932C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9334:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F933C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_088F9364;
      }
      goto L_088F9354;
    }
L_088F9354:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_088F9364;
      }
      goto L_088F935C;
    }
L_088F935C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F936C;
      }
      goto L_088F9364;
    }
L_088F9364:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F936C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9374:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_088F939C;
      }
      goto L_088F938C;
    }
L_088F938C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 29u);
      if (branch_taken) {
          goto L_088F939C;
      }
      goto L_088F9394;
    }
L_088F9394:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F93A4;
      }
      goto L_088F939C;
    }
L_088F939C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F93A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F93AC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_088F93F4;
      }
      goto L_088F93C4;
    }
L_088F93C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_088F93F4;
      }
      goto L_088F93CC;
    }
L_088F93CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_088F93F4;
      }
      goto L_088F93D4;
    }
L_088F93D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_088F93F4;
      }
      goto L_088F93DC;
    }
L_088F93DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_088F93F4;
      }
      goto L_088F93E4;
    }
L_088F93E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_088F93F4;
      }
      goto L_088F93EC;
    }
L_088F93EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F93FC;
      }
      goto L_088F93F4;
    }
L_088F93F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F93FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9404:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088F944C;
      }
      goto L_088F941C;
    }
L_088F941C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_088F944C;
      }
      goto L_088F9424;
    }
L_088F9424:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_088F944C;
      }
      goto L_088F942C;
    }
L_088F942C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_088F944C;
      }
      goto L_088F9434;
    }
L_088F9434:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_088F944C;
      }
      goto L_088F943C;
    }
L_088F943C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_088F944C;
      }
      goto L_088F9444;
    }
L_088F9444:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F9454;
      }
      goto L_088F944C;
    }
L_088F944C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9454:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F945C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_088F948C;
      }
      goto L_088F9474;
    }
L_088F9474:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_088F948C;
      }
      goto L_088F947C;
    }
L_088F947C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_088F948C;
      }
      goto L_088F9484;
    }
L_088F9484:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F9494;
      }
      goto L_088F948C;
    }
L_088F948C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9494:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F949C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088F94E4;
      }
      goto L_088F94B4;
    }
L_088F94B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_088F94E4;
      }
      goto L_088F94BC;
    }
L_088F94BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_088F94E4;
      }
      goto L_088F94C4;
    }
L_088F94C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_088F94E4;
      }
      goto L_088F94CC;
    }
L_088F94CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_088F94E4;
      }
      goto L_088F94D4;
    }
L_088F94D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 29u);
      if (branch_taken) {
          goto L_088F94E4;
      }
      goto L_088F94DC;
    }
L_088F94DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F94EC;
      }
      goto L_088F94E4;
    }
L_088F94E4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F94EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F94F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 376u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F952Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F952Cu) goto L_088F952C;
    return;
L_088F952C:
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (0u | 376u);
    ctx.gpr[31] = (0x088F954Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F954Cu) goto L_088F954C;
    return;
L_088F954C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F9564u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x0883A26Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9564u) goto L_088F9564;
    return;
L_088F9564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088F9584u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x0883A26Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9584u) goto L_088F9584;
    return;
L_088F9584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 204u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F9598u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9598u) goto L_088F9598;
    return;
L_088F9598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (0u | 204u);
    ctx.gpr[31] = (0x088F95B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F95B4u) goto L_088F95B4;
    return;
L_088F95B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 220u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F960Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 391u, 0x0883B184u>(ctx, &aot_mem) && ctx.pc == 0x088F960Cu) goto L_088F960C;
    return;
L_088F960C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 644u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F9620u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9620u) goto L_088F9620;
    return;
L_088F9620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (0u | 644u);
    ctx.gpr[31] = (0x088F963Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F963Cu) goto L_088F963C;
    return;
L_088F963C:
    ctx.gpr[31] = (0x088F9644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 590u, 0x088EA918u>(ctx, &aot_mem) && ctx.pc == 0x088F9644u) goto L_088F9644;
    return;
L_088F9644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F9654u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 56u, 0x088387C8u>(ctx, &aot_mem) && ctx.pc == 0x088F9654u) goto L_088F9654;
    return;
L_088F9654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17361u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16872u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F9694u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088F9694u) goto L_088F9694;
    return;
L_088F9694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17362u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F96D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088F96D4u) goto L_088F96D4;
    return;
L_088F96D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F96E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 182u, 0x08839714u>(ctx, &aot_mem) && ctx.pc == 0x088F96E4u) goto L_088F96E4;
    return;
L_088F96E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F96F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 203u, 0x08839A04u>(ctx, &aot_mem) && ctx.pc == 0x088F96F4u) goto L_088F96F4;
    return;
L_088F96F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16960u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16816u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17193u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16896u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3016));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16824u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3004));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(588), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    goto L_088F97B8;
L_088F97B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(488), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(484), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(480));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x088F9830u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088F9830u) goto L_088F9830;
    return;
L_088F9830:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088F97B8;
      }
      goto L_088F9840;
    }
L_088F9840:
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
L_088F9864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 720u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F98C0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F98C0u) goto L_088F98C0;
    return;
L_088F98C0:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088F98DCu);
    ctx.gpr[6] = (0u | 720u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F98DCu) goto L_088F98DC;
    return;
L_088F98DC:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3048));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17142u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16980u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (16984u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[30] = (ctx.gpr[7] << 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (17270u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(19572));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2988));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-2972));
    goto L_088F998C;
L_088F998C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088F99F8;
      }
      goto L_088F999C;
    }
L_088F999C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19572)));
    ctx.gpr[31] = (0x088F99A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F99A8u) goto L_088F99A8;
    return;
L_088F99A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (16972u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (16816u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088F9A64;
      }
      goto L_088F99F8;
    }
L_088F99F8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088F9A68;
      }
      goto L_088F9A00;
    }
L_088F9A00:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19688)));
    ctx.gpr[31] = (0x088F9A10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F9A10u) goto L_088F9A10;
    return;
L_088F9A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (16904u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_088F9A64;
L_088F9A64:
    ctx.gpr[5] = (0u | 2u);
    goto L_088F9A68;
L_088F9A68:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088F9AF8;
      }
      goto L_088F9A70;
    }
L_088F9A70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[31] = (0x088F9A84u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_088F8378;
L_088F9A84:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F9A90u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_088FB628;
L_088F9A90:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088F9AACu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088F9AACu) goto L_088F9AAC;
    return;
L_088F9AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_088F9B58;
      }
      goto L_088F9AF8;
    }
L_088F9AF8:
    if (ctx.gpr[18] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_088F9B5C;
    }
    goto L_088F9B00;
L_088F9B00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[31] = (0x088F9B0Cu);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 535u, 0x088EA4FCu>(ctx, &aot_mem) && ctx.pc == 0x088F9B0Cu) goto L_088F9B0C;
    return;
L_088F9B0C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088F9B18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088F8498;
L_088F9B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_088F9B58;
L_088F9B58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088F9B5C;
L_088F9B5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[31] = (0x088F9B80u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088F9B80u) goto L_088F9B80;
    return;
L_088F9B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088F9B98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F9B98u) goto L_088F9B98;
    return;
L_088F9B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F9BA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088F9BA8u) goto L_088F9BA8;
    return;
L_088F9BA8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088F998C;
      }
      goto L_088F9BB8;
    }
L_088F9BB8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
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
L_088F9C00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[30] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 204u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F9C58u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9C58u) goto L_088F9C58;
    return;
L_088F9C58:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F9C74u);
    ctx.gpr[6] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F9C74u) goto L_088F9C74;
    return;
L_088F9C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (0u | 73u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (0u | 220u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[31] = (0x088F9CB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 391u, 0x0883B184u>(ctx, &aot_mem) && ctx.pc == 0x088F9CB8u) goto L_088F9CB8;
    return;
L_088F9CB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 368u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F9CCCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9CCCu) goto L_088F9CCC;
    return;
L_088F9CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088F9CE4u);
    ctx.gpr[6] = (0u | 368u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F9CE4u) goto L_088F9CE4;
    return;
L_088F9CE4:
    ctx.gpr[23] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[22] = (ctx.gpr[4] << 24u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16900u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17100u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17244u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[5] << 24u);
    ctx.gpr[20] = (ctx.gpr[6] << 24u);
    ctx.gpr[18] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 24u));
    goto L_088F9D68;
L_088F9D68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088F9DD4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088F9DD4u) goto L_088F9DD4;
    return;
L_088F9DD4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088F9D68;
      }
      goto L_088F9DE4;
    }
L_088F9DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F9DF8u);
    ctx.gpr[4] = (0u | 900u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9DF8u) goto L_088F9DF8;
    return;
L_088F9DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088F9E10u);
    ctx.gpr[6] = (0u | 900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F9E10u) goto L_088F9E10;
    return;
L_088F9E10:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (17142u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[6] << 24u);
    ctx.gpr[22] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (17054u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2988));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2972));
    goto L_088F9E8C;
L_088F9E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088F9EA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F9EA4u) goto L_088F9EA4;
    return;
L_088F9EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x088F9F14u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088F9F14u) goto L_088F9F14;
    return;
L_088F9F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088F9F2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F9F2Cu) goto L_088F9F2C;
    return;
L_088F9F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x088F9F3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088F9F3Cu) goto L_088F9F3C;
    return;
L_088F9F3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F9E8C;
      }
      goto L_088F9F50;
    }
L_088F9F50:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_088F9F94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1104u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F9FF0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9FF0u) goto L_088F9FF0;
    return;
L_088F9FF0:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (0u | 1104u);
    ctx.gpr[31] = (0x088FA010u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088FA010u) goto L_088FA010;
    return;
L_088FA010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17213u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17246u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16960u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088FA070u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 310u, 0x0883A610u>(ctx, &aot_mem) && ctx.pc == 0x088FA070u) goto L_088FA070;
    return;
L_088FA070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16576u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 147u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[20] = (0u | 13u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088FA104u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088FA104u) goto L_088FA104;
    return;
L_088FA104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16792u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17046u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16936u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16944u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088FA168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 293u, 0x0883A464u>(ctx, &aot_mem) && ctx.pc == 0x088FA168u) goto L_088FA168;
    return;
L_088FA168:
    ctx.gpr[5] = (16784u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17040u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (0u | 0u);
    goto L_088FA19C;
L_088FA19C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(480));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x088FA238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088FA238u) goto L_088FA238;
    return;
L_088FA238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088FA19C;
      }
      goto L_088FA250;
    }
L_088FA250:
    ctx.gpr[5] = (17256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17092u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088FA2D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088FA2D4u) goto L_088FA2D4;
    return;
L_088FA2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17255u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088FA360u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088FA360u) goto L_088FA360;
    return;
L_088FA360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088FA370u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 196u, 0x08839908u>(ctx, &aot_mem) && ctx.pc == 0x088FA370u) goto L_088FA370;
    return;
L_088FA370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(828), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17243u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16904u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088FA3CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 310u, 0x0883A610u>(ctx, &aot_mem) && ctx.pc == 0x088FA3CCu) goto L_088FA3CC;
    return;
L_088FA3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(920), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(924), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(940));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088FA450u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(920));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088FA450u) goto L_088FA450;
    return;
L_088FA450:
    ctx.gpr[31] = (0x088FA458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 533u, 0x088EA4DCu>(ctx, &aot_mem) && ctx.pc == 0x088FA458u) goto L_088FA458;
    return;
L_088FA458:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17028u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17032u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (17241u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (16924u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16752u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1020), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1032));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088FA50Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088FA50Cu) goto L_088FA50C;
    return;
L_088FA50C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 2880u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088FA520u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA520u) goto L_088FA520;
    return;
L_088FA520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (0u | 2880u);
    ctx.gpr[31] = (0x088FA53Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088FA53Cu) goto L_088FA53C;
    return;
L_088FA53C:
    ctx.gpr[4] = (16932u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (17086u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088FA554;
L_088FA554:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[20] = (ctx.gpr[18] << 8u);
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[19] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088FA57C;
L_088FA57C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088FA5D4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 253u, 0x08839F70u>(ctx, &aot_mem) && ctx.pc == 0x088FA5D4u) goto L_088FA5D4;
    return;
L_088FA5D4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_088FA57C;
      }
      goto L_088FA5E4;
    }
L_088FA5E4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088FA554;
      }
      goto L_088FA5F4;
    }
L_088FA5F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
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
L_088FA63C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 900u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088FA690u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FA690u) goto L_088FA690;
    return;
L_088FA690:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FA6ACu);
    ctx.gpr[6] = (0u | 900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088FA6ACu) goto L_088FA6AC;
    return;
L_088FA6AC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2988));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2972));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[23] = (ctx.gpr[5] << 24u);
    ctx.gpr[22] = (ctx.gpr[6] << 24u);
    ctx.gpr[21] = (ctx.gpr[7] << 24u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[8] << 24u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(19572));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (16688u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17142u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[5] = (17225u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-3336));
    goto L_088FA770;
L_088FA770:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088FA780u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FA780u) goto L_088FA780;
    return;
L_088FA780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[31] = (0x088FA7F0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088FA7F0u) goto L_088FA7F0;
    return;
L_088FA7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088FA808u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FA808u) goto L_088FA808;
    return;
L_088FA808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088FA818u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088FA818u) goto L_088FA818;
    return;
L_088FA818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088FA770;
      }
      goto L_088FA830;
    }
L_088FA830:
    ctx.gpr[31] = (0x088FA838u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    goto L_088F9060;
L_088FA838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(364), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (17228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088FA8B0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088FA8B0u) goto L_088FA8B0;
    return;
L_088FA8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088FA8C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FA8C8u) goto L_088FA8C8;
    return;
L_088FA8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088FA8D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088FA8D8u) goto L_088FA8D8;
    return;
L_088FA8D8:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (17028u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (17070u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (17243u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088FA910;
L_088FA910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088FA928u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FA928u) goto L_088FA928;
    return;
L_088FA928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(544), ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088FA974u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 533u, 0x088EA4DCu>(ctx, &aot_mem) && ctx.pc == 0x088FA974u) goto L_088FA974;
    return;
L_088FA974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(708));
      if (branch_taken) {
          goto L_088FA9B4;
      }
      goto L_088FA990;
    }
L_088FA990:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_088FA9D4;
      }
      goto L_088FA9B4;
    }
L_088FA9B4:
    ctx.gpr[23] = (0u & 255u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088FA9D4;
L_088FA9D4:
    ctx.gpr[31] = (0x088FA9DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088FA9DCu) goto L_088FA9DC;
    return;
L_088FA9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088FA9F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(700));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FA9F4u) goto L_088FA9F4;
    return;
L_088FA9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088FAA08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088FAA08u) goto L_088FAA08;
    return;
L_088FAA08:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FA910;
      }
      goto L_088FAA1C;
    }
L_088FAA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FAA8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FAAACu);
    ctx.gpr[18] = (0u | 0u);
    goto L_088F93AC;
L_088FAAAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088FAACC;
      }
      goto L_088FAAB4;
    }
L_088FAAB4:
    ctx.gpr[31] = (0x088FAABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 514u, 0x088EA29Cu>(ctx, &aot_mem) && ctx.pc == 0x088FAABCu) goto L_088FAABC;
    return;
L_088FAABC:
    ctx.gpr[31] = (0x088FAAC4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 519u, 0x088EA2ECu>(ctx, &aot_mem) && ctx.pc == 0x088FAAC4u) goto L_088FAAC4;
    return;
L_088FAAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FAB20;
      }
      goto L_088FAACC;
    }
L_088FAACC:
    ctx.gpr[31] = (0x088FAAD4u);
    // nop
    goto L_088F9404;
L_088FAAD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FAAFC;
      }
      goto L_088FAADC;
    }
L_088FAADC:
    ctx.gpr[31] = (0x088FAAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 516u, 0x088EA2BCu>(ctx, &aot_mem) && ctx.pc == 0x088FAAE4u) goto L_088FAAE4;
    return;
L_088FAAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088FAAF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 521u, 0x088EA30Cu>(ctx, &aot_mem) && ctx.pc == 0x088FAAF4u) goto L_088FAAF4;
    return;
L_088FAAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FAB20;
      }
      goto L_088FAAFC;
    }
L_088FAAFC:
    ctx.gpr[31] = (0x088FAB04u);
    // nop
    goto L_088F945C;
L_088FAB04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FAB20;
      }
      goto L_088FAB0C;
    }
L_088FAB0C:
    ctx.gpr[31] = (0x088FAB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 518u, 0x088EA2DCu>(ctx, &aot_mem) && ctx.pc == 0x088FAB14u) goto L_088FAB14;
    return;
L_088FAB14:
    ctx.gpr[31] = (0x088FAB1Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 531u, 0x088EA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088FAB1Cu) goto L_088FAB1C;
    return;
L_088FAB1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088FAB20;
L_088FAB20:
    ctx.gpr[31] = (0x088FAB28u);
    // nop
    goto L_088F91DC;
L_088FAB28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FAC50;
      }
      goto L_088FAB30;
    }
L_088FAB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088FABA4;
      }
      goto L_088FAB40;
    }
L_088FAB40:
    ctx.gpr[5] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (16932u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16792u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16960u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17046u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088FAC2C;
      }
      goto L_088FABA4;
    }
L_088FABA4:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FABEC;
      }
      goto L_088FABB0;
    }
L_088FABB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (16984u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17094u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088FAC2C;
      }
      goto L_088FABEC;
    }
L_088FABEC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16936u << 16u);
      if (branch_taken) {
          goto L_088FAC30;
      }
      goto L_088FABF4;
    }
L_088FABF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (16976u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17094u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    goto L_088FAC2C;
L_088FAC2C:
    ctx.gpr[5] = (16936u << 16u);
    goto L_088FAC30;
L_088FAC30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16944u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088FADBC;
      }
      goto L_088FAC50;
    }
L_088FAC50:
    ctx.gpr[31] = (0x088FAC58u);
    // nop
    goto L_088F919C;
L_088FAC58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FACC4;
      }
      goto L_088FAC60;
    }
L_088FAC60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17058u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16964u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17054u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088FADBC;
      }
      goto L_088FACC4;
    }
L_088FACC4:
    ctx.gpr[31] = (0x088FACCCu);
    // nop
    goto L_088F915C;
L_088FACCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088FADBC;
      }
      goto L_088FACD8;
    }
L_088FACD8:
    ctx.gpr[6] = (16960u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    ctx.gpr[6] = (17046u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16944u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_088FAD4C;
      }
      goto L_088FACF8;
    }
L_088FACF8:
    ctx.gpr[5] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (17034u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16792u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088FADA4;
      }
      goto L_088FAD4C;
    }
L_088FAD4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_088FAD5C;
      }
      goto L_088FAD54;
    }
L_088FAD54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088FAD5C;
      }
      goto L_088FAD5C;
    }
L_088FAD5C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] >> 31u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (17072u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    goto L_088FADA4;
L_088FADA4:
    ctx.gpr[5] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    goto L_088FADBC;
L_088FADBC:
    ctx.gpr[31] = (0x088FADC4u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 306u, 0x0883A5D8u>(ctx, &aot_mem) && ctx.pc == 0x088FADC4u) goto L_088FADC4;
    return;
L_088FADC4:
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
L_088FADDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088FAE34u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FAE34u) goto L_088FAE34;
    return;
L_088FAE34:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088FAE50u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088FAE50u) goto L_088FAE50;
    return;
L_088FAE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088FAE5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 189u, 0x0883980Cu>(ctx, &aot_mem) && ctx.pc == 0x088FAE5Cu) goto L_088FAE5C;
    return;
L_088FAE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16992u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17190u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17231u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088FAEACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 29u, 0x088384B4u>(ctx, &aot_mem) && ctx.pc == 0x088FAEACu) goto L_088FAEAC;
    return;
L_088FAEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088FAEBCu);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 533u, 0x088EA4DCu>(ctx, &aot_mem) && ctx.pc == 0x088FAEBCu) goto L_088FAEBC;
    return;
L_088FAEBC:
    ctx.gpr[5] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FAED0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 210u, 0x08839B00u>(ctx, &aot_mem) && ctx.pc == 0x088FAED0u) goto L_088FAED0;
    return;
L_088FAED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1980u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088FAEE4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FAEE4u) goto L_088FAEE4;
    return;
L_088FAEE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FAEFCu);
    ctx.gpr[6] = (0u | 1980u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088FAEFCu) goto L_088FAEFC;
    return;
L_088FAEFC:
    ctx.gpr[4] = (0u | 147u);
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 13u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74)));
    ctx.gpr[23] = (ctx.gpr[6] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(75)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2972));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[6] = (16688u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17142u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16720u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[7] << 24u);
    ctx.gpr[21] = (ctx.gpr[8] << 24u);
    ctx.gpr[20] = (ctx.gpr[9] << 24u);
    ctx.gpr[6] = (17226u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2964));
    goto L_088FAF94;
L_088FAF94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088FAFDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FAFDCu) goto L_088FAFDC;
    return;
L_088FAFDC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088FAF94;
      }
      goto L_088FB008;
    }
L_088FB008:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (17062u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FB038u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FB038u) goto L_088FB038;
    return;
L_088FB038:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (17181u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088FB090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(700));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FB090u) goto L_088FB090;
    return;
L_088FB090:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(77)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (ctx.gpr[6] << 24u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(79)));
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[7] << 24u);
    ctx.gpr[21] = (ctx.gpr[8] << 24u);
    ctx.gpr[20] = (ctx.gpr[9] << 24u);
    ctx.gpr[6] = (17048u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    goto L_088FB114;
L_088FB114:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(732), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088FB15Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FB15Cu) goto L_088FB15C;
    return;
L_088FB15C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088FB114;
      }
      goto L_088FB188;
    }
L_088FB188:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1816), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1808), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1812), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088FB1B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1960));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FB1B8u) goto L_088FB1B8;
    return;
L_088FB1B8:
    ctx.gpr[4] = (0u | 147u);
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-3336));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2988));
    goto L_088FB208;
L_088FB208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088FB220u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088FB220u) goto L_088FB220;
    return;
L_088FB220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088FB264u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088FB264u) goto L_088FB264;
    return;
L_088FB264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088FB274u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088FB274u) goto L_088FB274;
    return;
L_088FB274:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FB208;
      }
      goto L_088FB288;
    }
L_088FB288:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FB2CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FB314u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088F93AC;
L_088FB314:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FB33C;
      }
      goto L_088FB31C;
    }
L_088FB31C:
    ctx.gpr[31] = (0x088FB324u);
    // nop
    goto L_088F9404;
L_088FB324:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FB33C;
      }
      goto L_088FB32C;
    }
L_088FB32C:
    ctx.gpr[31] = (0x088FB334u);
    // nop
    goto L_088F945C;
L_088FB334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB5D8;
      }
      goto L_088FB33C;
    }
L_088FB33C:
    ctx.gpr[31] = (0x088FB344u);
    // nop
    goto L_088F93AC;
L_088FB344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088FB364;
      }
      goto L_088FB34C;
    }
L_088FB34C:
    ctx.gpr[31] = (0x088FB354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088FB354u) goto L_088FB354;
    return;
L_088FB354:
    ctx.gpr[31] = (0x088FB35Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 514u, 0x088EA29Cu>(ctx, &aot_mem) && ctx.pc == 0x088FB35Cu) goto L_088FB35C;
    return;
L_088FB35C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088FB3B0;
      }
      goto L_088FB364;
    }
L_088FB364:
    ctx.gpr[31] = (0x088FB36Cu);
    // nop
    goto L_088F9404;
L_088FB36C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB38C;
      }
      goto L_088FB374;
    }
L_088FB374:
    ctx.gpr[31] = (0x088FB37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FB37Cu) goto L_088FB37C;
    return;
L_088FB37C:
    ctx.gpr[31] = (0x088FB384u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 516u, 0x088EA2BCu>(ctx, &aot_mem) && ctx.pc == 0x088FB384u) goto L_088FB384;
    return;
L_088FB384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088FB3B0;
      }
      goto L_088FB38C;
    }
L_088FB38C:
    ctx.gpr[31] = (0x088FB394u);
    // nop
    goto L_088F945C;
L_088FB394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB3B0;
      }
      goto L_088FB39C;
    }
L_088FB39C:
    ctx.gpr[31] = (0x088FB3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 517u, 0x088EA2CCu>(ctx, &aot_mem) && ctx.pc == 0x088FB3A4u) goto L_088FB3A4;
    return;
L_088FB3A4:
    ctx.gpr[31] = (0x088FB3ACu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 518u, 0x088EA2DCu>(ctx, &aot_mem) && ctx.pc == 0x088FB3ACu) goto L_088FB3AC;
    return;
L_088FB3AC:
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[2]);
    goto L_088FB3B0;
L_088FB3B0:
    ctx.gpr[31] = (0x088FB3B8u);
    // nop
    goto L_088F91DC;
L_088FB3B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB454;
      }
      goto L_088FB3C0;
    }
L_088FB3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088FB400;
      }
      goto L_088FB3D4;
    }
L_088FB3D4:
    ctx.gpr[7] = (16808u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (17050u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[7] = (16932u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_088FB508;
      }
      goto L_088FB400;
    }
L_088FB400:
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB430;
      }
      goto L_088FB40C;
    }
L_088FB40C:
    ctx.gpr[7] = (16816u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (17098u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[7] = (16984u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_088FB508;
      }
      goto L_088FB430;
    }
L_088FB430:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (16976u << 16u);
      if (branch_taken) {
          goto L_088FB508;
      }
      goto L_088FB438;
    }
L_088FB438:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.gpr[7] = (17098u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_088FB508;
      }
      goto L_088FB454;
    }
L_088FB454:
    ctx.gpr[31] = (0x088FB45Cu);
    // nop
    goto L_088F919C;
L_088FB45C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB494;
      }
      goto L_088FB464;
    }
L_088FB464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (17062u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (16960u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088FB508;
      }
      goto L_088FB494;
    }
L_088FB494:
    ctx.gpr[31] = (0x088FB49Cu);
    // nop
    goto L_088F915C;
L_088FB49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088FB508;
      }
      goto L_088FB4AC;
    }
L_088FB4AC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (16952u << 16u);
      if (branch_taken) {
          goto L_088FB4E4;
      }
      goto L_088FB4B8;
    }
L_088FB4B8:
    ctx.gpr[7] = (16808u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.gpr[7] = (17050u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[7] = (17034u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_088FB508;
      }
      goto L_088FB4E4;
    }
L_088FB4E4:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (17050u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[7] = (17072u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16960u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_088FB508;
L_088FB508:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_088FB514;
    }
    goto L_088FB514;
L_088FB514:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088FB59C;
    }
    goto L_088FB524;
L_088FB524:
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    goto L_088FB530;
L_088FB530:
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088FB530;
      }
      goto L_088FB594;
    }
L_088FB594:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088FB59C;
L_088FB59C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088FB5FC;
      }
      goto L_088FB5A8;
    }
L_088FB5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088FB5B4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08906EA8u>(ctx, &aot_mem) && ctx.pc == 0x088FB5B4u) goto L_088FB5B4;
    return;
L_088FB5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088FB5A8;
      }
      goto L_088FB5D0;
    }
L_088FB5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB5FC;
      }
      goto L_088FB5D8;
    }
L_088FB5D8:
    ctx.gpr[31] = (0x088FB5E0u);
    // nop
    goto L_088F949C;
L_088FB5E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088FB5FC;
      }
      goto L_088FB5E8;
    }
L_088FB5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088FB5F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08906EA8u>(ctx, &aot_mem) && ctx.pc == 0x088FB5F4u) goto L_088FB5F4;
    return;
L_088FB5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    goto L_088FB5FC;
L_088FB5FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088FB628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FB63Cu);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088FB63Cu) goto L_088FB63C;
    return;
L_088FB63C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB654;
    }
L_088FB654:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FB66C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 335u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB674;
    }
L_088FB674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 125u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB67C;
    }
L_088FB67C:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB688;
    }
L_088FB688:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088FB6B4;
      }
      goto L_088FB694;
    }
L_088FB694:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088FB6BC;
      }
      goto L_088FB69C;
    }
L_088FB69C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FB6C4;
      }
      goto L_088FB6A4;
    }
L_088FB6A4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088FB6CC;
      }
      goto L_088FB6AC;
    }
L_088FB6AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 41u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB6B4;
    }
L_088FB6B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 16u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB6BC;
    }
L_088FB6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 21u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB6C4;
    }
L_088FB6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB6CC;
    }
L_088FB6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 36u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB6D4;
    }
L_088FB6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 56u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB6DC;
    }
L_088FB6DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB6F4;
      }
      goto L_088FB6E4;
    }
L_088FB6E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB6EC;
    }
L_088FB6EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 23u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB6F4;
    }
L_088FB6F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB70C;
      }
      goto L_088FB6FC;
    }
L_088FB6FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB704;
    }
L_088FB704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 19u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB70C;
    }
L_088FB70C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB714;
    }
L_088FB714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 33u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB71C;
    }
L_088FB71C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB740;
      }
      goto L_088FB728;
    }
L_088FB728:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB730;
    }
L_088FB730:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_088FB758;
      }
      goto L_088FB738;
    }
L_088FB738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 18u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB740;
    }
L_088FB740:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FB760;
      }
      goto L_088FB748;
    }
L_088FB748:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB750;
    }
L_088FB750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB758;
    }
L_088FB758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 7u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB760;
    }
L_088FB760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB768;
    }
L_088FB768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 121u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB770;
    }
L_088FB770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 73u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB778;
    }
L_088FB778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 18u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB780;
    }
L_088FB780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 7u);
      if (branch_taken) {
          goto L_088FB78C;
      }
      goto L_088FB788;
    }
L_088FB788:
    ctx.gpr[16] = (0u | 23u);
    goto L_088FB78C;
L_088FB78C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FB7A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FB7BCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088FB7BCu) goto L_088FB7BC;
    return;
L_088FB7BC:
    ctx.gpr[31] = (0x088FB7C4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088FB7C4u) goto L_088FB7C4;
    return;
L_088FB7C4:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FB7E0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088FB7E0u) goto L_088FB7E0;
    return;
L_088FB7E0:
    ctx.gpr[31] = (0x088FB7E8u);
    // nop
    goto L_088F9284;
L_088FB7E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB844;
      }
      goto L_088FB7F0;
    }
L_088FB7F0:
    ctx.gpr[31] = (0x088FB7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088FB7F8u) goto L_088FB7F8;
    return;
L_088FB7F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 44u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088FB818u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FB818u) goto L_088FB818;
    return;
L_088FB818:
    ctx.gpr[31] = (0x088FB820u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB820u) goto L_088FB820;
    return;
L_088FB820:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088FB834;
      }
      goto L_088FB82C;
    }
L_088FB82C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FB844;
      }
      goto L_088FB834;
    }
L_088FB834:
    ctx.gpr[31] = (0x088FB83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB83Cu) goto L_088FB83C;
    return;
L_088FB83C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FB844;
L_088FB844:
    ctx.gpr[31] = (0x088FB84Cu);
    // nop
    goto L_088F919C;
L_088FB84C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB8A8;
      }
      goto L_088FB854;
    }
L_088FB854:
    ctx.gpr[31] = (0x088FB85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088FB85Cu) goto L_088FB85C;
    return;
L_088FB85C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 44u);
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088FB87Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FB87Cu) goto L_088FB87C;
    return;
L_088FB87C:
    ctx.gpr[31] = (0x088FB884u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB884u) goto L_088FB884;
    return;
L_088FB884:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FB898;
      }
      goto L_088FB890;
    }
L_088FB890:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FB8A8;
      }
      goto L_088FB898;
    }
L_088FB898:
    ctx.gpr[31] = (0x088FB8A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB8A0u) goto L_088FB8A0;
    return;
L_088FB8A0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FB8A8;
L_088FB8A8:
    ctx.gpr[31] = (0x088FB8B0u);
    // nop
    goto L_088F915C;
L_088FB8B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB90C;
      }
      goto L_088FB8B8;
    }
L_088FB8B8:
    ctx.gpr[31] = (0x088FB8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088FB8C0u) goto L_088FB8C0;
    return;
L_088FB8C0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 44u);
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088FB8E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FB8E0u) goto L_088FB8E0;
    return;
L_088FB8E0:
    ctx.gpr[31] = (0x088FB8E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB8E8u) goto L_088FB8E8;
    return;
L_088FB8E8:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FB8FC;
      }
      goto L_088FB8F4;
    }
L_088FB8F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FB90C;
      }
      goto L_088FB8FC;
    }
L_088FB8FC:
    ctx.gpr[31] = (0x088FB904u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB904u) goto L_088FB904;
    return;
L_088FB904:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FB90C;
L_088FB90C:
    ctx.gpr[31] = (0x088FB914u);
    // nop
    goto L_088F92C4;
L_088FB914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB970;
      }
      goto L_088FB91C;
    }
L_088FB91C:
    ctx.gpr[31] = (0x088FB924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088FB924u) goto L_088FB924;
    return;
L_088FB924:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 44u);
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088FB944u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FB944u) goto L_088FB944;
    return;
L_088FB944:
    ctx.gpr[31] = (0x088FB94Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB94Cu) goto L_088FB94C;
    return;
L_088FB94C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FB960;
      }
      goto L_088FB958;
    }
L_088FB958:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FB970;
      }
      goto L_088FB960;
    }
L_088FB960:
    ctx.gpr[31] = (0x088FB968u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB968u) goto L_088FB968;
    return;
L_088FB968:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FB970;
L_088FB970:
    ctx.gpr[31] = (0x088FB978u);
    // nop
    goto L_088F9304;
L_088FB978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FB9E0;
      }
      goto L_088FB980;
    }
L_088FB980:
    ctx.gpr[31] = (0x088FB988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 587u, 0x088EA8E8u>(ctx, &aot_mem) && ctx.pc == 0x088FB988u) goto L_088FB988;
    return;
L_088FB988:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FB9B4u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FB9B4u) goto L_088FB9B4;
    return;
L_088FB9B4:
    ctx.gpr[31] = (0x088FB9BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB9BCu) goto L_088FB9BC;
    return;
L_088FB9BC:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FB9D0;
      }
      goto L_088FB9C8;
    }
L_088FB9C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FB9E0;
      }
      goto L_088FB9D0;
    }
L_088FB9D0:
    ctx.gpr[31] = (0x088FB9D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FB9D8u) goto L_088FB9D8;
    return;
L_088FB9D8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FB9E0;
L_088FB9E0:
    ctx.gpr[31] = (0x088FB9E8u);
    // nop
    goto L_088F933C;
L_088FB9E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBA44;
      }
      goto L_088FB9F0;
    }
L_088FB9F0:
    ctx.gpr[31] = (0x088FB9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 588u, 0x088EA8F8u>(ctx, &aot_mem) && ctx.pc == 0x088FB9F8u) goto L_088FB9F8;
    return;
L_088FB9F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 44u);
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088FBA18u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBA18u) goto L_088FBA18;
    return;
L_088FBA18:
    ctx.gpr[31] = (0x088FBA20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBA20u) goto L_088FBA20;
    return;
L_088FBA20:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBA34;
      }
      goto L_088FBA2C;
    }
L_088FBA2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBA44;
      }
      goto L_088FBA34;
    }
L_088FBA34:
    ctx.gpr[31] = (0x088FBA3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBA3Cu) goto L_088FBA3C;
    return;
L_088FBA3C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBA44;
L_088FBA44:
    ctx.gpr[31] = (0x088FBA4Cu);
    // nop
    goto L_088F9374;
L_088FBA4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBAB4;
      }
      goto L_088FBA54;
    }
L_088FBA54:
    ctx.gpr[31] = (0x088FBA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 589u, 0x088EA908u>(ctx, &aot_mem) && ctx.pc == 0x088FBA5Cu) goto L_088FBA5C;
    return;
L_088FBA5C:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FBA88u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBA88u) goto L_088FBA88;
    return;
L_088FBA88:
    ctx.gpr[31] = (0x088FBA90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBA90u) goto L_088FBA90;
    return;
L_088FBA90:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBAA4;
      }
      goto L_088FBA9C;
    }
L_088FBA9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBAB4;
      }
      goto L_088FBAA4;
    }
L_088FBAA4:
    ctx.gpr[31] = (0x088FBAACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBAACu) goto L_088FBAAC;
    return;
L_088FBAAC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBAB4;
L_088FBAB4:
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
L_088FBACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FBAE8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088FBAE8u) goto L_088FBAE8;
    return;
L_088FBAE8:
    ctx.gpr[31] = (0x088FBAF0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088FBAF0u) goto L_088FBAF0;
    return;
L_088FBAF0:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FBB0Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088FBB0Cu) goto L_088FBB0C;
    return;
L_088FBB0C:
    ctx.gpr[31] = (0x088FBB14u);
    // nop
    goto L_088F9284;
L_088FBB14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBBB4;
      }
      goto L_088FBB1C;
    }
L_088FBB1C:
    ctx.gpr[31] = (0x088FBB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088FBB24u) goto L_088FBB24;
    return;
L_088FBB24:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[31] = (0x088FBB38u);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBB38u) goto L_088FBB38;
    return;
L_088FBB38:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FBB58u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBB58u) goto L_088FBB58;
    return;
L_088FBB58:
    ctx.gpr[31] = (0x088FBB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBB60u) goto L_088FBB60;
    return;
L_088FBB60:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBB78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBB78u) goto L_088FBB78;
    return;
L_088FBB78:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBB8C;
      }
      goto L_088FBB84;
    }
L_088FBB84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBBB4;
      }
      goto L_088FBB8C;
    }
L_088FBB8C:
    ctx.gpr[31] = (0x088FBB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBB94u) goto L_088FBB94;
    return;
L_088FBB94:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBBACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBBACu) goto L_088FBBAC;
    return;
L_088FBBAC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBBB4;
L_088FBBB4:
    ctx.gpr[31] = (0x088FBBBCu);
    // nop
    goto L_088F919C;
L_088FBBBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC5C;
      }
      goto L_088FBBC4;
    }
L_088FBBC4:
    ctx.gpr[31] = (0x088FBBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088FBBCCu) goto L_088FBBCC;
    return;
L_088FBBCC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[31] = (0x088FBBE0u);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBBE0u) goto L_088FBBE0;
    return;
L_088FBBE0:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FBC00u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBC00u) goto L_088FBC00;
    return;
L_088FBC00:
    ctx.gpr[31] = (0x088FBC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBC08u) goto L_088FBC08;
    return;
L_088FBC08:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBC20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBC20u) goto L_088FBC20;
    return;
L_088FBC20:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBC34;
      }
      goto L_088FBC2C;
    }
L_088FBC2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBC5C;
      }
      goto L_088FBC34;
    }
L_088FBC34:
    ctx.gpr[31] = (0x088FBC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBC3Cu) goto L_088FBC3C;
    return;
L_088FBC3C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBC54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBC54u) goto L_088FBC54;
    return;
L_088FBC54:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBC5C;
L_088FBC5C:
    ctx.gpr[31] = (0x088FBC64u);
    // nop
    goto L_088F915C;
L_088FBC64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBD04;
      }
      goto L_088FBC6C;
    }
L_088FBC6C:
    ctx.gpr[31] = (0x088FBC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088FBC74u) goto L_088FBC74;
    return;
L_088FBC74:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[31] = (0x088FBC88u);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBC88u) goto L_088FBC88;
    return;
L_088FBC88:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FBCA8u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBCA8u) goto L_088FBCA8;
    return;
L_088FBCA8:
    ctx.gpr[31] = (0x088FBCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBCB0u) goto L_088FBCB0;
    return;
L_088FBCB0:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBCC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBCC8u) goto L_088FBCC8;
    return;
L_088FBCC8:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBCDC;
      }
      goto L_088FBCD4;
    }
L_088FBCD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBD04;
      }
      goto L_088FBCDC;
    }
L_088FBCDC:
    ctx.gpr[31] = (0x088FBCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBCE4u) goto L_088FBCE4;
    return;
L_088FBCE4:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBCFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBCFCu) goto L_088FBCFC;
    return;
L_088FBCFC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBD04;
L_088FBD04:
    ctx.gpr[31] = (0x088FBD0Cu);
    // nop
    goto L_088F92C4;
L_088FBD0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBDAC;
      }
      goto L_088FBD14;
    }
L_088FBD14:
    ctx.gpr[31] = (0x088FBD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088FBD1Cu) goto L_088FBD1C;
    return;
L_088FBD1C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[31] = (0x088FBD30u);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBD30u) goto L_088FBD30;
    return;
L_088FBD30:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FBD50u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBD50u) goto L_088FBD50;
    return;
L_088FBD50:
    ctx.gpr[31] = (0x088FBD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBD58u) goto L_088FBD58;
    return;
L_088FBD58:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBD70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBD70u) goto L_088FBD70;
    return;
L_088FBD70:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBD84;
      }
      goto L_088FBD7C;
    }
L_088FBD7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBDAC;
      }
      goto L_088FBD84;
    }
L_088FBD84:
    ctx.gpr[31] = (0x088FBD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBD8Cu) goto L_088FBD8C;
    return;
L_088FBD8C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBDA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBDA4u) goto L_088FBDA4;
    return;
L_088FBDA4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBDAC;
L_088FBDAC:
    ctx.gpr[31] = (0x088FBDB4u);
    // nop
    goto L_088F9304;
L_088FBDB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBE60;
      }
      goto L_088FBDBC;
    }
L_088FBDBC:
    ctx.gpr[31] = (0x088FBDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 587u, 0x088EA8E8u>(ctx, &aot_mem) && ctx.pc == 0x088FBDC4u) goto L_088FBDC4;
    return;
L_088FBDC4:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBDE4u);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBDE4u) goto L_088FBDE4;
    return;
L_088FBDE4:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FBE04u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBE04u) goto L_088FBE04;
    return;
L_088FBE04:
    ctx.gpr[31] = (0x088FBE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBE0Cu) goto L_088FBE0C;
    return;
L_088FBE0C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBE24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBE24u) goto L_088FBE24;
    return;
L_088FBE24:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBE38;
      }
      goto L_088FBE30;
    }
L_088FBE30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBE60;
      }
      goto L_088FBE38;
    }
L_088FBE38:
    ctx.gpr[31] = (0x088FBE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBE40u) goto L_088FBE40;
    return;
L_088FBE40:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBE58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBE58u) goto L_088FBE58;
    return;
L_088FBE58:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBE60;
L_088FBE60:
    ctx.gpr[31] = (0x088FBE68u);
    // nop
    goto L_088F933C;
L_088FBE68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBF08;
      }
      goto L_088FBE70;
    }
L_088FBE70:
    ctx.gpr[31] = (0x088FBE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 588u, 0x088EA8F8u>(ctx, &aot_mem) && ctx.pc == 0x088FBE78u) goto L_088FBE78;
    return;
L_088FBE78:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[31] = (0x088FBE8Cu);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBE8Cu) goto L_088FBE8C;
    return;
L_088FBE8C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FBEACu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBEACu) goto L_088FBEAC;
    return;
L_088FBEAC:
    ctx.gpr[31] = (0x088FBEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBEB4u) goto L_088FBEB4;
    return;
L_088FBEB4:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBECCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBECCu) goto L_088FBECC;
    return;
L_088FBECC:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBEE0;
      }
      goto L_088FBED8;
    }
L_088FBED8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBF08;
      }
      goto L_088FBEE0;
    }
L_088FBEE0:
    ctx.gpr[31] = (0x088FBEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBEE8u) goto L_088FBEE8;
    return;
L_088FBEE8:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBF00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBF00u) goto L_088FBF00;
    return;
L_088FBF00:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBF08;
L_088FBF08:
    ctx.gpr[31] = (0x088FBF10u);
    // nop
    goto L_088F9374;
L_088FBF10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FBFBC;
      }
      goto L_088FBF18;
    }
L_088FBF18:
    ctx.gpr[31] = (0x088FBF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 589u, 0x088EA908u>(ctx, &aot_mem) && ctx.pc == 0x088FBF20u) goto L_088FBF20;
    return;
L_088FBF20:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBF40u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBF40u) goto L_088FBF40;
    return;
L_088FBF40:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FBF60u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088FBF60u) goto L_088FBF60;
    return;
L_088FBF60:
    ctx.gpr[31] = (0x088FBF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBF68u) goto L_088FBF68;
    return;
L_088FBF68:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBF80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBF80u) goto L_088FBF80;
    return;
L_088FBF80:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FBF94;
      }
      goto L_088FBF8C;
    }
L_088FBF8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FBFBC;
      }
      goto L_088FBF94;
    }
L_088FBF94:
    ctx.gpr[31] = (0x088FBF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088FBF9Cu) goto L_088FBF9C;
    return;
L_088FBF9C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088FBFB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088FBFB4u) goto L_088FBFB4;
    return;
L_088FBFB4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088FBFBC;
L_088FBFBC:
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
L_088FBFD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FBFF8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088FBFF8u) goto L_088FBFF8;
    return;
L_088FBFF8:
    ctx.gpr[31] = (0x088FC000u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0061(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0061_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_61(Runtime &runtime) {
    runtime.register_generated_unit(61u, 0x088F8000u, 16384u, &recomp_unit_0061, &recomp_unit_0061_entry);
    runtime.register_function(0x088F8000u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8048u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8050u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8058u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F80BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F80C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F80CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F812Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F813Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8150u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8158u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8160u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8168u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8170u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8178u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8184u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F818Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8194u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F819Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F81F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8200u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8208u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8218u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8220u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8228u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8230u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8238u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8240u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8248u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8250u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8258u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8260u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8268u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8270u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8280u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8288u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8290u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8298u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F82FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8304u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F830Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8314u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F831Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8324u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F832Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8334u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F833Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8340u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8348u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8350u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8358u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8360u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8364u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8378u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F839Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F83A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F83C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8414u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F842Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8444u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F845Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8474u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F847Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8480u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8498u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F84D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F84ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F84FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F850Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8514u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F852Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F853Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F854Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8554u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8560u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F856Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8574u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8578u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8590u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F85ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8624u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8648u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8650u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8658u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8660u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8668u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8670u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8678u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8680u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8688u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8690u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8698u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F86F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8700u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8708u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8710u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F872Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8734u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F873Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8744u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8760u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8768u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8770u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8778u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8794u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F879Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F87E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8808u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8810u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8818u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8820u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F883Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8844u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F884Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8854u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F887Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8890u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F88ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8910u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8918u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8920u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8928u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F894Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8954u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F895Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8964u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8988u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8990u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8998u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F89A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F89C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F89CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F89D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F89DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8A9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AC8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AD0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8ADCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8AE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8B80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8BF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8C70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CA0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8CF4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D28u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8D84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DC8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DD0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DD8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DF4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8DFCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E18u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E64u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E88u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8E9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8EA0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8EB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8ED8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F64u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F7Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8F9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F8FF4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9004u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F900Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F901Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9024u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9034u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F903Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F904Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9060u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9090u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F90F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9100u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9108u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9110u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9114u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9118u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9148u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F915Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9174u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F917Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9184u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F918Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9194u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F919Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F91FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9204u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F920Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9214u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F921Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9224u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F922Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9234u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F923Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9244u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F924Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9254u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F925Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9264u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F926Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9274u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F927Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9284u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F929Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F92FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9304u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F931Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9324u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F932Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9334u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F933Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9354u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F935Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9364u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F936Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9374u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F938Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9394u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F939Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F93FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9404u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F941Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9424u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F942Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9434u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F943Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9444u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F944Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9454u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F945Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9474u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F947Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9484u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F948Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9494u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F949Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F94F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F952Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F954Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9564u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9584u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9598u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F95B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F960Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9620u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F963Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9644u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9654u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9694u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F96D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F96E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F96F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F97B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9830u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9840u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9864u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F98C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F98DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F998Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F999Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F99F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A64u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9A90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9AACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9AF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B18u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9B98u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9BA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9BB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9C74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9CB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9CCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9CE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9D68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9DF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9E8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9EA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9F94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088F9FF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA010u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA070u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA104u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA168u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA19Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA238u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA250u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA2D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA360u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA370u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA3CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA450u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA458u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA50Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA520u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA53Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA554u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA57Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA5F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA63Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA690u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA6ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA770u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA780u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA7F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA808u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA818u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA830u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA838u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA8B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA8C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA8D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA910u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA928u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA974u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA990u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA9B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA9D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA9DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FA9F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAA8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAABCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAACCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAADCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAF4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAAFCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB28u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAB40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FABF4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAC60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACD8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FACF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAD5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FADA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FADBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FADC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FADDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAE5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAED0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAEFCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAF94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FAFDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB008u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB038u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB090u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB114u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB15Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB188u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB1B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB208u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB220u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB264u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB274u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB288u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB2CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB314u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB31Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB324u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB32Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB334u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB33Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB344u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB34Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB354u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB35Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB364u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB36Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB374u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB37Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB384u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB38Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB394u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB39Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB3D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB400u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB40Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB430u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB438u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB454u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB45Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB464u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB494u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB49Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB4E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB508u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB514u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB524u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB530u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB594u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB59Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB5FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB628u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB63Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB654u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB66Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB674u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB67Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB688u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB694u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB69Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6ACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6ECu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB6FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB704u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB70Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB714u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB71Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB728u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB730u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB738u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB740u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB748u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB750u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB758u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB760u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB768u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB770u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB778u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB780u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB788u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB78Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB7F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB818u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB820u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB82Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB834u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB83Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB844u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB84Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB854u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB85Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB87Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB884u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB890u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB898u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB8FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB904u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB90Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB914u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB91Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB924u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB944u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB94Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB958u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB960u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB968u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB970u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB978u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB980u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB988u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9C8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9F0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FB9F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA18u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA88u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBA9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBACCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBAF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBB94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBBACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBBB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBBBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBBC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBBCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBBE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC64u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBC88u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCC8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBCFCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD7Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBD8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBDE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE04u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE78u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBE8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBECCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBED8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBEE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF18u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF80u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBF9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBFB4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBFBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBFD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088FBFF8u, &recomp_unit_0061, "recomp_unit_0061");
}
} // namespace psprecomp

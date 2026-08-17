#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0017[4090] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 31, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0,
    46, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 73, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78,
    0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0,
    0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102,
    0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0,
    117, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138,
    0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0,
    159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 170, 0, 0, 0, 171,
    0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180,
    0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203,
    0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0,
    212, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 236, 237, 0,
    0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312,
    0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346,
    0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0,
    353, 0, 0, 0, 354, 355, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0,
    0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387,
    0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 399,
    0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 0,
    0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423,
    0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 439, 440, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445,
    0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457,
    0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0,
    0, 466, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 473, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477,
    0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0,
    484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 490, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495,
    0, 0, 496, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0,
    0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515,
    0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540,
    0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 555, 0,
    0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0,
    0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 0,
    0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572,
    0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 576, 0, 577, 0, 578, 579, 0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0,
    584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 603, 0, 604, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0,
    0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 616, 0, 617, 0, 0, 0,
    0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625,
    0, 0, 626, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 633, 0, 0,
    0, 634, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647,
    0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0,
    0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659,
    0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0,
    672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 684, 0, 0, 685, 0, 0, 686, 0, 0,
    0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 693,
    0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0,
    0, 0, 0, 0, 700, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 0, 0, 0, 0, 0, 706, 0,
    0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0,
    714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 719, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 724,
    0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0,
    731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 748, 0, 0,
    0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 752, 0, 0, 0, 753, 0, 0, 754,
};
void recomp_unit_0017_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08848004u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0017[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08848004;
    case 2u: goto L_08848014;
    case 3u: goto L_0884802C;
    case 4u: goto L_08848038;
    case 5u: goto L_08848040;
    case 6u: goto L_08848048;
    case 7u: goto L_08848058;
    case 8u: goto L_08848060;
    case 9u: goto L_08848080;
    case 10u: goto L_088480AC;
    case 11u: goto L_088480B8;
    case 12u: goto L_088480C0;
    case 13u: goto L_088480C8;
    case 14u: goto L_088480D4;
    case 15u: goto L_088480DC;
    case 16u: goto L_088480F8;
    case 17u: goto L_08848108;
    case 18u: goto L_08848110;
    case 19u: goto L_08848134;
    case 20u: goto L_0884813C;
    case 21u: goto L_08848148;
    case 22u: goto L_0884814C;
    case 23u: goto L_0884816C;
    case 24u: goto L_0884818C;
    case 25u: goto L_08848198;
    case 26u: goto L_088481A0;
    case 27u: goto L_088481A8;
    case 28u: goto L_088481B4;
    case 29u: goto L_088481BC;
    case 30u: goto L_088481C4;
    case 31u: goto L_088481D8;
    case 32u: goto L_088481DC;
    case 33u: goto L_088481E4;
    case 34u: goto L_088481FC;
    case 35u: goto L_08848210;
    case 36u: goto L_08848218;
    case 37u: goto L_08848244;
    case 38u: goto L_08848248;
    case 39u: goto L_08848260;
    case 40u: goto L_088482AC;
    case 41u: goto L_088482C0;
    case 42u: goto L_088482D4;
    case 43u: goto L_088482DC;
    case 44u: goto L_088482E4;
    case 45u: goto L_088482F8;
    case 46u: goto L_08848304;
    case 47u: goto L_08848308;
    case 48u: goto L_08848348;
    case 49u: goto L_08848358;
    case 50u: goto L_08848364;
    case 51u: goto L_0884836C;
    case 52u: goto L_08848374;
    case 53u: goto L_0884837C;
    case 54u: goto L_08848394;
    case 55u: goto L_088483A8;
    case 56u: goto L_088483B4;
    case 57u: goto L_088483BC;
    case 58u: goto L_088483E4;
    case 59u: goto L_088483FC;
    case 60u: goto L_08848410;
    case 61u: goto L_0884841C;
    case 62u: goto L_08848424;
    case 63u: goto L_08848430;
    case 64u: goto L_0884843C;
    case 65u: goto L_0884844C;
    case 66u: goto L_08848458;
    case 67u: goto L_08848478;
    case 68u: goto L_08848484;
    case 69u: goto L_08848498;
    case 70u: goto L_088484A4;
    case 71u: goto L_088484B0;
    case 72u: goto L_088484BC;
    case 73u: goto L_088484C0;
    case 74u: goto L_088484C8;
    case 75u: goto L_088484D0;
    case 76u: goto L_088484E4;
    case 77u: goto L_088484EC;
    case 78u: goto L_08848500;
    case 79u: goto L_0884850C;
    case 80u: goto L_0884851C;
    case 81u: goto L_08848528;
    case 82u: goto L_08848578;
    case 83u: goto L_0884858C;
    case 84u: goto L_08848594;
    case 85u: goto L_088485A0;
    case 86u: goto L_088485A8;
    case 87u: goto L_088485BC;
    case 88u: goto L_088485D4;
    case 89u: goto L_088485D8;
    case 90u: goto L_088485E8;
    case 91u: goto L_088485F8;
    case 92u: goto L_08848608;
    case 93u: goto L_08848618;
    case 94u: goto L_08848628;
    case 95u: goto L_08848634;
    case 96u: goto L_0884863C;
    case 97u: goto L_0884864C;
    case 98u: goto L_08848658;
    case 99u: goto L_08848660;
    case 100u: goto L_08848668;
    case 101u: goto L_08848678;
    case 102u: goto L_08848680;
    case 103u: goto L_0884868C;
    case 104u: goto L_08848694;
    case 105u: goto L_088486BC;
    case 106u: goto L_088486F8;
    case 107u: goto L_08848704;
    case 108u: goto L_08848728;
    case 109u: goto L_08848730;
    case 110u: goto L_08848738;
    case 111u: goto L_08848744;
    case 112u: goto L_08848754;
    case 113u: goto L_0884875C;
    case 114u: goto L_08848764;
    case 115u: goto L_0884876C;
    case 116u: goto L_0884877C;
    case 117u: goto L_08848784;
    case 118u: goto L_0884878C;
    case 119u: goto L_08848794;
    case 120u: goto L_088487A4;
    case 121u: goto L_088487AC;
    case 122u: goto L_088487B8;
    case 123u: goto L_088487D0;
    case 124u: goto L_088487E0;
    case 125u: goto L_088487EC;
    case 126u: goto L_08848808;
    case 127u: goto L_08848814;
    case 128u: goto L_0884882C;
    case 129u: goto L_08848840;
    case 130u: goto L_08848848;
    case 131u: goto L_08848854;
    case 132u: goto L_0884889C;
    case 133u: goto L_088488B0;
    case 134u: goto L_088488C4;
    case 135u: goto L_088488D8;
    case 136u: goto L_088488E8;
    case 137u: goto L_088488F4;
    case 138u: goto L_08848900;
    case 139u: goto L_0884890C;
    case 140u: goto L_0884891C;
    case 141u: goto L_08848930;
    case 142u: goto L_08848940;
    case 143u: goto L_08848944;
    case 144u: goto L_08848950;
    case 145u: goto L_0884895C;
    case 146u: goto L_088489A0;
    case 147u: goto L_088489A8;
    case 148u: goto L_088489AC;
    case 149u: goto L_088489C4;
    case 150u: goto L_088489D0;
    case 151u: goto L_088489E4;
    case 152u: goto L_088489EC;
    case 153u: goto L_08848A10;
    case 154u: goto L_08848A14;
    case 155u: goto L_08848A54;
    case 156u: goto L_08848A5C;
    case 157u: goto L_08848A6C;
    case 158u: goto L_08848A78;
    case 159u: goto L_08848A84;
    case 160u: goto L_08848A8C;
    case 161u: goto L_08848AC8;
    case 162u: goto L_08848AD0;
    case 163u: goto L_08848B14;
    case 164u: goto L_08848B1C;
    case 165u: goto L_08848B38;
    case 166u: goto L_08848B48;
    case 167u: goto L_08848B54;
    case 168u: goto L_08848B60;
    case 169u: goto L_08848B6C;
    case 170u: goto L_08848B70;
    case 171u: goto L_08848B80;
    case 172u: goto L_08848B8C;
    case 173u: goto L_08848BA0;
    case 174u: goto L_08848BB4;
    case 175u: goto L_08848BC0;
    case 176u: goto L_08848BD0;
    case 177u: goto L_08848BDC;
    case 178u: goto L_08848BEC;
    case 179u: goto L_08848BF8;
    case 180u: goto L_08848C00;
    case 181u: goto L_08848C08;
    case 182u: goto L_08848C18;
    case 183u: goto L_08848C24;
    case 184u: goto L_08848C30;
    case 185u: goto L_08848C38;
    case 186u: goto L_08848C40;
    case 187u: goto L_08848C5C;
    case 188u: goto L_08848C70;
    case 189u: goto L_08848C90;
    case 190u: goto L_08848C98;
    case 191u: goto L_08848CAC;
    case 192u: goto L_08848CC8;
    case 193u: goto L_08848CE0;
    case 194u: goto L_08848D00;
    case 195u: goto L_08848D08;
    case 196u: goto L_08848D1C;
    case 197u: goto L_08848D30;
    case 198u: goto L_08848D3C;
    case 199u: goto L_08848D48;
    case 200u: goto L_08848D50;
    case 201u: goto L_08848D64;
    case 202u: goto L_08848D70;
    case 203u: goto L_08848D80;
    case 204u: goto L_08848D90;
    case 205u: goto L_08848DA4;
    case 206u: goto L_08848DB8;
    case 207u: goto L_08848DC4;
    case 208u: goto L_08848DD4;
    case 209u: goto L_08848DE0;
    case 210u: goto L_08848DF0;
    case 211u: goto L_08848DFC;
    case 212u: goto L_08848E04;
    case 213u: goto L_08848E0C;
    case 214u: goto L_08848E1C;
    case 215u: goto L_08848E28;
    case 216u: goto L_08848E34;
    case 217u: goto L_08848E3C;
    case 218u: goto L_08848E44;
    case 219u: goto L_08848E68;
    case 220u: goto L_08848E84;
    case 221u: goto L_08848EA4;
    case 222u: goto L_08848EAC;
    case 223u: goto L_08848EB8;
    case 224u: goto L_08848EDC;
    case 225u: goto L_08848EFC;
    case 226u: goto L_08848F1C;
    case 227u: goto L_08848F24;
    case 228u: goto L_08848F2C;
    case 229u: goto L_08848F70;
    case 230u: goto L_08848F84;
    case 231u: goto L_08848FB8;
    case 232u: goto L_08848FCC;
    case 233u: goto L_08848FD8;
    case 234u: goto L_08848FE0;
    case 235u: goto L_08848FEC;
    case 236u: goto L_08848FF8;
    case 237u: goto L_08848FFC;
    case 238u: goto L_08849008;
    case 239u: goto L_08849010;
    case 240u: goto L_08849028;
    case 241u: goto L_08849034;
    case 242u: goto L_08849044;
    case 243u: goto L_08849050;
    case 244u: goto L_08849058;
    case 245u: goto L_08849060;
    case 246u: goto L_0884906C;
    case 247u: goto L_08849074;
    case 248u: goto L_0884907C;
    case 249u: goto L_08849080;
    case 250u: goto L_088490AC;
    case 251u: goto L_088490B4;
    case 252u: goto L_088490DC;
    case 253u: goto L_088490FC;
    case 254u: goto L_08849104;
    case 255u: goto L_08849148;
    case 256u: goto L_08849150;
    case 257u: goto L_08849160;
    case 258u: goto L_0884916C;
    case 259u: goto L_08849178;
    case 260u: goto L_08849180;
    case 261u: goto L_088491C0;
    case 262u: goto L_088491C8;
    case 263u: goto L_08849210;
    case 264u: goto L_08849218;
    case 265u: goto L_0884922C;
    case 266u: goto L_08849248;
    case 267u: goto L_08849260;
    case 268u: goto L_08849280;
    case 269u: goto L_08849288;
    case 270u: goto L_0884929C;
    case 271u: goto L_088492B8;
    case 272u: goto L_088492D0;
    case 273u: goto L_088492F0;
    case 274u: goto L_088492F8;
    case 275u: goto L_08849304;
    case 276u: goto L_08849328;
    case 277u: goto L_08849348;
    case 278u: goto L_08849368;
    case 279u: goto L_08849370;
    case 280u: goto L_0884937C;
    case 281u: goto L_088493A0;
    case 282u: goto L_088493C0;
    case 283u: goto L_088493E0;
    case 284u: goto L_088493E8;
    case 285u: goto L_088493F0;
    case 286u: goto L_08849438;
    case 287u: goto L_08849440;
    case 288u: goto L_08849484;
    case 289u: goto L_08849498;
    case 290u: goto L_088494BC;
    case 291u: goto L_088494C8;
    case 292u: goto L_088494F8;
    case 293u: goto L_08849504;
    case 294u: goto L_0884950C;
    case 295u: goto L_08849514;
    case 296u: goto L_0884951C;
    case 297u: goto L_08849524;
    case 298u: goto L_0884952C;
    case 299u: goto L_08849540;
    case 300u: goto L_0884954C;
    case 301u: goto L_08849568;
    case 302u: goto L_08849570;
    case 303u: goto L_08849578;
    case 304u: goto L_088495F8;
    case 305u: goto L_08849674;
    case 306u: goto L_08849680;
    case 307u: goto L_08849728;
    case 308u: goto L_08849730;
    case 309u: goto L_0884973C;
    case 310u: goto L_08849760;
    case 311u: goto L_08849778;
    case 312u: goto L_08849780;
    case 313u: goto L_08849788;
    case 314u: goto L_08849808;
    case 315u: goto L_08849884;
    case 316u: goto L_0884988C;
    case 317u: goto L_08849938;
    case 318u: goto L_08849940;
    case 319u: goto L_088499E8;
    case 320u: goto L_088499F0;
    case 321u: goto L_08849A98;
    case 322u: goto L_08849AA0;
    case 323u: goto L_08849B4C;
    case 324u: goto L_08849B5C;
    case 325u: goto L_08849B78;
    case 326u: goto L_08849B90;
    case 327u: goto L_08849B98;
    case 328u: goto L_08849BA0;
    case 329u: goto L_08849C20;
    case 330u: goto L_08849C9C;
    case 331u: goto L_08849CB0;
    case 332u: goto L_08849CE0;
    case 333u: goto L_08849CF8;
    case 334u: goto L_08849D14;
    case 335u: goto L_08849D30;
    case 336u: goto L_08849D40;
    case 337u: goto L_08849D50;
    case 338u: goto L_08849D64;
    case 339u: goto L_08849D74;
    case 340u: goto L_08849D80;
    case 341u: goto L_08849DA8;
    case 342u: goto L_08849DD0;
    case 343u: goto L_08849DD8;
    case 344u: goto L_08849DE4;
    case 345u: goto L_08849DF8;
    case 346u: goto L_08849E00;
    case 347u: goto L_08849E10;
    case 348u: goto L_08849E24;
    case 349u: goto L_08849E50;
    case 350u: goto L_08849E58;
    case 351u: goto L_08849E60;
    case 352u: goto L_08849E74;
    case 353u: goto L_08849E84;
    case 354u: goto L_08849E94;
    case 355u: goto L_08849E98;
    case 356u: goto L_08849EA0;
    case 357u: goto L_08849EBC;
    case 358u: goto L_08849EDC;
    case 359u: goto L_08849EE4;
    case 360u: goto L_08849EEC;
    case 361u: goto L_08849EF4;
    case 362u: goto L_08849F04;
    case 363u: goto L_0884A028;
    case 364u: goto L_0884A034;
    case 365u: goto L_0884A03C;
    case 366u: goto L_0884A044;
    case 367u: goto L_0884A04C;
    case 368u: goto L_0884A054;
    case 369u: goto L_0884A064;
    case 370u: goto L_0884A074;
    case 371u: goto L_0884A088;
    case 372u: goto L_0884A09C;
    case 373u: goto L_0884A0A4;
    case 374u: goto L_0884A0AC;
    case 375u: goto L_0884A0B4;
    case 376u: goto L_0884A0CC;
    case 377u: goto L_0884A0DC;
    case 378u: goto L_0884A0E4;
    case 379u: goto L_0884A198;
    case 380u: goto L_0884A1B0;
    case 381u: goto L_0884A224;
    case 382u: goto L_0884A22C;
    case 383u: goto L_0884A23C;
    case 384u: goto L_0884A24C;
    case 385u: goto L_0884A25C;
    case 386u: goto L_0884A270;
    case 387u: goto L_0884A280;
    case 388u: goto L_0884A28C;
    case 389u: goto L_0884A29C;
    case 390u: goto L_0884A2A4;
    case 391u: goto L_0884A2C0;
    case 392u: goto L_0884A2C8;
    case 393u: goto L_0884A2D0;
    case 394u: goto L_0884A2D8;
    case 395u: goto L_0884A308;
    case 396u: goto L_0884A3E4;
    case 397u: goto L_0884A3F0;
    case 398u: goto L_0884A3F8;
    case 399u: goto L_0884A400;
    case 400u: goto L_0884A408;
    case 401u: goto L_0884A410;
    case 402u: goto L_0884A420;
    case 403u: goto L_0884A430;
    case 404u: goto L_0884A448;
    case 405u: goto L_0884A45C;
    case 406u: goto L_0884A464;
    case 407u: goto L_0884A46C;
    case 408u: goto L_0884A474;
    case 409u: goto L_0884A488;
    case 410u: goto L_0884A498;
    case 411u: goto L_0884A4A0;
    case 412u: goto L_0884A54C;
    case 413u: goto L_0884A560;
    case 414u: goto L_0884A574;
    case 415u: goto L_0884A5E8;
    case 416u: goto L_0884A5F0;
    case 417u: goto L_0884A624;
    case 418u: goto L_0884A62C;
    case 419u: goto L_0884A63C;
    case 420u: goto L_0884A64C;
    case 421u: goto L_0884A65C;
    case 422u: goto L_0884A670;
    case 423u: goto L_0884A680;
    case 424u: goto L_0884A68C;
    case 425u: goto L_0884A69C;
    case 426u: goto L_0884A6A4;
    case 427u: goto L_0884A6C0;
    case 428u: goto L_0884A6C8;
    case 429u: goto L_0884A6D0;
    case 430u: goto L_0884A6D8;
    case 431u: goto L_0884A708;
    case 432u: goto L_0884A71C;
    case 433u: goto L_0884A738;
    case 434u: goto L_0884A750;
    case 435u: goto L_0884A75C;
    case 436u: goto L_0884A764;
    case 437u: goto L_0884A774;
    case 438u: goto L_0884A794;
    case 439u: goto L_0884A79C;
    case 440u: goto L_0884A7A0;
    case 441u: goto L_0884A7AC;
    case 442u: goto L_0884A7B4;
    case 443u: goto L_0884A7C4;
    case 444u: goto L_0884A7F4;
    case 445u: goto L_0884A800;
    case 446u: goto L_0884A814;
    case 447u: goto L_0884A820;
    case 448u: goto L_0884A834;
    case 449u: goto L_0884A844;
    case 450u: goto L_0884A854;
    case 451u: goto L_0884A870;
    case 452u: goto L_0884A884;
    case 453u: goto L_0884A8B0;
    case 454u: goto L_0884A8CC;
    case 455u: goto L_0884A8E4;
    case 456u: goto L_0884A8F4;
    case 457u: goto L_0884AA80;
    case 458u: goto L_0884AAA0;
    case 459u: goto L_0884AAA8;
    case 460u: goto L_0884AAB8;
    case 461u: goto L_0884AAD0;
    case 462u: goto L_0884AAD8;
    case 463u: goto L_0884AAE4;
    case 464u: goto L_0884AAEC;
    case 465u: goto L_0884AAFC;
    case 466u: goto L_0884AB08;
    case 467u: goto L_0884AB14;
    case 468u: goto L_0884AB1C;
    case 469u: goto L_0884AB24;
    case 470u: goto L_0884AB34;
    case 471u: goto L_0884AB44;
    case 472u: goto L_0884AB4C;
    case 473u: goto L_0884AB54;
    case 474u: goto L_0884AB58;
    case 475u: goto L_0884AB6C;
    case 476u: goto L_0884AB78;
    case 477u: goto L_0884AB80;
    case 478u: goto L_0884AB90;
    case 479u: goto L_0884AB98;
    case 480u: goto L_0884ABA4;
    case 481u: goto L_0884ABB4;
    case 482u: goto L_0884ABBC;
    case 483u: goto L_0884ADE4;
    case 484u: goto L_0884AE04;
    case 485u: goto L_0884AE0C;
    case 486u: goto L_0884AE1C;
    case 487u: goto L_0884AE2C;
    case 488u: goto L_0884AE34;
    case 489u: goto L_0884AE3C;
    case 490u: goto L_0884AE40;
    case 491u: goto L_0884AE54;
    case 492u: goto L_0884AE60;
    case 493u: goto L_0884AE68;
    case 494u: goto L_0884AE78;
    case 495u: goto L_0884AE80;
    case 496u: goto L_0884AE8C;
    case 497u: goto L_0884AE9C;
    case 498u: goto L_0884AEA4;
    case 499u: goto L_0884AEB4;
    case 500u: goto L_0884AEC4;
    case 501u: goto L_0884AED4;
    case 502u: goto L_0884AEE4;
    case 503u: goto L_0884AF20;
    case 504u: goto L_0884AF28;
    case 505u: goto L_0884AF30;
    case 506u: goto L_0884AF3C;
    case 507u: goto L_0884AF44;
    case 508u: goto L_0884AF4C;
    case 509u: goto L_0884AF58;
    case 510u: goto L_0884AF74;
    case 511u: goto L_0884AF88;
    case 512u: goto L_0884AF9C;
    case 513u: goto L_0884AFD4;
    case 514u: goto L_0884AFE8;
    case 515u: goto L_0884B000;
    case 516u: goto L_0884B010;
    case 517u: goto L_0884B01C;
    case 518u: goto L_0884B02C;
    case 519u: goto L_0884B040;
    case 520u: goto L_0884B068;
    case 521u: goto L_0884B07C;
    case 522u: goto L_0884B094;
    case 523u: goto L_0884B0A4;
    case 524u: goto L_0884B0B0;
    case 525u: goto L_0884B0C0;
    case 526u: goto L_0884B0C8;
    case 527u: goto L_0884B0D0;
    case 528u: goto L_0884B0E8;
    case 529u: goto L_0884B0F0;
    case 530u: goto L_0884B120;
    case 531u: goto L_0884B128;
    case 532u: goto L_0884B138;
    case 533u: goto L_0884B150;
    case 534u: goto L_0884B168;
    case 535u: goto L_0884B170;
    case 536u: goto L_0884B198;
    case 537u: goto L_0884B1AC;
    case 538u: goto L_0884B1D8;
    case 539u: goto L_0884B1E0;
    case 540u: goto L_0884B200;
    case 541u: goto L_0884B214;
    case 542u: goto L_0884B26C;
    case 543u: goto L_0884B274;
    case 544u: goto L_0884B2C4;
    case 545u: goto L_0884B2D4;
    case 546u: goto L_0884B2E4;
    case 547u: goto L_0884B2EC;
    case 548u: goto L_0884B2F4;
    case 549u: goto L_0884B328;
    case 550u: goto L_0884B344;
    case 551u: goto L_0884B34C;
    case 552u: goto L_0884B35C;
    case 553u: goto L_0884B36C;
    case 554u: goto L_0884B374;
    case 555u: goto L_0884B37C;
    case 556u: goto L_0884B394;
    case 557u: goto L_0884B3DC;
    case 558u: goto L_0884B3F4;
    case 559u: goto L_0884B40C;
    case 560u: goto L_0884B424;
    case 561u: goto L_0884B43C;
    case 562u: goto L_0884B454;
    case 563u: goto L_0884B45C;
    case 564u: goto L_0884B464;
    case 565u: goto L_0884B474;
    case 566u: goto L_0884B488;
    case 567u: goto L_0884B49C;
    case 568u: goto L_0884B4B0;
    case 569u: goto L_0884B4C4;
    case 570u: goto L_0884B4D8;
    case 571u: goto L_0884B4EC;
    case 572u: goto L_0884B500;
    case 573u: goto L_0884B514;
    case 574u: goto L_0884B51C;
    case 575u: goto L_0884B524;
    case 576u: goto L_0884B530;
    case 577u: goto L_0884B538;
    case 578u: goto L_0884B540;
    case 579u: goto L_0884B544;
    case 580u: goto L_0884B54C;
    case 581u: goto L_0884B554;
    case 582u: goto L_0884B55C;
    case 583u: goto L_0884B570;
    case 584u: goto L_0884B584;
    case 585u: goto L_0884B598;
    case 586u: goto L_0884B5AC;
    case 587u: goto L_0884B5C0;
    case 588u: goto L_0884B5D4;
    case 589u: goto L_0884B604;
    case 590u: goto L_0884B61C;
    case 591u: goto L_0884B638;
    case 592u: goto L_0884B648;
    case 593u: goto L_0884B650;
    case 594u: goto L_0884B660;
    case 595u: goto L_0884B674;
    case 596u: goto L_0884B6BC;
    case 597u: goto L_0884B6C8;
    case 598u: goto L_0884B6D8;
    case 599u: goto L_0884B6F4;
    case 600u: goto L_0884B71C;
    case 601u: goto L_0884B734;
    case 602u: goto L_0884B73C;
    case 603u: goto L_0884B748;
    case 604u: goto L_0884B750;
    case 605u: goto L_0884B754;
    case 606u: goto L_0884B760;
    case 607u: goto L_0884B774;
    case 608u: goto L_0884B788;
    case 609u: goto L_0884B79C;
    case 610u: goto L_0884B7A4;
    case 611u: goto L_0884B7AC;
    case 612u: goto L_0884B7B4;
    case 613u: goto L_0884B7C0;
    case 614u: goto L_0884B7D8;
    case 615u: goto L_0884B7E4;
    case 616u: goto L_0884B7EC;
    case 617u: goto L_0884B7F4;
    case 618u: goto L_0884B808;
    case 619u: goto L_0884B81C;
    case 620u: goto L_0884B834;
    case 621u: goto L_0884B84C;
    case 622u: goto L_0884B868;
    case 623u: goto L_0884B870;
    case 624u: goto L_0884B878;
    case 625u: goto L_0884B880;
    case 626u: goto L_0884B88C;
    case 627u: goto L_0884B894;
    case 628u: goto L_0884B8A8;
    case 629u: goto L_0884B8CC;
    case 630u: goto L_0884B8D4;
    case 631u: goto L_0884B8E0;
    case 632u: goto L_0884B8F0;
    case 633u: goto L_0884B8F8;
    case 634u: goto L_0884B908;
    case 635u: goto L_0884B914;
    case 636u: goto L_0884B924;
    case 637u: goto L_0884B92C;
    case 638u: goto L_0884B934;
    case 639u: goto L_0884B93C;
    case 640u: goto L_0884B944;
    case 641u: goto L_0884B94C;
    case 642u: goto L_0884B958;
    case 643u: goto L_0884B960;
    case 644u: goto L_0884B968;
    case 645u: goto L_0884B970;
    case 646u: goto L_0884B978;
    case 647u: goto L_0884B980;
    case 648u: goto L_0884B988;
    case 649u: goto L_0884B9A0;
    case 650u: goto L_0884B9DC;
    case 651u: goto L_0884B9E4;
    case 652u: goto L_0884B9EC;
    case 653u: goto L_0884B9F4;
    case 654u: goto L_0884B9FC;
    case 655u: goto L_0884BA14;
    case 656u: goto L_0884BA1C;
    case 657u: goto L_0884BA44;
    case 658u: goto L_0884BA58;
    case 659u: goto L_0884BA80;
    case 660u: goto L_0884BA88;
    case 661u: goto L_0884BA9C;
    case 662u: goto L_0884BAA4;
    case 663u: goto L_0884BAAC;
    case 664u: goto L_0884BAB8;
    case 665u: goto L_0884BACC;
    case 666u: goto L_0884BAD4;
    case 667u: goto L_0884BADC;
    case 668u: goto L_0884BAE4;
    case 669u: goto L_0884BAEC;
    case 670u: goto L_0884BAF4;
    case 671u: goto L_0884BAFC;
    case 672u: goto L_0884BB04;
    case 673u: goto L_0884BB0C;
    case 674u: goto L_0884BB14;
    case 675u: goto L_0884BB1C;
    case 676u: goto L_0884BB24;
    case 677u: goto L_0884BB2C;
    case 678u: goto L_0884BB34;
    case 679u: goto L_0884BB3C;
    case 680u: goto L_0884BB44;
    case 681u: goto L_0884BB4C;
    case 682u: goto L_0884BB54;
    case 683u: goto L_0884BB5C;
    case 684u: goto L_0884BB60;
    case 685u: goto L_0884BB6C;
    case 686u: goto L_0884BB78;
    case 687u: goto L_0884BB88;
    case 688u: goto L_0884BB98;
    case 689u: goto L_0884BBC0;
    case 690u: goto L_0884BBD0;
    case 691u: goto L_0884BBDC;
    case 692u: goto L_0884BBEC;
    case 693u: goto L_0884BC00;
    case 694u: goto L_0884BC08;
    case 695u: goto L_0884BC14;
    case 696u: goto L_0884BC30;
    case 697u: goto L_0884BC40;
    case 698u: goto L_0884BC60;
    case 699u: goto L_0884BC7C;
    case 700u: goto L_0884BC94;
    case 701u: goto L_0884BC98;
    case 702u: goto L_0884BCB8;
    case 703u: goto L_0884BCD4;
    case 704u: goto L_0884BCDC;
    case 705u: goto L_0884BCE4;
    case 706u: goto L_0884BCFC;
    case 707u: goto L_0884BD18;
    case 708u: goto L_0884BD20;
    case 709u: goto L_0884BD28;
    case 710u: goto L_0884BD44;
    case 711u: goto L_0884BD4C;
    case 712u: goto L_0884BD54;
    case 713u: goto L_0884BD6C;
    case 714u: goto L_0884BD84;
    case 715u: goto L_0884BD98;
    case 716u: goto L_0884BDBC;
    case 717u: goto L_0884BDC4;
    case 718u: goto L_0884BDCC;
    case 719u: goto L_0884BDD4;
    case 720u: goto L_0884BDE0;
    case 721u: goto L_0884BDE8;
    case 722u: goto L_0884BDF0;
    case 723u: goto L_0884BDF8;
    case 724u: goto L_0884BE00;
    case 725u: goto L_0884BE14;
    case 726u: goto L_0884BE28;
    case 727u: goto L_0884BE3C;
    case 728u: goto L_0884BE58;
    case 729u: goto L_0884BE74;
    case 730u: goto L_0884BE7C;
    case 731u: goto L_0884BE84;
    case 732u: goto L_0884BE8C;
    case 733u: goto L_0884BE94;
    case 734u: goto L_0884BE9C;
    case 735u: goto L_0884BEA4;
    case 736u: goto L_0884BEB8;
    case 737u: goto L_0884BEC0;
    case 738u: goto L_0884BED8;
    case 739u: goto L_0884BEE8;
    case 740u: goto L_0884BEF8;
    case 741u: goto L_0884BF20;
    case 742u: goto L_0884BF30;
    case 743u: goto L_0884BF38;
    case 744u: goto L_0884BF4C;
    case 745u: goto L_0884BF58;
    case 746u: goto L_0884BF64;
    case 747u: goto L_0884BF6C;
    case 748u: goto L_0884BF78;
    case 749u: goto L_0884BF90;
    case 750u: goto L_0884BFB4;
    case 751u: goto L_0884BFC4;
    case 752u: goto L_0884BFCC;
    case 753u: goto L_0884BFDC;
    case 754u: goto L_0884BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08848004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08848014u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08848014u) goto L_08848014;
    return;
L_08848014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884802Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0884802Cu) goto L_0884802C;
    return;
L_0884802C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08848038u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08848038u) goto L_08848038;
    return;
L_08848038:
    ctx.gpr[31] = (0x08848040u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08848040u) goto L_08848040;
    return;
L_08848040:
    ctx.gpr[31] = (0x08848048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088486BC;
L_08848048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[31] = (0x08848058u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08848058u) goto L_08848058;
    return;
L_08848058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848060;
      }
      goto L_08848060;
    }
L_08848060:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08848148;
      }
      goto L_088480AC;
    }
L_088480AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884814C;
      }
      goto L_088480B8;
    }
L_088480B8:
    ctx.gpr[31] = (0x088480C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088487EC;
L_088480C0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884814C;
      }
      goto L_088480C8;
    }
L_088480C8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088480D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x088480D4u) goto L_088480D4;
    return;
L_088480D4:
    ctx.gpr[31] = (0x088480DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 345u, 0x089DE408u>(ctx, &aot_mem) && ctx.pc == 0x088480DCu) goto L_088480DC;
    return;
L_088480DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31096));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088480F8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 368u, 0x089DE79Cu>(ctx, &aot_mem) && ctx.pc == 0x088480F8u) goto L_088480F8;
    return;
L_088480F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08848108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 382u, 0x089DE8D4u>(ctx, &aot_mem) && ctx.pc == 0x08848108u) goto L_08848108;
    return;
L_08848108:
    ctx.gpr[31] = (0x08848110u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08848110u) goto L_08848110;
    return;
L_08848110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x08848134u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08848134u) goto L_08848134;
    return;
L_08848134:
    ctx.gpr[31] = (0x0884813Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x0884813Cu) goto L_0884813C;
    return;
L_0884813C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0884814C;
      }
      goto L_08848148;
    }
L_08848148:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    goto L_0884814C;
L_0884814C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0884816C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08848248;
      }
      goto L_0884818C;
    }
L_0884818C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_088481B4;
    }
    goto L_08848198;
L_08848198:
    ctx.gpr[31] = (0x088481A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088481A0u) goto L_088481A0;
    return;
L_088481A0:
    ctx.gpr[31] = (0x088481A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 345u, 0x089DE408u>(ctx, &aot_mem) && ctx.pc == 0x088481A8u) goto L_088481A8;
    return;
L_088481A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_088481B4;
L_088481B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088481DC;
      }
      goto L_088481BC;
    }
L_088481BC:
    ctx.gpr[31] = (0x088481C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 923u, 0x0882FBE8u>(ctx, &aot_mem) && ctx.pc == 0x088481C4u) goto L_088481C4;
    return;
L_088481C4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088481D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088481D8u) goto L_088481D8;
    return;
L_088481D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    goto L_088481DC;
L_088481DC:
    ctx.gpr[31] = (0x088481E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 639u, 0x0896B868u>(ctx, &aot_mem) && ctx.pc == 0x088481E4u) goto L_088481E4;
    return;
L_088481E4:
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31096));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088481FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 368u, 0x089DE79Cu>(ctx, &aot_mem) && ctx.pc == 0x088481FCu) goto L_088481FC;
    return;
L_088481FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08848210u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 382u, 0x089DE8D4u>(ctx, &aot_mem) && ctx.pc == 0x08848210u) goto L_08848210;
    return;
L_08848210:
    ctx.gpr[31] = (0x08848218u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08848218u) goto L_08848218;
    return;
L_08848218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x08848244u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08848244u) goto L_08848244;
    return;
L_08848244:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    goto L_08848248;
L_08848248:
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
L_08848260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088482ACu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088482ACu) goto L_088482AC;
    return;
L_088482AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088482C0u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088482C0u) goto L_088482C0;
    return;
L_088482C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088482DC;
      }
      goto L_088482D4;
    }
L_088482D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    goto L_088482DC;
L_088482DC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_08848308;
      }
      goto L_088482E4;
    }
L_088482E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088482F8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088482F8u) goto L_088482F8;
    return;
L_088482F8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x08848304u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08848304u) goto L_08848304;
    return;
L_08848304:
    ctx.gpr[4] = (0u | 255u);
    goto L_08848308;
L_08848308:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08848348u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088490DC;
L_08848348:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08848358u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08848358u) goto L_08848358;
    return;
L_08848358:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08848364u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088483E4;
L_08848364:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08848374;
      }
      goto L_0884836C;
    }
L_0884836C:
    ctx.gpr[31] = (0x08848374u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08848528;
L_08848374:
    ctx.gpr[31] = (0x0884837Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08849498;
L_0884837C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088483A8;
      }
      goto L_08848394;
    }
L_08848394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088483B4;
      }
      goto L_088483A8;
    }
L_088483A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_088483B4;
L_088483B4:
    ctx.gpr[31] = (0x088483BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088483BCu) goto L_088483BC;
    return;
L_088483BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088483E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0884841C;
    }
    goto L_088483FC;
L_088483FC:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31088));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08848410u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848410u) goto L_08848410;
    return;
L_08848410:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884841C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u | 82u);
      if (branch_taken) {
          goto L_08848484;
      }
      goto L_08848424;
    }
L_08848424:
    ctx.gpr[4] = (2220u << 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31080));
      if (branch_taken) {
          goto L_0884843C;
      }
      goto L_08848430;
    }
L_08848430:
    ctx.gpr[7] = (0u | 83u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08848458;
      }
      goto L_0884843C;
    }
L_0884843C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0884844Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884844Cu) goto L_0884844C;
    return;
L_0884844C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848458:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08848478u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848478u) goto L_08848478;
    return;
L_08848478:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848484:
    ctx.gpr[9] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(5876));
    goto L_08848498;
L_08848498:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[11];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088484B0;
      }
      goto L_088484A4;
    }
L_088484A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088484C0;
      }
      goto L_088484B0;
    }
L_088484B0:
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08848498;
      }
      goto L_088484BC;
    }
L_088484BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_088484C0;
L_088484C0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 83u);
      if (branch_taken) {
          goto L_088484E4;
      }
      goto L_088484C8;
    }
L_088484C8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[8] = (2221u << 16u);
      if (branch_taken) {
          goto L_088484E4;
      }
      goto L_088484D0;
    }
L_088484D0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5576));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088484E4;
      }
      goto L_088484E4;
    }
L_088484E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_0884850C;
      }
      goto L_088484EC;
    }
L_088484EC:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31068));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08848500u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848500u) goto L_08848500;
    return;
L_08848500:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884850C:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31080));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0884851Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884851Cu) goto L_0884851C;
    return;
L_0884851C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5564)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08848594;
      }
      goto L_08848578;
    }
L_08848578:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884858Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31056));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884858Cu) goto L_0884858C;
    return;
L_0884858C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088485D8;
      }
      goto L_08848594;
    }
L_08848594:
    ctx.gpr[6] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 83u);
      if (branch_taken) {
          goto L_088485BC;
      }
      goto L_088485A0;
    }
L_088485A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_088485BC;
      }
      goto L_088485A8;
    }
L_088485A8:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5576));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088485BC;
      }
      goto L_088485BC;
    }
L_088485BC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088485D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31044));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088485D4u) goto L_088485D4;
    return;
L_088485D4:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_088485D8;
L_088485D8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088485E8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088485E8u) goto L_088485E8;
    return;
L_088485E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088485F8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088485F8u) goto L_088485F8;
    return;
L_088485F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08848608u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08848608u) goto L_08848608;
    return;
L_08848608:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08848618u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08848618u) goto L_08848618;
    return;
L_08848618:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08848628u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08848628u) goto L_08848628;
    return;
L_08848628:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08848634u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 584u, 0x0880A830u>(ctx, &aot_mem) && ctx.pc == 0x08848634u) goto L_08848634;
    return;
L_08848634:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08848694;
      }
      goto L_0884863C;
    }
L_0884863C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08848658;
      }
      goto L_0884864C;
    }
L_0884864C:
    ctx.gpr[6] = (0u | 83u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08848660;
    }
    goto L_08848658;
L_08848658:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08848660;
L_08848660:
    if (ctx.gpr[4] == ctx.gpr[21]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08848668;
    }
    goto L_08848668;
L_08848668:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08848678u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08848678u) goto L_08848678;
    return;
L_08848678:
    ctx.gpr[31] = (0x08848680u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08848680u) goto L_08848680;
    return;
L_08848680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0884868Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x0884868Cu) goto L_0884868C;
    return;
L_0884868C:
    ctx.gpr[31] = (0x08848694u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08848694u) goto L_08848694;
    return;
L_08848694:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088486BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x088486F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088486F8u) goto L_088486F8;
    return;
L_088486F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08848738;
      }
      goto L_08848728;
    }
L_08848728:
    ctx.gpr[31] = (0x08848730u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08848730u) goto L_08848730;
    return;
L_08848730:
    ctx.gpr[31] = (0x08848738u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08848738u) goto L_08848738;
    return;
L_08848738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_0884875C;
    }
    goto L_08848744;
L_08848744:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08848754u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848754u) goto L_08848754;
    return;
L_08848754:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_0884875C;
L_0884875C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08848784;
    }
    goto L_08848764;
L_08848764:
    ctx.gpr[31] = (0x0884876Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 923u, 0x0882FBE8u>(ctx, &aot_mem) && ctx.pc == 0x0884876Cu) goto L_0884876C;
    return;
L_0884876C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884877Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884877Cu) goto L_0884877C;
    return;
L_0884877C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08848784;
L_08848784:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
        goto L_088487AC;
    }
    goto L_0884878C;
L_0884878C:
    ctx.gpr[31] = (0x08848794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08848794u) goto L_08848794;
    return;
L_08848794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088487A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088487A4u) goto L_088487A4;
    return;
L_088487A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    goto L_088487AC;
L_088487AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088487B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088487B8u) goto L_088487B8;
    return;
L_088487B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088487D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088487E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 527u, 0x0896B078u>(ctx, &aot_mem) && ctx.pc == 0x088487E0u) goto L_088487E0;
    return;
L_088487E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088487EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08848808u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 611u, 0x0896B624u>(ctx, &aot_mem) && ctx.pc == 0x08848808u) goto L_08848808;
    return;
L_08848808:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08848814;
    }
    goto L_08848814;
L_08848814:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884882C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848848;
      }
      goto L_08848840;
    }
L_08848840:
    ctx.gpr[31] = (0x08848848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 283u, 0x088355E8u>(ctx, &aot_mem) && ctx.pc == 0x08848848u) goto L_08848848;
    return;
L_08848848:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884889Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884889Cu) goto L_0884889C;
    return;
L_0884889C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088488B0u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088488B0u) goto L_088488B0;
    return;
L_088488B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[19] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_088488D8;
      }
      goto L_088488C4;
    }
L_088488C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08848940;
      }
      goto L_088488D8;
    }
L_088488D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08848940;
      }
      goto L_088488E8;
    }
L_088488E8:
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08848944;
      }
      goto L_088488F4;
    }
L_088488F4:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08848944;
      }
      goto L_08848900;
    }
L_08848900:
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08848944;
      }
      goto L_0884890C;
    }
L_0884890C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884891Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884891Cu) goto L_0884891C;
    return;
L_0884891C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08848930u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08848930u) goto L_08848930;
    return;
L_08848930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    goto L_08848940;
L_08848940:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08848944;
L_08848944:
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08848950u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848950u) goto L_08848950;
    return;
L_08848950:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x0884895Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x0884895Cu) goto L_0884895C;
    return;
L_0884895C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088489AC;
    }
    goto L_088489A0;
L_088489A0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08848AC8;
      }
      goto L_088489A8;
    }
L_088489A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088489AC;
L_088489AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[7] = (0u | 82u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31080));
      if (branch_taken) {
          goto L_088489D0;
      }
      goto L_088489C4;
    }
L_088489C4:
    ctx.gpr[7] = (0u | 83u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088489EC;
      }
      goto L_088489D0;
    }
L_088489D0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088489E4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088489E4u) goto L_088489E4;
    return;
L_088489E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08848A14;
      }
      goto L_088489EC;
    }
L_088489EC:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08848A10u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848A10u) goto L_08848A10;
    return;
L_08848A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08848A14;
L_08848A14:
    ctx.gpr[5] = (16824u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17261u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848A54;
    }
L_08848A54:
    ctx.gpr[31] = (0x08848A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 278u, 0x0884D1F4u>(ctx, &aot_mem) && ctx.pc == 0x08848A5Cu) goto L_08848A5C;
    return;
L_08848A5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08848A6Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 324u, 0x0884D474u>(ctx, &aot_mem) && ctx.pc == 0x08848A6Cu) goto L_08848A6C;
    return;
L_08848A6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848A78;
    }
L_08848A78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08848A84u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x08848A84u) goto L_08848A84;
    return;
L_08848A84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848A8C;
    }
L_08848A8C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848AC8;
    }
L_08848AC8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08848B14;
      }
      goto L_08848AD0;
    }
L_08848AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (16832u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16996u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17234u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848B14;
    }
L_08848B14:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08848C90;
      }
      goto L_08848B1C;
    }
L_08848B1C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (16952u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08848B54;
      }
      goto L_08848B38;
    }
L_08848B38:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08848B48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31088));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848B48u) goto L_08848B48;
    return;
L_08848B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848C38;
      }
      goto L_08848B54;
    }
L_08848B54:
    ctx.gpr[4] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08848B70;
      }
      goto L_08848B60;
    }
L_08848B60:
    ctx.gpr[4] = (0u | 83u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08848B8C;
      }
      goto L_08848B6C;
    }
L_08848B6C:
    ctx.gpr[5] = (2220u << 16u);
    goto L_08848B70;
L_08848B70:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08848B80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848B80u) goto L_08848B80;
    return;
L_08848B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848C38;
      }
      goto L_08848B8C;
    }
L_08848B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5576));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08848BC0;
      }
      goto L_08848BA0;
    }
L_08848BA0:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08848BB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848BB4u) goto L_08848BB4;
    return;
L_08848BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848C38;
      }
      goto L_08848BC0;
    }
L_08848BC0:
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5876));
    goto L_08848BD0;
L_08848BD0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08848BEC;
      }
      goto L_08848BDC;
    }
L_08848BDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08848C00;
      }
      goto L_08848BEC;
    }
L_08848BEC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08848BD0;
      }
      goto L_08848BF8;
    }
L_08848BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08848C00;
L_08848C00:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08848C24;
      }
      goto L_08848C08;
    }
L_08848C08:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08848C18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31068));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848C18u) goto L_08848C18;
    return;
L_08848C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848C38;
      }
      goto L_08848C24;
    }
L_08848C24:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08848C30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848C30u) goto L_08848C30;
    return;
L_08848C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08848C38;
L_08848C38:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (17266u << 16u);
      if (branch_taken) {
          goto L_08848C5C;
      }
      goto L_08848C40;
    }
L_08848C40:
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08848C70;
      }
      goto L_08848C5C;
    }
L_08848C5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08848C70;
L_08848C70:
    ctx.gpr[5] = (17223u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17198u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848C90;
    }
L_08848C90:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_08848D00;
      }
      goto L_08848C98;
    }
L_08848C98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08848CC8;
      }
      goto L_08848CAC;
    }
L_08848CAC:
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08848CE0;
      }
      goto L_08848CC8;
    }
L_08848CC8:
    ctx.gpr[5] = (17266u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08848CE0;
L_08848CE0:
    ctx.gpr[5] = (17223u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848D00;
    }
L_08848D00:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_08848EA4;
      }
      goto L_08848D08;
    }
L_08848D08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08848D3C;
      }
      goto L_08848D1C;
    }
L_08848D1C:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08848D30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848D30u) goto L_08848D30;
    return;
L_08848D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848E3C;
      }
      goto L_08848D3C;
    }
L_08848D3C:
    ctx.gpr[5] = (0u | 83u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848D90;
      }
      goto L_08848D48;
    }
L_08848D48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08848D70;
      }
      goto L_08848D50;
    }
L_08848D50:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08848D64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848D64u) goto L_08848D64;
    return;
L_08848D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848E3C;
      }
      goto L_08848D70;
    }
L_08848D70:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08848D80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31068));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848D80u) goto L_08848D80;
    return;
L_08848D80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848E3C;
      }
      goto L_08848D90;
    }
L_08848D90:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5576));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08848DC4;
      }
      goto L_08848DA4;
    }
L_08848DA4:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08848DB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848DB8u) goto L_08848DB8;
    return;
L_08848DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848E3C;
      }
      goto L_08848DC4;
    }
L_08848DC4:
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5876));
    goto L_08848DD4;
L_08848DD4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08848DF0;
      }
      goto L_08848DE0;
    }
L_08848DE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08848E04;
      }
      goto L_08848DF0;
    }
L_08848DF0:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08848DD4;
      }
      goto L_08848DFC;
    }
L_08848DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08848E04;
L_08848E04:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08848E28;
      }
      goto L_08848E0C;
    }
L_08848E0C:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08848E1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31068));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848E1Cu) goto L_08848E1C;
    return;
L_08848E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08848E3C;
      }
      goto L_08848E28;
    }
L_08848E28:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08848E34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848E34u) goto L_08848E34;
    return;
L_08848E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08848E3C;
L_08848E3C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (17344u << 16u);
      if (branch_taken) {
          goto L_08848E68;
      }
      goto L_08848E44;
    }
L_08848E44:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17190u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08848E84;
      }
      goto L_08848E68;
    }
L_08848E68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08848E84;
L_08848E84:
    ctx.gpr[5] = (17080u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17090u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848EA4;
    }
L_08848EA4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08848F1C;
      }
      goto L_08848EAC;
    }
L_08848EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08848EDC;
      }
      goto L_08848EB8;
    }
L_08848EB8:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17190u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08848EFC;
      }
      goto L_08848EDC;
    }
L_08848EDC:
    ctx.gpr[5] = (17344u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08848EFC;
L_08848EFC:
    ctx.gpr[5] = (17080u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17090u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848F1C;
    }
L_08848F1C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[6] = (16928u << 16u);
      if (branch_taken) {
          goto L_08848F70;
      }
      goto L_08848F24;
    }
L_08848F24:
    ctx.gpr[31] = (0x08848F2Cu);
    // nop
    goto L_088487D0;
L_08848F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17042u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17126u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17174u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848F70;
    }
L_08848F70:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[6] = (17082u << 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08848FB8;
      }
      goto L_08848F84;
    }
L_08848F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17303u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17157u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088490AC;
      }
      goto L_08848FB8;
    }
L_08848FB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08848FE0;
      }
      goto L_08848FCC;
    }
L_08848FCC:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x08848FD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31088));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08848FD8u) goto L_08848FD8;
    return;
L_08848FD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08849080;
      }
      goto L_08848FE0;
    }
L_08848FE0:
    ctx.gpr[6] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08848FFC;
      }
      goto L_08848FEC;
    }
L_08848FEC:
    ctx.gpr[6] = (0u | 83u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[8] = (2221u << 16u);
      if (branch_taken) {
          goto L_08849010;
      }
      goto L_08848FF8;
    }
L_08848FF8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08848FFC;
L_08848FFC:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x08849008u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08849008u) goto L_08849008;
    return;
L_08849008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08849080;
      }
      goto L_08849010;
    }
L_08849010:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5576));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5876));
    goto L_08849028;
L_08849028:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08849044;
      }
      goto L_08849034;
    }
L_08849034:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08849058;
      }
      goto L_08849044;
    }
L_08849044:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08849028;
      }
      goto L_08849050;
    }
L_08849050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08849058;
L_08849058:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08849074;
      }
      goto L_08849060;
    }
L_08849060:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x0884906Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31068));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884906Cu) goto L_0884906C;
    return;
L_0884906C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08849080;
      }
      goto L_08849074;
    }
L_08849074:
    ctx.gpr[31] = (0x0884907Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884907Cu) goto L_0884907C;
    return;
L_0884907C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08849080;
L_08849080:
    ctx.gpr[5] = (17298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17167u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088490AC;
L_088490AC:
    ctx.gpr[31] = (0x088490B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08849498;
L_088490B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088490DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08849104;
      }
      goto L_088490FC;
    }
L_088490FC:
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088491C0;
    }
    goto L_08849104;
L_08849104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (16824u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17261u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_08849148;
    }
L_08849148:
    ctx.gpr[31] = (0x08849150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 278u, 0x0884D1F4u>(ctx, &aot_mem) && ctx.pc == 0x08849150u) goto L_08849150;
    return;
L_08849150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08849160u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 324u, 0x0884D474u>(ctx, &aot_mem) && ctx.pc == 0x08849160u) goto L_08849160;
    return;
L_08849160:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_0884916C;
    }
L_0884916C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08849178u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x08849178u) goto L_08849178;
    return;
L_08849178:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_08849180;
    }
L_08849180:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_088491C0;
    }
L_088491C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08849210;
      }
      goto L_088491C8;
    }
L_088491C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (16832u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16940u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17234u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_08849210;
    }
L_08849210:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08849280;
      }
      goto L_08849218;
    }
L_08849218:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (16952u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08849248;
      }
      goto L_0884922C;
    }
L_0884922C:
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08849260;
      }
      goto L_08849248;
    }
L_08849248:
    ctx.gpr[5] = (17266u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08849260;
L_08849260:
    ctx.gpr[5] = (17223u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17198u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_08849280;
    }
L_08849280:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088492F0;
      }
      goto L_08849288;
    }
L_08849288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_088492B8;
      }
      goto L_0884929C;
    }
L_0884929C:
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088492D0;
      }
      goto L_088492B8;
    }
L_088492B8:
    ctx.gpr[5] = (17266u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088492D0;
L_088492D0:
    ctx.gpr[5] = (17223u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_088492F0;
    }
L_088492F0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_08849368;
      }
      goto L_088492F8;
    }
L_088492F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08849328;
      }
      goto L_08849304;
    }
L_08849304:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17190u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08849348;
      }
      goto L_08849328;
    }
L_08849328:
    ctx.gpr[5] = (17344u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08849348;
L_08849348:
    ctx.gpr[5] = (17080u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17090u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_08849368;
    }
L_08849368:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_088493E0;
      }
      goto L_08849370;
    }
L_08849370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088493A0;
      }
      goto L_0884937C;
    }
L_0884937C:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17190u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088493C0;
      }
      goto L_088493A0;
    }
L_088493A0:
    ctx.gpr[5] = (17344u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088493C0;
L_088493C0:
    ctx.gpr[5] = (17080u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17090u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_088493E0;
    }
L_088493E0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_08849438;
      }
      goto L_088493E8;
    }
L_088493E8:
    ctx.gpr[31] = (0x088493F0u);
    // nop
    goto L_088487D0;
L_088493F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17042u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17126u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17174u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_08849438;
    }
L_08849438:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08849484;
      }
      goto L_08849440;
    }
L_08849440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17303u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17157u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17082u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_08849484;
L_08849484:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08849674;
      }
      goto L_088494BC;
    }
L_088494BC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0884954C;
      }
      goto L_088494C8;
    }
L_088494C8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (2221u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(5576));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[10] = (15928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (16172u << 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[11];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
      if (branch_taken) {
          goto L_0884952C;
      }
      goto L_088494F8;
    }
L_088494F8:
    ctx.gpr[10] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    ctx.gpr[10] = (0u | 12u);
      if (branch_taken) {
          goto L_0884952C;
      }
      goto L_08849504;
    }
L_08849504:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    ctx.gpr[10] = (0u | 39u);
      if (branch_taken) {
          goto L_0884952C;
      }
      goto L_0884950C;
    }
L_0884950C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    ctx.gpr[10] = (0u | 62u);
      if (branch_taken) {
          goto L_0884952C;
      }
      goto L_08849514;
    }
L_08849514:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    ctx.gpr[10] = (0u | 71u);
      if (branch_taken) {
          goto L_0884952C;
      }
      goto L_0884951C;
    }
L_0884951C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    ctx.gpr[10] = (0u | 72u);
      if (branch_taken) {
          goto L_0884952C;
      }
      goto L_08849524;
    }
L_08849524:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[10];
    ctx.gpr[6] = (16145u << 16u);
      if (branch_taken) {
          goto L_08849540;
      }
      goto L_0884952C;
    }
L_0884952C:
    ctx.gpr[6] = (15680u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16157u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08849568;
      }
      goto L_08849540;
    }
L_08849540:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08849568;
      }
      goto L_0884954C;
    }
L_0884954C:
    ctx.gpr[6] = (15360u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16244u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08849568;
L_08849568:
    if (ctx.gpr[8] != ctx.gpr[7]) {
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_088495F8;
    }
    goto L_08849570;
L_08849570:
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_088495F8;
    }
    goto L_08849578;
L_08849578:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088495F8:
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849674:
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_08849728;
      }
      goto L_08849680;
    }
L_08849680:
    ctx.gpr[6] = (16191u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 2621u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16235u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] | 19275u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16003u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] | 50116u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849728:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_08849884;
      }
      goto L_08849730;
    }
L_08849730:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08849760;
      }
      goto L_0884973C;
    }
L_0884973C:
    ctx.gpr[6] = (15424u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (15896u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16131u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16173u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08849778;
      }
      goto L_08849760;
    }
L_08849760:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (15856u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08849778;
L_08849778:
    if (ctx.gpr[8] != ctx.gpr[7]) {
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08849808;
    }
    goto L_08849780;
L_08849780:
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08849808;
    }
    goto L_08849788;
L_08849788:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849808:
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849884:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_08849938;
      }
      goto L_0884988C;
    }
L_0884988C:
    ctx.gpr[6] = (16186u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 43691u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16219u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 19275u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (16050u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] | 53971u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (15872u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849938:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_088499E8;
      }
      goto L_08849940;
    }
L_08849940:
    ctx.gpr[6] = (16207u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 3855u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (16192u << 16u);
    ctx.gpr[6] = (16069u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] | 42406u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (15872u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088499E8:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[6] = (16184u << 16u);
      if (branch_taken) {
          goto L_08849A98;
      }
      goto L_088499F0;
    }
L_088499F0:
    ctx.gpr[6] = (ctx.gpr[6] | 41943u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16241u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 2313u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (15894u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] | 38551u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (15744u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849A98:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[6] = (16269u << 16u);
      if (branch_taken) {
          goto L_08849B4C;
      }
      goto L_08849AA0;
    }
L_08849AA0:
    ctx.gpr[6] = (ctx.gpr[6] | 14854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16246u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 38551u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (15638u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] | 38551u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (15786u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 43691u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849B4C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08849B78;
      }
      goto L_08849B5C;
    }
L_08849B5C:
    ctx.gpr[6] = (15924u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16143u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16138u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08849B90;
      }
      goto L_08849B78;
    }
L_08849B78:
    ctx.gpr[6] = (15360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16244u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08849B90;
L_08849B90:
    if (ctx.gpr[8] != ctx.gpr[7]) {
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08849C20;
    }
    goto L_08849B98;
L_08849B98:
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08849C20;
    }
    goto L_08849BA0;
L_08849BA0:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849C20:
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849C9C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5568)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5572), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08849CE0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08849CE0u) goto L_08849CE0;
    return;
L_08849CE0:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(22664), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08849CF8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08849CF8u) goto L_08849CF8;
    return;
L_08849CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22664)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08849D14u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08849D14u) goto L_08849D14;
    return;
L_08849D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08849D30u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08849D30u) goto L_08849D30;
    return;
L_08849D30:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08849D40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6252));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08849D40u) goto L_08849D40;
    return;
L_08849D40:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08849D50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08849D50u) goto L_08849D50;
    return;
L_08849D50:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08849D64u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08849D64u) goto L_08849D64;
    return;
L_08849D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08849D74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08849D74u) goto L_08849D74;
    return;
L_08849D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[31] = (0x08849D80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08849D80u) goto L_08849D80;
    return;
L_08849D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08849E00;
      }
      goto L_08849DD0;
    }
L_08849DD0:
    ctx.gpr[31] = (0x08849DD8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08849DD8u) goto L_08849DD8;
    return;
L_08849DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[31] = (0x08849DE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08849DE4u) goto L_08849DE4;
    return;
L_08849DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08849DF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08849DF8u) goto L_08849DF8;
    return;
L_08849DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22664)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08849E00;
L_08849E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08849E10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08849E10u) goto L_08849E10;
    return;
L_08849E10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849E24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08849E50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31004));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08849E50u) goto L_08849E50;
    return;
L_08849E50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_08849E98;
      }
      goto L_08849E58;
    }
L_08849E58:
    ctx.gpr[31] = (0x08849E60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6248)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08849E60u) goto L_08849E60;
    return;
L_08849E60:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08849E74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6248)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08849E74u) goto L_08849E74;
    return;
L_08849E74:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22668)));
    ctx.gpr[31] = (0x08849E84u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(6248), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08849E84u) goto L_08849E84;
    return;
L_08849E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08849E94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22668)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08849E94u) goto L_08849E94;
    return;
L_08849E94:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(22668), 0u);
    goto L_08849E98;
L_08849E98:
    ctx.gpr[31] = (0x08849EA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08849EA0u) goto L_08849EA0;
    return;
L_08849EA0:
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
L_08849EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08849EDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31004));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08849EDCu) goto L_08849EDC;
    return;
L_08849EDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08849EEC;
      }
      goto L_08849EE4;
    }
L_08849EE4:
    ctx.gpr[31] = (0x08849EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6248)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08849EECu) goto L_08849EEC;
    return;
L_08849EEC:
    ctx.gpr[31] = (0x08849EF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08849EF4u) goto L_08849EF4;
    return;
L_08849EF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849F04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[8] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[8] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0884A2C8;
      }
      goto L_0884A028;
    }
L_0884A028:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0884A064;
      }
      goto L_0884A034;
    }
L_0884A034:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0884A22C;
      }
      goto L_0884A03C;
    }
L_0884A03C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884A23C;
      }
      goto L_0884A044;
    }
L_0884A044:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0884A24C;
      }
      goto L_0884A04C;
    }
L_0884A04C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0884A25C;
      }
      goto L_0884A054;
    }
L_0884A054:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30996));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884A2D0;
      }
      goto L_0884A064;
    }
L_0884A064:
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22668)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (2222u << 16u);
      if (branch_taken) {
          goto L_0884A0B4;
      }
      goto L_0884A074;
    }
L_0884A074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884A088u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A088u) goto L_0884A088;
    return;
L_0884A088:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(22668), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A09Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A09Cu) goto L_0884A09C;
    return;
L_0884A09C:
    ctx.gpr[31] = (0x0884A0A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22668)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x0884A0A4u) goto L_0884A0A4;
    return;
L_0884A0A4:
    ctx.gpr[31] = (0x0884A0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 345u, 0x089DE408u>(ctx, &aot_mem) && ctx.pc == 0x0884A0ACu) goto L_0884A0AC;
    return;
L_0884A0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22668)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0884A0B4;
L_0884A0B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31004));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884A0CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 368u, 0x089DE79Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A0CCu) goto L_0884A0CC;
    return;
L_0884A0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22668)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884A0DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 382u, 0x089DE8D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A0DCu) goto L_0884A0DC;
    return;
L_0884A0DC:
    ctx.gpr[31] = (0x0884A0E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22668)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0884A0E4u) goto L_0884A0E4;
    return;
L_0884A0E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22668)));
    ctx.gpr[5] = (16119u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 30583u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16186u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 53971u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16118u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 38551u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15965u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 56798u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884A198u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A198u) goto L_0884A198;
    return;
L_0884A198:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(6248), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A1B0u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A1B0u) goto L_0884A1B0;
    return;
L_0884A1B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6248)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0884A224u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6248)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0884A224u) goto L_0884A224;
    return;
L_0884A224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A2D0;
      }
      goto L_0884A22C;
    }
L_0884A22C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30984));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884A2D0;
      }
      goto L_0884A23C;
    }
L_0884A23C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30972));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884A2D0;
      }
      goto L_0884A24C;
    }
L_0884A24C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30964));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884A2D0;
      }
      goto L_0884A25C;
    }
L_0884A25C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A270u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A270u) goto L_0884A270;
    return;
L_0884A270:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30952));
      if (branch_taken) {
          goto L_0884A28C;
      }
      goto L_0884A280;
    }
L_0884A280:
    ctx.gpr[5] = (0u | 83u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884A2A4;
      }
      goto L_0884A28C;
    }
L_0884A28C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884A29Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884A29Cu) goto L_0884A29C;
    return;
L_0884A29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A2C0;
      }
      goto L_0884A2A4;
    }
L_0884A2A4:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5976));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884A2C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884A2C0u) goto L_0884A2C0;
    return;
L_0884A2C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0884A2D0;
      }
      goto L_0884A2C8;
    }
L_0884A2C8:
    ctx.gpr[31] = (0x0884A2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 194u, 0x08A9C9F0u>(ctx, &aot_mem) && ctx.pc == 0x0884A2D0u) goto L_0884A2D0;
    return;
L_0884A2D0:
    ctx.gpr[31] = (0x0884A2D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0884A2D8u) goto L_0884A2D8;
    return;
L_0884A2D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[9] = (2222u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(22664)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[11] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0884A6C8;
      }
      goto L_0884A3E4;
    }
L_0884A3E4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0884A420;
      }
      goto L_0884A3F0;
    }
L_0884A3F0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0884A62C;
      }
      goto L_0884A3F8;
    }
L_0884A3F8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884A63C;
      }
      goto L_0884A400;
    }
L_0884A400:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0884A64C;
      }
      goto L_0884A408;
    }
L_0884A408:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0884A65C;
      }
      goto L_0884A410;
    }
L_0884A410:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30996));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884A6D0;
      }
      goto L_0884A420;
    }
L_0884A420:
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22668)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2221u << 16u);
      if (branch_taken) {
          goto L_0884A474;
      }
      goto L_0884A430;
    }
L_0884A430:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884A448u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A448u) goto L_0884A448;
    return;
L_0884A448:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(22668), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A45Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A45Cu) goto L_0884A45C;
    return;
L_0884A45C:
    ctx.gpr[31] = (0x0884A464u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22668)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x0884A464u) goto L_0884A464;
    return;
L_0884A464:
    ctx.gpr[31] = (0x0884A46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 345u, 0x089DE408u>(ctx, &aot_mem) && ctx.pc == 0x0884A46Cu) goto L_0884A46C;
    return;
L_0884A46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22668)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0884A474;
L_0884A474:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31004));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884A488u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 368u, 0x089DE79Cu>(ctx, &aot_mem) && ctx.pc == 0x0884A488u) goto L_0884A488;
    return;
L_0884A488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22668)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884A498u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 382u, 0x089DE8D4u>(ctx, &aot_mem) && ctx.pc == 0x0884A498u) goto L_0884A498;
    return;
L_0884A498:
    ctx.gpr[31] = (0x0884A4A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22668)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0884A4A0u) goto L_0884A4A0;
    return;
L_0884A4A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22668)));
    ctx.gpr[5] = (16119u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 30583u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16186u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 53971u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16118u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 38551u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15965u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 56798u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0884A5F0;
      }
      goto L_0884A54C;
    }
L_0884A54C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884A560u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A560u) goto L_0884A560;
    return;
L_0884A560:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(6248), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A574u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A574u) goto L_0884A574;
    return;
L_0884A574:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0884A5E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0884A5E8u) goto L_0884A5E8;
    return;
L_0884A5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A6D0;
      }
      goto L_0884A5F0;
    }
L_0884A5F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0884A624u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(6248)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0884A624u) goto L_0884A624;
    return;
L_0884A624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A6D0;
      }
      goto L_0884A62C;
    }
L_0884A62C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30984));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884A6D0;
      }
      goto L_0884A63C;
    }
L_0884A63C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30972));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884A6D0;
      }
      goto L_0884A64C;
    }
L_0884A64C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30964));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884A6D0;
      }
      goto L_0884A65C;
    }
L_0884A65C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A670u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A670u) goto L_0884A670;
    return;
L_0884A670:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30952));
      if (branch_taken) {
          goto L_0884A68C;
      }
      goto L_0884A680;
    }
L_0884A680:
    ctx.gpr[5] = (0u | 83u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884A6A4;
      }
      goto L_0884A68C;
    }
L_0884A68C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884A69Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884A69Cu) goto L_0884A69C;
    return;
L_0884A69C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A6C0;
      }
      goto L_0884A6A4;
    }
L_0884A6A4:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5976));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884A6C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884A6C0u) goto L_0884A6C0;
    return;
L_0884A6C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0884A6D0;
      }
      goto L_0884A6C8;
    }
L_0884A6C8:
    ctx.gpr[31] = (0x0884A6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 194u, 0x08A9C9F0u>(ctx, &aot_mem) && ctx.pc == 0x0884A6D0u) goto L_0884A6D0;
    return;
L_0884A6D0:
    ctx.gpr[31] = (0x0884A6D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0884A6D8u) goto L_0884A6D8;
    return;
L_0884A6D8:
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
L_0884A708:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5968)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5972), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A71C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0884A75C;
      }
      goto L_0884A738;
    }
L_0884A738:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884A750u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A750u) goto L_0884A750;
    return;
L_0884A750:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6352), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0884A75C;
L_0884A75C:
    ctx.gpr[31] = (0x0884A764u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A764u) goto L_0884A764;
    return;
L_0884A764:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
        goto L_0884A7A0;
    }
    goto L_0884A794;
L_0884A794:
    ctx.gpr[31] = (0x0884A79Cu);
    // nop
    goto L_0884AA80;
L_0884A79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    goto L_0884A7A0;
L_0884A7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A7B4;
      }
      goto L_0884A7AC;
    }
L_0884A7AC:
    ctx.gpr[31] = (0x0884A7B4u);
    // nop
    goto L_0884ADE4;
L_0884A7B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884A7C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884A8F4;
      }
      goto L_0884A7F4;
    }
L_0884A7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_0884A8F4;
      }
      goto L_0884A800;
    }
L_0884A800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884A814u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A814u) goto L_0884A814;
    return;
L_0884A814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6352)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884A8F4;
      }
      goto L_0884A820;
    }
L_0884A820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884A834u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884A834u) goto L_0884A834;
    return;
L_0884A834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884A8F4;
      }
      goto L_0884A844;
    }
L_0884A844:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A854u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A854u) goto L_0884A854;
    return;
L_0884A854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A870u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A870u) goto L_0884A870;
    return;
L_0884A870:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884A884u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884A884u) goto L_0884A884;
    return;
L_0884A884:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6304));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6292)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884A8B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30708));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884A8B0u) goto L_0884A8B0;
    return;
L_0884A8B0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6300)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6356)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A8CCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x0884A8CCu) goto L_0884A8CC;
    return;
L_0884A8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x0884A8E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0884A8E4u) goto L_0884A8E4;
    return;
L_0884A8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0884A8F4;
L_0884A8F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AA80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884ABBC;
      }
      goto L_0884AAA0;
    }
L_0884AAA0:
    ctx.gpr[31] = (0x0884AAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 427u, 0x089863ACu>(ctx, &aot_mem) && ctx.pc == 0x0884AAA8u) goto L_0884AAA8;
    return;
L_0884AAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_0884AAD8;
      }
      goto L_0884AAB8;
    }
L_0884AAB8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884AAD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AAD0u) goto L_0884AAD0;
    return;
L_0884AAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_0884AAD8;
L_0884AAD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0884AB14;
    }
    goto L_0884AAE4;
L_0884AAE4:
    ctx.gpr[31] = (0x0884AAECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x0884AAECu) goto L_0884AAEC;
    return;
L_0884AAEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884AAFCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 102u, 0x089C0FD4u>(ctx, &aot_mem) && ctx.pc == 0x0884AAFCu) goto L_0884AAFC;
    return;
L_0884AAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[31] = (0x0884AB08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 187u, 0x089B4F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0884AB08u) goto L_0884AB08;
    return;
L_0884AB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0884AB14;
L_0884AB14:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0884AB78;
    }
    goto L_0884AB1C;
L_0884AB1C:
    ctx.gpr[31] = (0x0884AB24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0884AB24u) goto L_0884AB24;
    return;
L_0884AB24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0884AB54;
      }
      goto L_0884AB34;
    }
L_0884AB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0884AB58;
      }
      goto L_0884AB44;
    }
L_0884AB44:
    ctx.gpr[31] = (0x0884AB4Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x0884AB4Cu) goto L_0884AB4C;
    return;
L_0884AB4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_0884AB54;
L_0884AB54:
    ctx.gpr[4] = (2222u << 16u);
    goto L_0884AB58;
L_0884AB58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884AB6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AB6Cu) goto L_0884AB6C;
    return;
L_0884AB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0884AB78;
L_0884AB78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884ABBC;
      }
      goto L_0884AB80;
    }
L_0884AB80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0884ABA4;
      }
      goto L_0884AB90;
    }
L_0884AB90:
    ctx.gpr[31] = (0x0884AB98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0884AB98u) goto L_0884AB98;
    return;
L_0884AB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2222u << 16u);
    goto L_0884ABA4;
L_0884ABA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884ABB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884ABB4u) goto L_0884ABB4;
    return;
L_0884ABB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_0884ABBC;
L_0884ABBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884ADE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
        goto L_0884AE60;
    }
    goto L_0884AE04;
L_0884AE04:
    ctx.gpr[31] = (0x0884AE0Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0884AE0Cu) goto L_0884AE0C;
    return;
L_0884AE0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0884AE3C;
      }
      goto L_0884AE1C;
    }
L_0884AE1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0884AE40;
      }
      goto L_0884AE2C;
    }
L_0884AE2C:
    ctx.gpr[31] = (0x0884AE34u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x0884AE34u) goto L_0884AE34;
    return;
L_0884AE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_0884AE3C;
L_0884AE3C:
    ctx.gpr[4] = (2222u << 16u);
    goto L_0884AE40;
L_0884AE40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884AE54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AE54u) goto L_0884AE54;
    return;
L_0884AE54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_0884AE60;
L_0884AE60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884AEA4;
      }
      goto L_0884AE68;
    }
L_0884AE68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0884AE8C;
      }
      goto L_0884AE78;
    }
L_0884AE78:
    ctx.gpr[31] = (0x0884AE80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0884AE80u) goto L_0884AE80;
    return;
L_0884AE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2222u << 16u);
    goto L_0884AE8C;
L_0884AE8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884AE9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884AE9Cu) goto L_0884AE9C;
    return;
L_0884AE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    goto L_0884AEA4;
L_0884AEA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AEB4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AEC4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AED4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884AEE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0884AF30;
      }
      goto L_0884AF20;
    }
L_0884AF20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884B170;
      }
      goto L_0884AF28;
    }
L_0884AF28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884AF44;
      }
      goto L_0884AF30;
    }
L_0884AF30:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0884B170;
    }
    goto L_0884AF3C;
L_0884AF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B170;
      }
      goto L_0884AF44;
    }
L_0884AF44:
    ctx.gpr[31] = (0x0884AF4Cu);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x0884AF4Cu) goto L_0884AF4C;
    return;
L_0884AF4C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884B170;
      }
      goto L_0884AF58;
    }
L_0884AF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884AF74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x0884AF74u) goto L_0884AF74;
    return;
L_0884AF74:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884AF88u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884AF88u) goto L_0884AF88;
    return;
L_0884AF88:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884AF9Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884AF9Cu) goto L_0884AF9C;
    return;
L_0884AF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(6304));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30700));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6288)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884AFD4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884AFD4u) goto L_0884AFD4;
    return;
L_0884AFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884AFE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0884AFE8u) goto L_0884AFE8;
    return;
L_0884AFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884B000u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0884B000u) goto L_0884B000;
    return;
L_0884B000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884B010u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B010u) goto L_0884B010;
    return;
L_0884B010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[31] = (0x0884B01Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0884B01Cu) goto L_0884B01C;
    return;
L_0884B01C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884B02Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884B02Cu) goto L_0884B02C;
    return;
L_0884B02C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884B040u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884B040u) goto L_0884B040;
    return;
L_0884B040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884B068u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30692));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0884B068u) goto L_0884B068;
    return;
L_0884B068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884B07Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0884B07Cu) goto L_0884B07C;
    return;
L_0884B07C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884B094u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0884B094u) goto L_0884B094;
    return;
L_0884B094:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0884B0A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 381u, 0x089D26B8u>(ctx, &aot_mem) && ctx.pc == 0x0884B0A4u) goto L_0884B0A4;
    return;
L_0884B0A4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_0884B170;
      }
      goto L_0884B0B0;
    }
L_0884B0B0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884B0C0u);
    ctx.gpr[5] = (0u | 433u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 288u, 0x089CD600u>(ctx, &aot_mem) && ctx.pc == 0x0884B0C0u) goto L_0884B0C0;
    return;
L_0884B0C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0884B0E8;
      }
      goto L_0884B0C8;
    }
L_0884B0C8:
    ctx.gpr[31] = (0x0884B0D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 461u, 0x089866BCu>(ctx, &aot_mem) && ctx.pc == 0x0884B0D0u) goto L_0884B0D0;
    return;
L_0884B0D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x0884B0E8u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 356u, 0x089D258Cu>(ctx, &aot_mem) && ctx.pc == 0x0884B0E8u) goto L_0884B0E8;
    return;
L_0884B0E8:
    ctx.gpr[31] = (0x0884B0F0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 191u, 0x089B4FCCu>(ctx, &aot_mem) && ctx.pc == 0x0884B0F0u) goto L_0884B0F0;
    return;
L_0884B0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0884B120u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 139u, 0x089B49F8u>(ctx, &aot_mem) && ctx.pc == 0x0884B120u) goto L_0884B120;
    return;
L_0884B120:
    ctx.gpr[31] = (0x0884B128u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x0884B128u) goto L_0884B128;
    return;
L_0884B128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884B138u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 95u, 0x089C0F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0884B138u) goto L_0884B138;
    return;
L_0884B138:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B150u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B150u) goto L_0884B150;
    return;
L_0884B150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884B168u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884B168u) goto L_0884B168;
    return;
L_0884B168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B170;
      }
      goto L_0884B170;
    }
L_0884B170:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B198:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6296)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6300), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B1AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884B1D8u);
    // nop
    goto L_0884AEB4;
L_0884B1D8:
    ctx.gpr[31] = (0x0884B1E0u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_0884AEC4;
L_0884B1E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[31] = (0x0884B200u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 745u, 0x08987BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884B200u) goto L_0884B200;
    return;
L_0884B200:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0884B214u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 590u, 0x0898F7B8u>(ctx, &aot_mem) && ctx.pc == 0x0884B214u) goto L_0884B214;
    return;
L_0884B214:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (17288u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0884B26C;
    }
    goto L_0884B26C;
L_0884B26C:
    ctx.gpr[31] = (0x0884B274u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 662u, 0x08987660u>(ctx, &aot_mem) && ctx.pc == 0x0884B274u) goto L_0884B274;
    return;
L_0884B274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0884B2C4u);
    ctx.fpr[22] = ctx.fpr[14] + ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 270u, 0x0899550Cu>(ctx, &aot_mem) && ctx.pc == 0x0884B2C4u) goto L_0884B2C4;
    return;
L_0884B2C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0884B2D4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 273u, 0x0899555Cu>(ctx, &aot_mem) && ctx.pc == 0x0884B2D4u) goto L_0884B2D4;
    return;
L_0884B2D4:
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884B2E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18700));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 10u, 0x089880B0u>(ctx, &aot_mem) && ctx.pc == 0x0884B2E4u) goto L_0884B2E4;
    return;
L_0884B2E4:
    ctx.gpr[31] = (0x0884B2ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 610u, 0x08997384u>(ctx, &aot_mem) && ctx.pc == 0x0884B2ECu) goto L_0884B2EC;
    return;
L_0884B2EC:
    ctx.gpr[31] = (0x0884B2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 585u, 0x0898F5A4u>(ctx, &aot_mem) && ctx.pc == 0x0884B2F4u) goto L_0884B2F4;
    return;
L_0884B2F4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884B344u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884AEB4;
L_0884B344:
    ctx.gpr[31] = (0x0884B34Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_0884AEC4;
L_0884B34C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0884B35Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 699u, 0x089878D8u>(ctx, &aot_mem) && ctx.pc == 0x0884B35Cu) goto L_0884B35C;
    return;
L_0884B35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884B374;
      }
      goto L_0884B36C;
    }
L_0884B36C:
    ctx.gpr[31] = (0x0884B374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 613u, 0x08987228u>(ctx, &aot_mem) && ctx.pc == 0x0884B374u) goto L_0884B374;
    return;
L_0884B374:
    ctx.gpr[31] = (0x0884B37Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 307u, 0x08985B98u>(ctx, &aot_mem) && ctx.pc == 0x0884B37Cu) goto L_0884B37C;
    return;
L_0884B37C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B3DCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B3DCu) goto L_0884B3DC;
    return;
L_0884B3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (0u | 6u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B3F4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B3F4u) goto L_0884B3F4;
    return;
L_0884B3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (0u | 7u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B40Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B40Cu) goto L_0884B40C;
    return;
L_0884B40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (0u | 9u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B424u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B424u) goto L_0884B424;
    return;
L_0884B424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u | 12u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B43Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B43Cu) goto L_0884B43C;
    return;
L_0884B43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (0u | 20u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B454u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B454u) goto L_0884B454;
    return;
L_0884B454:
    ctx.gpr[31] = (0x0884B45Cu);
    // nop
    goto L_0884AEB4;
L_0884B45C:
    ctx.gpr[31] = (0x0884B464u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_0884AEC4;
L_0884B464:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B5D4;
      }
      goto L_0884B474;
    }
L_0884B474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B488u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B488u) goto L_0884B488;
    return;
L_0884B488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B49Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B49Cu) goto L_0884B49C;
    return;
L_0884B49C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B4B0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B4B0u) goto L_0884B4B0;
    return;
L_0884B4B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B4C4u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B4C4u) goto L_0884B4C4;
    return;
L_0884B4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B4D8u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B4D8u) goto L_0884B4D8;
    return;
L_0884B4D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B4ECu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B4ECu) goto L_0884B4EC;
    return;
L_0884B4EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B500u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B500u) goto L_0884B500;
    return;
L_0884B500:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B514u);
    ctx.gpr[5] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B514u) goto L_0884B514;
    return;
L_0884B514:
    ctx.gpr[31] = (0x0884B51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 6u, 0x08990074u>(ctx, &aot_mem) && ctx.pc == 0x0884B51Cu) goto L_0884B51C;
    return;
L_0884B51C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B554;
      }
      goto L_0884B524;
    }
L_0884B524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B544;
      }
      goto L_0884B530;
    }
L_0884B530:
    ctx.gpr[31] = (0x0884B538u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 662u, 0x08987660u>(ctx, &aot_mem) && ctx.pc == 0x0884B538u) goto L_0884B538;
    return;
L_0884B538:
    ctx.gpr[31] = (0x0884B540u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 269u, 0x08995480u>(ctx, &aot_mem) && ctx.pc == 0x0884B540u) goto L_0884B540;
    return;
L_0884B540:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0884B544;
L_0884B544:
    ctx.gpr[31] = (0x0884B54Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 740u, 0x08987B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884B54Cu) goto L_0884B54C;
    return;
L_0884B54C:
    ctx.gpr[31] = (0x0884B554u);
    ctx.gpr[4] = (0u | 6u);
    ctx.pc = 0x08AB44E4u;
    return;
L_0884B554:
    ctx.gpr[31] = (0x0884B55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 26u, 0x08990394u>(ctx, &aot_mem) && ctx.pc == 0x0884B55Cu) goto L_0884B55C;
    return;
L_0884B55C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B570u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B570u) goto L_0884B570;
    return;
L_0884B570:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B584u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B584u) goto L_0884B584;
    return;
L_0884B584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B598u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B598u) goto L_0884B598;
    return;
L_0884B598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B5ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B5ACu) goto L_0884B5AC;
    return;
L_0884B5AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B5C0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B5C0u) goto L_0884B5C0;
    return;
L_0884B5C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B5D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B5D4u) goto L_0884B5D4;
    return;
L_0884B5D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884B61Cu);
    // nop
    goto L_0884AEB4;
L_0884B61C:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18828));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884B638u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 599u, 0x08986FA0u>(ctx, &aot_mem) && ctx.pc == 0x0884B638u) goto L_0884B638;
    return;
L_0884B638:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884B648u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 699u, 0x089878D8u>(ctx, &aot_mem) && ctx.pc == 0x0884B648u) goto L_0884B648;
    return;
L_0884B648:
    ctx.gpr[31] = (0x0884B650u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 613u, 0x08987228u>(ctx, &aot_mem) && ctx.pc == 0x0884B650u) goto L_0884B650;
    return;
L_0884B650:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884B660u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 599u, 0x08986FA0u>(ctx, &aot_mem) && ctx.pc == 0x0884B660u) goto L_0884B660;
    return;
L_0884B660:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884B6BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 303u, 0x08985B44u>(ctx, &aot_mem) && ctx.pc == 0x0884B6BCu) goto L_0884B6BC;
    return;
L_0884B6BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884B6C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 238u, 0x08981A98u>(ctx, &aot_mem) && ctx.pc == 0x0884B6C8u) goto L_0884B6C8;
    return;
L_0884B6C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884B6D8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 248u, 0x08981B74u>(ctx, &aot_mem) && ctx.pc == 0x0884B6D8u) goto L_0884B6D8;
    return;
L_0884B6D8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B6F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0884B754;
      }
      goto L_0884B71C;
    }
L_0884B71C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30656)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B734:
    ctx.gpr[31] = (0x0884B73Cu);
    // nop
    goto L_0884AEC4;
L_0884B73C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884B754;
      }
      goto L_0884B748;
    }
L_0884B748:
    ctx.gpr[31] = (0x0884B750u);
    // nop
    goto L_0884AEC4;
L_0884B750:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    goto L_0884B754;
L_0884B754:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884B760u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 100u, 0x08988680u>(ctx, &aot_mem) && ctx.pc == 0x0884B760u) goto L_0884B760;
    return;
L_0884B760:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B774:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6360)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6364), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884B79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 511u, 0x0894B874u>(ctx, &aot_mem) && ctx.pc == 0x0884B79Cu) goto L_0884B79C;
    return;
L_0884B79C:
    ctx.gpr[31] = (0x0884B7A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0884B7A4u) goto L_0884B7A4;
    return;
L_0884B7A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_0884B7B4;
      }
      goto L_0884B7AC;
    }
L_0884B7AC:
    ctx.gpr[31] = (0x0884B7B4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 463u, 0x08805F78u>(ctx, &aot_mem) && ctx.pc == 0x0884B7B4u) goto L_0884B7B4;
    return;
L_0884B7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0884B7E4;
      }
      goto L_0884B7C0;
    }
L_0884B7C0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 296u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B7D8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B7D8u) goto L_0884B7D8;
    return;
L_0884B7D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6484), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0884B7E4;
L_0884B7E4:
    ctx.gpr[31] = (0x0884B7ECu);
    ctx.gpr[6] = (0u | 296u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884B7ECu) goto L_0884B7EC;
    return;
L_0884B7EC:
    ctx.gpr[31] = (0x0884B7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 303u, 0x08845678u>(ctx, &aot_mem) && ctx.pc == 0x0884B7F4u) goto L_0884B7F4;
    return;
L_0884B7F4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884B81Cu);
    // nop
    goto L_0884A71C;
L_0884B81C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0884B834u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    goto L_0884BE14;
L_0884B834:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884B84Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B84Cu) goto L_0884B84C;
    return;
L_0884B84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), 0u);
    ctx.gpr[31] = (0x0884B868u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x0884B868u) goto L_0884B868;
    return;
L_0884B868:
    ctx.gpr[31] = (0x0884B870u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 173u, 0x0884CB80u>(ctx, &aot_mem) && ctx.pc == 0x0884B870u) goto L_0884B870;
    return;
L_0884B870:
    ctx.gpr[31] = (0x0884B878u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 418u, 0x088422A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B878u) goto L_0884B878;
    return;
L_0884B878:
    ctx.gpr[31] = (0x0884B880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 427u, 0x0884DAD8u>(ctx, &aot_mem) && ctx.pc == 0x0884B880u) goto L_0884B880;
    return;
L_0884B880:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884B894;
      }
      goto L_0884B88C;
    }
L_0884B88C:
    ctx.gpr[31] = (0x0884B894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 441u, 0x08846768u>(ctx, &aot_mem) && ctx.pc == 0x0884B894u) goto L_0884B894;
    return;
L_0884B894:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884B8A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B988;
      }
      goto L_0884B8CC;
    }
L_0884B8CC:
    ctx.gpr[31] = (0x0884B8D4u);
    // nop
    goto L_0884BF90;
L_0884B8D4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0884B8E0;
L_0884B8E0:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0884B908;
    }
    goto L_0884B8F0;
L_0884B8F0:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0884B8F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B8F8u) goto L_0884B8F8;
    return;
L_0884B8F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0884B908;
L_0884B908:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884B8E0;
      }
      goto L_0884B914;
    }
L_0884B914:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4588)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B93C;
      }
      goto L_0884B924;
    }
L_0884B924:
    ctx.gpr[31] = (0x0884B92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 203u, 0x088BD634u>(ctx, &aot_mem) && ctx.pc == 0x0884B92Cu) goto L_0884B92C;
    return;
L_0884B92C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B93C;
      }
      goto L_0884B934;
    }
L_0884B934:
    ctx.gpr[31] = (0x0884B93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 266u, 0x088BDA28u>(ctx, &aot_mem) && ctx.pc == 0x0884B93Cu) goto L_0884B93C;
    return;
L_0884B93C:
    ctx.gpr[31] = (0x0884B944u);
    // nop
    goto L_0884A774;
L_0884B944:
    ctx.gpr[31] = (0x0884B94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 417u, 0x08842298u>(ctx, &aot_mem) && ctx.pc == 0x0884B94Cu) goto L_0884B94C;
    return;
L_0884B94C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884B970;
      }
      goto L_0884B958;
    }
L_0884B958:
    ctx.gpr[31] = (0x0884B960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 445u, 0x0884685Cu>(ctx, &aot_mem) && ctx.pc == 0x0884B960u) goto L_0884B960;
    return;
L_0884B960:
    ctx.gpr[31] = (0x0884B968u);
    // nop
    goto L_08849DA8;
L_0884B968:
    ctx.gpr[31] = (0x0884B970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 51u, 0x088404B0u>(ctx, &aot_mem) && ctx.pc == 0x0884B970u) goto L_0884B970;
    return;
L_0884B970:
    ctx.gpr[31] = (0x0884B978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 856u, 0x088379ECu>(ctx, &aot_mem) && ctx.pc == 0x0884B978u) goto L_0884B978;
    return;
L_0884B978:
    ctx.gpr[31] = (0x0884B980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 305u, 0x08845698u>(ctx, &aot_mem) && ctx.pc == 0x0884B980u) goto L_0884B980;
    return;
L_0884B980:
    ctx.gpr[31] = (0x0884B988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 511u, 0x0894B874u>(ctx, &aot_mem) && ctx.pc == 0x0884B988u) goto L_0884B988;
    return;
L_0884B988:
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
L_0884B9A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0884BA80;
      }
      goto L_0884B9DC;
    }
L_0884B9DC:
    ctx.gpr[31] = (0x0884B9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 98u, 0x0884C644u>(ctx, &aot_mem) && ctx.pc == 0x0884B9E4u) goto L_0884B9E4;
    return;
L_0884B9E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BA1C;
      }
      goto L_0884B9EC;
    }
L_0884B9EC:
    ctx.gpr[31] = (0x0884B9F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0884B9F4u) goto L_0884B9F4;
    return;
L_0884B9F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2184u << 16u);
      if (branch_taken) {
          goto L_0884BA44;
      }
      goto L_0884B9FC;
    }
L_0884B9FC:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29452));
    ctx.gpr[31] = (0x0884BA14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29708));
    goto L_0884BC14;
L_0884BA14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BA58;
      }
      goto L_0884BA1C;
    }
L_0884BA1C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BA44:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17788));
    ctx.gpr[31] = (0x0884BA58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18076));
    goto L_0884BC14;
L_0884BA58:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BA80:
    ctx.gpr[31] = (0x0884BA88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x0884BA88u) goto L_0884BA88;
    return;
L_0884BA88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6484)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884BA9Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C468u>(ctx, &aot_mem) && ctx.pc == 0x0884BA9Cu) goto L_0884BA9C;
    return;
L_0884BA9C:
    ctx.gpr[31] = (0x0884BAA4u);
    // nop
    goto L_0884BF90;
L_0884BAA4:
    ctx.gpr[31] = (0x0884BAACu);
    // nop
    goto L_0884BEF8;
L_0884BAAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884BAB8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1u, 0x0884C004u>(ctx, &aot_mem) && ctx.pc == 0x0884BAB8u) goto L_0884BAB8;
    return;
L_0884BAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_0884BB6C;
    }
    goto L_0884BACC;
L_0884BACC:
    ctx.gpr[31] = (0x0884BAD4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x0884BAD4u) goto L_0884BAD4;
    return;
L_0884BAD4:
    ctx.gpr[31] = (0x0884BADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 174u, 0x0884CB90u>(ctx, &aot_mem) && ctx.pc == 0x0884BADCu) goto L_0884BADC;
    return;
L_0884BADC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_0884BB2C;
      }
      goto L_0884BAE4;
    }
L_0884BAE4:
    ctx.gpr[31] = (0x0884BAECu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x0884BAECu) goto L_0884BAEC;
    return;
L_0884BAEC:
    ctx.gpr[31] = (0x0884BAF4u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x0884BAF4u) goto L_0884BAF4;
    return;
L_0884BAF4:
    ctx.gpr[31] = (0x0884BAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 551u, 0x08883528u>(ctx, &aot_mem) && ctx.pc == 0x0884BAFCu) goto L_0884BAFC;
    return;
L_0884BAFC:
    ctx.gpr[31] = (0x0884BB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 554u, 0x088470D0u>(ctx, &aot_mem) && ctx.pc == 0x0884BB04u) goto L_0884BB04;
    return;
L_0884BB04:
    ctx.gpr[31] = (0x0884BB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 856u, 0x088379ECu>(ctx, &aot_mem) && ctx.pc == 0x0884BB0Cu) goto L_0884BB0C;
    return;
L_0884BB0C:
    ctx.gpr[31] = (0x0884BB14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 463u, 0x08805F78u>(ctx, &aot_mem) && ctx.pc == 0x0884BB14u) goto L_0884BB14;
    return;
L_0884BB14:
    ctx.gpr[31] = (0x0884BB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 493u, 0x08806140u>(ctx, &aot_mem) && ctx.pc == 0x0884BB1Cu) goto L_0884BB1C;
    return;
L_0884BB1C:
    ctx.gpr[31] = (0x0884BB24u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 173u, 0x0884CB80u>(ctx, &aot_mem) && ctx.pc == 0x0884BB24u) goto L_0884BB24;
    return;
L_0884BB24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0884BB6C;
      }
      goto L_0884BB2C;
    }
L_0884BB2C:
    ctx.gpr[31] = (0x0884BB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 174u, 0x0884CB90u>(ctx, &aot_mem) && ctx.pc == 0x0884BB34u) goto L_0884BB34;
    return;
L_0884BB34:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6484)));
        goto L_0884BB60;
    }
    goto L_0884BB3C;
L_0884BB3C:
    ctx.gpr[31] = (0x0884BB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 736u, 0x08806F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BB44u) goto L_0884BB44;
    return;
L_0884BB44:
    if (ctx.gpr[2] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_0884BB6C;
    }
    goto L_0884BB4C;
L_0884BB4C:
    ctx.gpr[31] = (0x0884BB54u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 173u, 0x0884CB80u>(ctx, &aot_mem) && ctx.pc == 0x0884BB54u) goto L_0884BB54;
    return;
L_0884BB54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0884BB6C;
      }
      goto L_0884BB5C;
    }
L_0884BB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6484)));
    goto L_0884BB60;
L_0884BB60:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_0884BB6C;
L_0884BB6C:
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BB98;
      }
      goto L_0884BB78;
    }
L_0884BB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0884BB98;
      }
      goto L_0884BB88;
    }
L_0884BB88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6492)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(6492), ctx.gpr[5]);
    goto L_0884BB98;
L_0884BB98:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BBC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884BBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 6u, 0x0884C084u>(ctx, &aot_mem) && ctx.pc == 0x0884BBD0u) goto L_0884BBD0;
    return;
L_0884BBD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BBDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884BBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 12u, 0x0884C0E8u>(ctx, &aot_mem) && ctx.pc == 0x0884BBECu) goto L_0884BBEC;
    return;
L_0884BBEC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6492)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_0884BC08;
      }
      goto L_0884BC00;
    }
L_0884BC00:
    ctx.gpr[31] = (0x0884BC08u);
    ctx.gpr[5] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 258u, 0x088217BCu>(ctx, &aot_mem) && ctx.pc == 0x0884BC08u) goto L_0884BC08;
    return;
L_0884BC08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BC14:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884BC40;
      }
      goto L_0884BC30;
    }
L_0884BC30:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    goto L_0884BC40;
L_0884BC40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BC60:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884BC98;
      }
      goto L_0884BC7C;
    }
L_0884BC7C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BC98;
      }
      goto L_0884BC94;
    }
L_0884BC94:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), 0u);
    goto L_0884BC98;
L_0884BC98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BCB8:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(136)));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
        goto L_0884BCDC;
    }
    goto L_0884BCD4;
L_0884BCD4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BCDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BCE4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BCFC:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
        goto L_0884BD20;
    }
    goto L_0884BD18;
L_0884BD18:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BD20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BD28:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
        goto L_0884BD4C;
    }
    goto L_0884BD44;
L_0884BD44:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BD4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BD54:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BD6C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BD84:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[4] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BD98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884BDBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30172));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0884BDBCu) goto L_0884BDBC;
    return;
L_0884BDBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0884BDD4;
      }
      goto L_0884BDC4;
    }
L_0884BDC4:
    ctx.gpr[31] = (0x0884BDCCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881F898u>(ctx, &aot_mem) && ctx.pc == 0x0884BDCCu) goto L_0884BDCC;
    return;
L_0884BDCC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    goto L_0884BDD4;
L_0884BDD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884BDE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30164));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0884BDE0u) goto L_0884BDE0;
    return;
L_0884BDE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884BDF8;
      }
      goto L_0884BDE8;
    }
L_0884BDE8:
    ctx.gpr[31] = (0x0884BDF0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881F898u>(ctx, &aot_mem) && ctx.pc == 0x0884BDF0u) goto L_0884BDF0;
    return;
L_0884BDF0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u | 0u);
    goto L_0884BDF8;
L_0884BDF8:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0884BE00;
    }
    goto L_0884BE00;
L_0884BE00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BE14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884BE28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1003u, 0x0881FF70u>(ctx, &aot_mem) && ctx.pc == 0x0884BE28u) goto L_0884BE28;
    return;
L_0884BE28:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0884BE3Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(272), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x0884BE3Cu) goto L_0884BE3C;
    return;
L_0884BE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BE58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4588)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_0884BEA4;
      }
      goto L_0884BE74;
    }
L_0884BE74:
    ctx.gpr[31] = (0x0884BE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 508u, 0x08946754u>(ctx, &aot_mem) && ctx.pc == 0x0884BE7Cu) goto L_0884BE7C;
    return;
L_0884BE7C:
    ctx.gpr[31] = (0x0884BE84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884BE84u) goto L_0884BE84;
    return;
L_0884BE84:
    ctx.gpr[31] = (0x0884BE8Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884BE8Cu) goto L_0884BE8C;
    return;
L_0884BE8C:
    ctx.gpr[31] = (0x0884BE94u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 96u, 0x0882072Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BE94u) goto L_0884BE94;
    return;
L_0884BE94:
    ctx.gpr[31] = (0x0884BE9Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 96u, 0x0882072Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BE9Cu) goto L_0884BE9C;
    return;
L_0884BE9C:
    ctx.gpr[31] = (0x0884BEA4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 775u, 0x0893BA44u>(ctx, &aot_mem) && ctx.pc == 0x0884BEA4u) goto L_0884BEA4;
    return;
L_0884BEA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(276), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_0884BEE8;
      }
      goto L_0884BEB8;
    }
L_0884BEB8:
    ctx.gpr[31] = (0x0884BEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 280u, 0x0882D114u>(ctx, &aot_mem) && ctx.pc == 0x0884BEC0u) goto L_0884BEC0;
    return;
L_0884BEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884BED8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BED8u) goto L_0884BED8;
    return;
L_0884BED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0884BEE8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(264), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 961u, 0x0881FBD0u>(ctx, &aot_mem) && ctx.pc == 0x0884BEE8u) goto L_0884BEE8;
    return;
L_0884BEE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884BEF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    goto L_0884BF20;
L_0884BF20:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0884BF4C;
    }
    goto L_0884BF30;
L_0884BF30:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0884BF38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BF38u) goto L_0884BF38;
    return;
L_0884BF38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0884BF4C;
L_0884BF4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884BF20;
      }
      goto L_0884BF58;
    }
L_0884BF58:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884BF78;
      }
      goto L_0884BF64;
    }
L_0884BF64:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0884BF6C;
L_0884BF6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BF6C;
      }
      goto L_0884BF78;
    }
L_0884BF78:
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
L_0884BF90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    goto L_0884BFB4;
L_0884BFB4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0884BFDC;
    }
    goto L_0884BFC4;
L_0884BFC4:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0884BFCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BFCCu) goto L_0884BFCC;
    return;
L_0884BFCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6484)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0884BFDC;
L_0884BFDC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884BFB4;
      }
      goto L_0884BFE8;
    }
L_0884BFE8:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
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
}

void recomp_unit_0017(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0017_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_17(Runtime &runtime) {
    runtime.register_generated_unit(17u, 0x08848000u, 16384u, &recomp_unit_0017, &recomp_unit_0017_entry);
    runtime.register_function(0x08848004u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848014u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884802Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848038u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848040u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848048u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848058u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848060u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848080u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848108u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848110u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848134u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884813Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848148u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884814Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884816Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884818Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848198u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848210u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848218u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848244u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848248u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848260u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848304u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848308u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848348u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848358u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848364u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884836Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848374u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884837Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848394u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848410u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884841Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848424u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848430u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884843Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884844Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848458u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848478u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848484u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848498u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848500u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884850Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884851Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848528u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848578u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884858Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848594u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848608u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848618u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848628u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848634u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884863Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884864Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848658u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848660u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848668u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848678u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848680u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884868Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848694u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848704u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848728u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848730u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848738u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848744u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848754u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884875Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848764u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884876Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884877Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848784u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884878Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848794u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848808u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848814u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884882Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848840u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848848u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848854u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884889Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848900u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884890Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884891Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848930u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848940u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848944u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848950u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884895Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AC8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CC8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848EA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848EACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848EB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848EDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848EFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849008u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849010u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849028u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849034u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849044u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849050u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849058u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849060u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884906Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849074u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884907Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849080u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849104u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849148u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849150u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849160u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884916Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849178u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849180u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849210u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849218u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884922Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849248u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849260u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849280u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849288u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884929Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849304u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849328u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849348u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849368u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849370u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884937Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849438u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849440u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849484u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849498u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849504u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884950Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849514u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884951Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849524u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884952Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849540u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884954Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849568u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849570u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849578u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849674u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849680u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849728u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849730u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884973Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849760u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849778u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849780u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849788u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849808u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849884u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884988Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849938u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849940u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A028u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A034u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A03Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A044u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A04Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A054u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A064u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A074u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A088u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A09Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A198u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A224u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A22Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A23Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A24Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A25Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A270u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A280u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A28Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A29Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A308u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A400u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A408u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A410u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A420u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A430u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A448u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A45Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A464u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A46Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A474u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A488u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A498u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A54Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A560u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A574u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A624u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A62Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A63Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A64Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A65Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A670u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A680u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A68Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A69Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A708u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A71Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A738u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A750u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A75Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A764u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A774u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A794u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A79Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A800u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A814u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A820u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A834u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A844u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A854u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A870u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A884u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AEA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AEB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AEC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AED4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AEE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B000u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B010u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B01Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B02Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B040u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B068u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B07Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B094u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B120u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B128u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B138u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B150u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B168u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B170u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B198u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B200u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B214u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B26Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B274u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B328u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B344u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B34Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B35Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B36Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B374u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B37Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B394u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B40Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B424u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B43Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B454u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B45Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B464u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B474u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B488u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B49Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B500u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B514u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B51Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B524u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B530u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B538u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B540u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B544u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B54Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B554u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B55Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B570u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B584u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B598u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B604u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B61Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B638u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B648u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B650u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B660u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B674u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B71Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B734u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B73Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B748u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B750u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B754u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B760u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B774u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B788u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B79Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B808u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B81Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B834u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B84Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B868u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B870u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B878u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B880u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B88Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B894u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B908u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B914u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B924u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B92Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B934u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B93Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B944u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B94Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B958u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B960u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B968u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B970u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B978u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B980u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B988u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BACCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BADCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BED8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFE8u, &recomp_unit_0017, "recomp_unit_0017");
}
} // namespace psprecomp

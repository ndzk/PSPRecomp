#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0163[3833] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0,
    9, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0,
    0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 47, 0, 48, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 72, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 98, 0, 99, 0,
    100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 162,
    0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 167, 0, 168, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0,
    0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0,
    0, 199, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209,
    0, 0, 210, 0, 0, 211, 0, 0, 212, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 220, 0, 0, 221, 0, 222,
    0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 227, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 237, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 253, 0, 254, 0, 255, 0, 0, 0, 0, 256,
    0, 257, 0, 0, 258, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0,
    271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 275, 0, 0, 0, 0, 276, 277, 0, 278, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0,
    284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 305, 0, 0, 306, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0,
    318, 319, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    329, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0,
    351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 370, 371, 0, 372, 0, 373, 0, 374, 0,
    375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 384,
    0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 0, 391, 0, 392, 0, 0, 393, 0, 394, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 404,
    0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 411, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 423, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 432, 0, 0,
    433, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440,
    0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 448, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0,
    0, 0, 0, 0, 0, 0, 465, 0, 466, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 474, 0, 475, 0, 476, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 487, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495,
    0, 496, 497, 0, 0, 498, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508,
    0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516,
    0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 526, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 0,
    0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0,
    0, 536, 0, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 0, 540, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0,
    0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0,
    551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0,
    0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 569, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0,
    574, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0,
    584, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 591,
    0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 595, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598,
    0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0,
    603, 0, 0, 0, 604, 0, 605, 0, 0, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 612,
    0, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 616, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 621, 0, 0, 622, 0,
    623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0,
    627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 632, 0, 0, 0, 633, 0, 634, 635, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 639, 0, 0, 0, 640, 0, 641,
    642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0,
    0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0,
    0, 0, 0, 649, 0, 650, 0, 0, 651, 652, 653, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0,
    0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0,
    669, 670, 0, 0, 671, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0,
    678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690,
};
void recomp_unit_0163_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A90000u;
        entry_id = (entry_delta < 15332u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0163[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A90000;
    case 2u: goto L_08A9000C;
    case 3u: goto L_08A90040;
    case 4u: goto L_08A9004C;
    case 5u: goto L_08A90054;
    case 6u: goto L_08A90060;
    case 7u: goto L_08A90070;
    case 8u: goto L_08A90078;
    case 9u: goto L_08A90080;
    case 10u: goto L_08A9008C;
    case 11u: goto L_08A90094;
    case 12u: goto L_08A900A0;
    case 13u: goto L_08A900B0;
    case 14u: goto L_08A900B8;
    case 15u: goto L_08A900C0;
    case 16u: goto L_08A90108;
    case 17u: goto L_08A90118;
    case 18u: goto L_08A90120;
    case 19u: goto L_08A9012C;
    case 20u: goto L_08A9015C;
    case 21u: goto L_08A90164;
    case 22u: goto L_08A90174;
    case 23u: goto L_08A9018C;
    case 24u: goto L_08A901D4;
    case 25u: goto L_08A901F4;
    case 26u: goto L_08A90200;
    case 27u: goto L_08A90254;
    case 28u: goto L_08A90258;
    case 29u: goto L_08A90260;
    case 30u: goto L_08A90268;
    case 31u: goto L_08A90284;
    case 32u: goto L_08A902B8;
    case 33u: goto L_08A902C4;
    case 34u: goto L_08A902EC;
    case 35u: goto L_08A902F4;
    case 36u: goto L_08A90324;
    case 37u: goto L_08A90360;
    case 38u: goto L_08A90370;
    case 39u: goto L_08A90378;
    case 40u: goto L_08A9038C;
    case 41u: goto L_08A90394;
    case 42u: goto L_08A9039C;
    case 43u: goto L_08A903CC;
    case 44u: goto L_08A903EC;
    case 45u: goto L_08A90428;
    case 46u: goto L_08A90458;
    case 47u: goto L_08A9045C;
    case 48u: goto L_08A90464;
    case 49u: goto L_08A9046C;
    case 50u: goto L_08A90498;
    case 51u: goto L_08A904A0;
    case 52u: goto L_08A904D0;
    case 53u: goto L_08A904F8;
    case 54u: goto L_08A90508;
    case 55u: goto L_08A90510;
    case 56u: goto L_08A90524;
    case 57u: goto L_08A90534;
    case 58u: goto L_08A9053C;
    case 59u: goto L_08A90548;
    case 60u: goto L_08A90558;
    case 61u: goto L_08A90568;
    case 62u: goto L_08A90580;
    case 63u: goto L_08A9058C;
    case 64u: goto L_08A90594;
    case 65u: goto L_08A9059C;
    case 66u: goto L_08A905A8;
    case 67u: goto L_08A905B0;
    case 68u: goto L_08A905BC;
    case 69u: goto L_08A905E0;
    case 70u: goto L_08A905EC;
    case 71u: goto L_08A90614;
    case 72u: goto L_08A90620;
    case 73u: goto L_08A90624;
    case 74u: goto L_08A9062C;
    case 75u: goto L_08A90644;
    case 76u: goto L_08A90650;
    case 77u: goto L_08A90664;
    case 78u: goto L_08A9066C;
    case 79u: goto L_08A90684;
    case 80u: goto L_08A906A0;
    case 81u: goto L_08A906B0;
    case 82u: goto L_08A906BC;
    case 83u: goto L_08A906C0;
    case 84u: goto L_08A906C8;
    case 85u: goto L_08A906D0;
    case 86u: goto L_08A906D8;
    case 87u: goto L_08A906EC;
    case 88u: goto L_08A90700;
    case 89u: goto L_08A90708;
    case 90u: goto L_08A90710;
    case 91u: goto L_08A90718;
    case 92u: goto L_08A90720;
    case 93u: goto L_08A90734;
    case 94u: goto L_08A90744;
    case 95u: goto L_08A90748;
    case 96u: goto L_08A9075C;
    case 97u: goto L_08A9076C;
    case 98u: goto L_08A90770;
    case 99u: goto L_08A90778;
    case 100u: goto L_08A90780;
    case 101u: goto L_08A90788;
    case 102u: goto L_08A907B0;
    case 103u: goto L_08A907BC;
    case 104u: goto L_08A907C4;
    case 105u: goto L_08A907CC;
    case 106u: goto L_08A907F8;
    case 107u: goto L_08A90804;
    case 108u: goto L_08A90840;
    case 109u: goto L_08A9085C;
    case 110u: goto L_08A90890;
    case 111u: goto L_08A9089C;
    case 112u: goto L_08A908C4;
    case 113u: goto L_08A908E0;
    case 114u: goto L_08A908F8;
    case 115u: goto L_08A90908;
    case 116u: goto L_08A90954;
    case 117u: goto L_08A9096C;
    case 118u: goto L_08A90984;
    case 119u: goto L_08A90990;
    case 120u: goto L_08A909B8;
    case 121u: goto L_08A909C0;
    case 122u: goto L_08A909C8;
    case 123u: goto L_08A909E8;
    case 124u: goto L_08A909F0;
    case 125u: goto L_08A90A30;
    case 126u: goto L_08A90A38;
    case 127u: goto L_08A90A40;
    case 128u: goto L_08A90A48;
    case 129u: goto L_08A90A6C;
    case 130u: goto L_08A90AA0;
    case 131u: goto L_08A90AA4;
    case 132u: goto L_08A90AB0;
    case 133u: goto L_08A90AC4;
    case 134u: goto L_08A90AD0;
    case 135u: goto L_08A90AD8;
    case 136u: goto L_08A90AF0;
    case 137u: goto L_08A90AFC;
    case 138u: goto L_08A90B40;
    case 139u: goto L_08A90B48;
    case 140u: goto L_08A90B50;
    case 141u: goto L_08A90B60;
    case 142u: goto L_08A90B94;
    case 143u: goto L_08A90BC0;
    case 144u: goto L_08A90BCC;
    case 145u: goto L_08A90BD4;
    case 146u: goto L_08A90BE0;
    case 147u: goto L_08A90BE8;
    case 148u: goto L_08A90BF0;
    case 149u: goto L_08A90BF8;
    case 150u: goto L_08A90C20;
    case 151u: goto L_08A90C3C;
    case 152u: goto L_08A90C48;
    case 153u: goto L_08A90C64;
    case 154u: goto L_08A90C84;
    case 155u: goto L_08A90C94;
    case 156u: goto L_08A90C9C;
    case 157u: goto L_08A90CB0;
    case 158u: goto L_08A90D04;
    case 159u: goto L_08A90D18;
    case 160u: goto L_08A90D44;
    case 161u: goto L_08A90D78;
    case 162u: goto L_08A90D7C;
    case 163u: goto L_08A90D88;
    case 164u: goto L_08A90DA0;
    case 165u: goto L_08A90DAC;
    case 166u: goto L_08A90DB8;
    case 167u: goto L_08A90DC0;
    case 168u: goto L_08A90DC8;
    case 169u: goto L_08A90DCC;
    case 170u: goto L_08A90DE0;
    case 171u: goto L_08A90DEC;
    case 172u: goto L_08A90E70;
    case 173u: goto L_08A90EA4;
    case 174u: goto L_08A90EAC;
    case 175u: goto L_08A90EB4;
    case 176u: goto L_08A90EC4;
    case 177u: goto L_08A90EF8;
    case 178u: goto L_08A90F08;
    case 179u: goto L_08A90F14;
    case 180u: goto L_08A90F1C;
    case 181u: goto L_08A90F3C;
    case 182u: goto L_08A90F4C;
    case 183u: goto L_08A90F54;
    case 184u: goto L_08A90F68;
    case 185u: goto L_08A90F74;
    case 186u: goto L_08A90F88;
    case 187u: goto L_08A90F90;
    case 188u: goto L_08A90FA0;
    case 189u: goto L_08A90FC8;
    case 190u: goto L_08A90FD8;
    case 191u: goto L_08A91004;
    case 192u: goto L_08A9100C;
    case 193u: goto L_08A91024;
    case 194u: goto L_08A91038;
    case 195u: goto L_08A9105C;
    case 196u: goto L_08A91064;
    case 197u: goto L_08A91070;
    case 198u: goto L_08A91078;
    case 199u: goto L_08A91084;
    case 200u: goto L_08A9108C;
    case 201u: goto L_08A91090;
    case 202u: goto L_08A91384;
    case 203u: goto L_08A913A4;
    case 204u: goto L_08A913B0;
    case 205u: goto L_08A913BC;
    case 206u: goto L_08A913C8;
    case 207u: goto L_08A913D4;
    case 208u: goto L_08A913F0;
    case 209u: goto L_08A913FC;
    case 210u: goto L_08A91408;
    case 211u: goto L_08A91414;
    case 212u: goto L_08A91420;
    case 213u: goto L_08A91424;
    case 214u: goto L_08A91430;
    case 215u: goto L_08A91438;
    case 216u: goto L_08A91440;
    case 217u: goto L_08A9144C;
    case 218u: goto L_08A91458;
    case 219u: goto L_08A91464;
    case 220u: goto L_08A91468;
    case 221u: goto L_08A91474;
    case 222u: goto L_08A9147C;
    case 223u: goto L_08A91484;
    case 224u: goto L_08A91494;
    case 225u: goto L_08A914A4;
    case 226u: goto L_08A914B0;
    case 227u: goto L_08A914B8;
    case 228u: goto L_08A914BC;
    case 229u: goto L_08A914C4;
    case 230u: goto L_08A914E0;
    case 231u: goto L_08A914EC;
    case 232u: goto L_08A914F4;
    case 233u: goto L_08A914FC;
    case 234u: goto L_08A91518;
    case 235u: goto L_08A91524;
    case 236u: goto L_08A91530;
    case 237u: goto L_08A91534;
    case 238u: goto L_08A9153C;
    case 239u: goto L_08A91544;
    case 240u: goto L_08A91550;
    case 241u: goto L_08A91558;
    case 242u: goto L_08A91560;
    case 243u: goto L_08A91568;
    case 244u: goto L_08A91570;
    case 245u: goto L_08A91578;
    case 246u: goto L_08A91580;
    case 247u: goto L_08A915A8;
    case 248u: goto L_08A915B4;
    case 249u: goto L_08A915BC;
    case 250u: goto L_08A915C4;
    case 251u: goto L_08A915CC;
    case 252u: goto L_08A915D4;
    case 253u: goto L_08A915D8;
    case 254u: goto L_08A915E0;
    case 255u: goto L_08A915E8;
    case 256u: goto L_08A915FC;
    case 257u: goto L_08A91604;
    case 258u: goto L_08A91610;
    case 259u: goto L_08A91614;
    case 260u: goto L_08A917B4;
    case 261u: goto L_08A917D4;
    case 262u: goto L_08A917E4;
    case 263u: goto L_08A917EC;
    case 264u: goto L_08A91804;
    case 265u: goto L_08A91818;
    case 266u: goto L_08A91830;
    case 267u: goto L_08A9184C;
    case 268u: goto L_08A9185C;
    case 269u: goto L_08A91864;
    case 270u: goto L_08A91878;
    case 271u: goto L_08A91880;
    case 272u: goto L_08A91894;
    case 273u: goto L_08A918B8;
    case 274u: goto L_08A918C0;
    case 275u: goto L_08A918C4;
    case 276u: goto L_08A918D8;
    case 277u: goto L_08A918DC;
    case 278u: goto L_08A918E4;
    case 279u: goto L_08A918F8;
    case 280u: goto L_08A91918;
    case 281u: goto L_08A91920;
    case 282u: goto L_08A9195C;
    case 283u: goto L_08A91974;
    case 284u: goto L_08A91980;
    case 285u: goto L_08A9198C;
    case 286u: goto L_08A91998;
    case 287u: goto L_08A919A4;
    case 288u: goto L_08A919D0;
    case 289u: goto L_08A919F8;
    case 290u: goto L_08A91A10;
    case 291u: goto L_08A91A34;
    case 292u: goto L_08A91A3C;
    case 293u: goto L_08A91A44;
    case 294u: goto L_08A91A4C;
    case 295u: goto L_08A91A50;
    case 296u: goto L_08A91A64;
    case 297u: goto L_08A91A6C;
    case 298u: goto L_08A91D6C;
    case 299u: goto L_08A91D88;
    case 300u: goto L_08A91D94;
    case 301u: goto L_08A91DA0;
    case 302u: goto L_08A91DA8;
    case 303u: goto L_08A91DD8;
    case 304u: goto L_08A91DE0;
    case 305u: goto L_08A91DE4;
    case 306u: goto L_08A91DF0;
    case 307u: goto L_08A91DFC;
    case 308u: goto L_08A91E2C;
    case 309u: goto L_08A91E4C;
    case 310u: goto L_08A91E64;
    case 311u: goto L_08A91E70;
    case 312u: goto L_08A91EA4;
    case 313u: goto L_08A91EB8;
    case 314u: goto L_08A91EC0;
    case 315u: goto L_08A91ED4;
    case 316u: goto L_08A91EE4;
    case 317u: goto L_08A91EF4;
    case 318u: goto L_08A91F00;
    case 319u: goto L_08A91F04;
    case 320u: goto L_08A91F0C;
    case 321u: goto L_08A91F18;
    case 322u: goto L_08A91F24;
    case 323u: goto L_08A91F3C;
    case 324u: goto L_08A91F74;
    case 325u: goto L_08A91F9C;
    case 326u: goto L_08A91FB0;
    case 327u: goto L_08A91FC8;
    case 328u: goto L_08A91FE0;
    case 329u: goto L_08A92000;
    case 330u: goto L_08A92004;
    case 331u: goto L_08A92014;
    case 332u: goto L_08A92020;
    case 333u: goto L_08A92030;
    case 334u: goto L_08A92044;
    case 335u: goto L_08A9204C;
    case 336u: goto L_08A92054;
    case 337u: goto L_08A92064;
    case 338u: goto L_08A9206C;
    case 339u: goto L_08A9207C;
    case 340u: goto L_08A92094;
    case 341u: goto L_08A920A8;
    case 342u: goto L_08A920B8;
    case 343u: goto L_08A920C4;
    case 344u: goto L_08A920E4;
    case 345u: goto L_08A92138;
    case 346u: goto L_08A92140;
    case 347u: goto L_08A92150;
    case 348u: goto L_08A9215C;
    case 349u: goto L_08A92164;
    case 350u: goto L_08A92174;
    case 351u: goto L_08A92180;
    case 352u: goto L_08A9218C;
    case 353u: goto L_08A921B0;
    case 354u: goto L_08A921F0;
    case 355u: goto L_08A92230;
    case 356u: goto L_08A92260;
    case 357u: goto L_08A92280;
    case 358u: goto L_08A92290;
    case 359u: goto L_08A9229C;
    case 360u: goto L_08A922C0;
    case 361u: goto L_08A922D0;
    case 362u: goto L_08A922E4;
    case 363u: goto L_08A92310;
    case 364u: goto L_08A9234C;
    case 365u: goto L_08A9237C;
    case 366u: goto L_08A923A4;
    case 367u: goto L_08A923B8;
    case 368u: goto L_08A923C8;
    case 369u: goto L_08A923D0;
    case 370u: goto L_08A923DC;
    case 371u: goto L_08A923E0;
    case 372u: goto L_08A923E8;
    case 373u: goto L_08A923F0;
    case 374u: goto L_08A923F8;
    case 375u: goto L_08A92400;
    case 376u: goto L_08A92408;
    case 377u: goto L_08A92424;
    case 378u: goto L_08A92438;
    case 379u: goto L_08A92448;
    case 380u: goto L_08A92450;
    case 381u: goto L_08A92458;
    case 382u: goto L_08A92460;
    case 383u: goto L_08A92478;
    case 384u: goto L_08A9247C;
    case 385u: goto L_08A92484;
    case 386u: goto L_08A92490;
    case 387u: goto L_08A92498;
    case 388u: goto L_08A924A0;
    case 389u: goto L_08A924AC;
    case 390u: goto L_08A924B4;
    case 391u: goto L_08A924C0;
    case 392u: goto L_08A924C8;
    case 393u: goto L_08A924D4;
    case 394u: goto L_08A924DC;
    case 395u: goto L_08A924E0;
    case 396u: goto L_08A92514;
    case 397u: goto L_08A92520;
    case 398u: goto L_08A9252C;
    case 399u: goto L_08A92534;
    case 400u: goto L_08A92548;
    case 401u: goto L_08A92550;
    case 402u: goto L_08A9256C;
    case 403u: goto L_08A92578;
    case 404u: goto L_08A9257C;
    case 405u: goto L_08A92588;
    case 406u: goto L_08A92590;
    case 407u: goto L_08A92598;
    case 408u: goto L_08A925A0;
    case 409u: goto L_08A925AC;
    case 410u: goto L_08A925B4;
    case 411u: goto L_08A925BC;
    case 412u: goto L_08A925C0;
    case 413u: goto L_08A925E4;
    case 414u: goto L_08A92600;
    case 415u: goto L_08A92610;
    case 416u: goto L_08A9261C;
    case 417u: goto L_08A92624;
    case 418u: goto L_08A92630;
    case 419u: goto L_08A9264C;
    case 420u: goto L_08A92658;
    case 421u: goto L_08A92664;
    case 422u: goto L_08A92670;
    case 423u: goto L_08A92674;
    case 424u: goto L_08A92678;
    case 425u: goto L_08A926A8;
    case 426u: goto L_08A926B0;
    case 427u: goto L_08A926B8;
    case 428u: goto L_08A926C8;
    case 429u: goto L_08A926D0;
    case 430u: goto L_08A926D8;
    case 431u: goto L_08A926F0;
    case 432u: goto L_08A926F4;
    case 433u: goto L_08A92700;
    case 434u: goto L_08A92710;
    case 435u: goto L_08A92718;
    case 436u: goto L_08A92720;
    case 437u: goto L_08A92748;
    case 438u: goto L_08A92760;
    case 439u: goto L_08A92768;
    case 440u: goto L_08A9277C;
    case 441u: goto L_08A92784;
    case 442u: goto L_08A9278C;
    case 443u: goto L_08A927A4;
    case 444u: goto L_08A927AC;
    case 445u: goto L_08A927F8;
    case 446u: goto L_08A92828;
    case 447u: goto L_08A92850;
    case 448u: goto L_08A92854;
    case 449u: goto L_08A92864;
    case 450u: goto L_08A9286C;
    case 451u: goto L_08A92878;
    case 452u: goto L_08A92880;
    case 453u: goto L_08A928E4;
    case 454u: goto L_08A9290C;
    case 455u: goto L_08A9294C;
    case 456u: goto L_08A92960;
    case 457u: goto L_08A92988;
    case 458u: goto L_08A9299C;
    case 459u: goto L_08A929B0;
    case 460u: goto L_08A929C4;
    case 461u: goto L_08A929CC;
    case 462u: goto L_08A929D4;
    case 463u: goto L_08A929EC;
    case 464u: goto L_08A929F8;
    case 465u: goto L_08A92A18;
    case 466u: goto L_08A92A20;
    case 467u: goto L_08A92A24;
    case 468u: goto L_08A92A5C;
    case 469u: goto L_08A92AA4;
    case 470u: goto L_08A92AB8;
    case 471u: goto L_08A92AE0;
    case 472u: goto L_08A92B18;
    case 473u: goto L_08A92B24;
    case 474u: goto L_08A92B28;
    case 475u: goto L_08A92B30;
    case 476u: goto L_08A92B38;
    case 477u: goto L_08A92B3C;
    case 478u: goto L_08A92B50;
    case 479u: goto L_08A92B68;
    case 480u: goto L_08A92BC0;
    case 481u: goto L_08A92BC8;
    case 482u: goto L_08A92BD0;
    case 483u: goto L_08A92BD8;
    case 484u: goto L_08A92BF0;
    case 485u: goto L_08A92C1C;
    case 486u: goto L_08A92CE0;
    case 487u: goto L_08A92D10;
    case 488u: goto L_08A92D14;
    case 489u: goto L_08A92D1C;
    case 490u: goto L_08A92D2C;
    case 491u: goto L_08A92D34;
    case 492u: goto L_08A92D48;
    case 493u: goto L_08A92D50;
    case 494u: goto L_08A92D5C;
    case 495u: goto L_08A92D7C;
    case 496u: goto L_08A92D84;
    case 497u: goto L_08A92D88;
    case 498u: goto L_08A92D94;
    case 499u: goto L_08A92D98;
    case 500u: goto L_08A92DA0;
    case 501u: goto L_08A92DC8;
    case 502u: goto L_08A92DE8;
    case 503u: goto L_08A92E2C;
    case 504u: goto L_08A92E34;
    case 505u: goto L_08A92E48;
    case 506u: goto L_08A92E50;
    case 507u: goto L_08A92E64;
    case 508u: goto L_08A92E7C;
    case 509u: goto L_08A92E84;
    case 510u: goto L_08A92E90;
    case 511u: goto L_08A92EA0;
    case 512u: goto L_08A92EB4;
    case 513u: goto L_08A92EBC;
    case 514u: goto L_08A92EDC;
    case 515u: goto L_08A92EEC;
    case 516u: goto L_08A92EFC;
    case 517u: goto L_08A92F0C;
    case 518u: goto L_08A92F1C;
    case 519u: goto L_08A92F40;
    case 520u: goto L_08A92F54;
    case 521u: goto L_08A92F58;
    case 522u: goto L_08A92F80;
    case 523u: goto L_08A92FB0;
    case 524u: goto L_08A92FBC;
    case 525u: goto L_08A92FCC;
    case 526u: goto L_08A92FD0;
    case 527u: goto L_08A92FD8;
    case 528u: goto L_08A92FE4;
    case 529u: goto L_08A92FF0;
    case 530u: goto L_08A93010;
    case 531u: goto L_08A93048;
    case 532u: goto L_08A93054;
    case 533u: goto L_08A93060;
    case 534u: goto L_08A9306C;
    case 535u: goto L_08A93078;
    case 536u: goto L_08A93084;
    case 537u: goto L_08A93090;
    case 538u: goto L_08A930A0;
    case 539u: goto L_08A930AC;
    case 540u: goto L_08A930B8;
    case 541u: goto L_08A930BC;
    case 542u: goto L_08A930D0;
    case 543u: goto L_08A930F8;
    case 544u: goto L_08A93104;
    case 545u: goto L_08A93110;
    case 546u: goto L_08A93138;
    case 547u: goto L_08A93148;
    case 548u: goto L_08A93154;
    case 549u: goto L_08A93164;
    case 550u: goto L_08A93170;
    case 551u: goto L_08A93180;
    case 552u: goto L_08A9318C;
    case 553u: goto L_08A931AC;
    case 554u: goto L_08A931B4;
    case 555u: goto L_08A931C0;
    case 556u: goto L_08A931CC;
    case 557u: goto L_08A931D8;
    case 558u: goto L_08A931F0;
    case 559u: goto L_08A93208;
    case 560u: goto L_08A93218;
    case 561u: goto L_08A93220;
    case 562u: goto L_08A93228;
    case 563u: goto L_08A93230;
    case 564u: goto L_08A93238;
    case 565u: goto L_08A932C8;
    case 566u: goto L_08A9331C;
    case 567u: goto L_08A93328;
    case 568u: goto L_08A93330;
    case 569u: goto L_08A9333C;
    case 570u: goto L_08A93344;
    case 571u: goto L_08A93350;
    case 572u: goto L_08A93364;
    case 573u: goto L_08A93374;
    case 574u: goto L_08A93380;
    case 575u: goto L_08A93390;
    case 576u: goto L_08A9339C;
    case 577u: goto L_08A933AC;
    case 578u: goto L_08A933B8;
    case 579u: goto L_08A933C8;
    case 580u: goto L_08A933D4;
    case 581u: goto L_08A93438;
    case 582u: goto L_08A93458;
    case 583u: goto L_08A9346C;
    case 584u: goto L_08A93480;
    case 585u: goto L_08A93488;
    case 586u: goto L_08A9349C;
    case 587u: goto L_08A934C8;
    case 588u: goto L_08A934D8;
    case 589u: goto L_08A934E8;
    case 590u: goto L_08A934F4;
    case 591u: goto L_08A934FC;
    case 592u: goto L_08A9351C;
    case 593u: goto L_08A9352C;
    case 594u: goto L_08A9354C;
    case 595u: goto L_08A93550;
    case 596u: goto L_08A93554;
    case 597u: goto L_08A9356C;
    case 598u: goto L_08A9357C;
    case 599u: goto L_08A93594;
    case 600u: goto L_08A935A4;
    case 601u: goto L_08A935C8;
    case 602u: goto L_08A935E8;
    case 603u: goto L_08A93600;
    case 604u: goto L_08A93610;
    case 605u: goto L_08A93618;
    case 606u: goto L_08A93628;
    case 607u: goto L_08A93630;
    case 608u: goto L_08A93640;
    case 609u: goto L_08A93658;
    case 610u: goto L_08A93664;
    case 611u: goto L_08A93670;
    case 612u: goto L_08A9367C;
    case 613u: goto L_08A9368C;
    case 614u: goto L_08A93694;
    case 615u: goto L_08A936A4;
    case 616u: goto L_08A936B8;
    case 617u: goto L_08A936BC;
    case 618u: goto L_08A936CC;
    case 619u: goto L_08A936DC;
    case 620u: goto L_08A936E4;
    case 621u: goto L_08A936EC;
    case 622u: goto L_08A936F8;
    case 623u: goto L_08A93700;
    case 624u: goto L_08A93708;
    case 625u: goto L_08A93750;
    case 626u: goto L_08A93778;
    case 627u: goto L_08A93780;
    case 628u: goto L_08A937B0;
    case 629u: goto L_08A937F4;
    case 630u: goto L_08A93830;
    case 631u: goto L_08A93840;
    case 632u: goto L_08A93848;
    case 633u: goto L_08A93858;
    case 634u: goto L_08A93860;
    case 635u: goto L_08A93864;
    case 636u: goto L_08A9389C;
    case 637u: goto L_08A938D4;
    case 638u: goto L_08A938DC;
    case 639u: goto L_08A938E4;
    case 640u: goto L_08A938F4;
    case 641u: goto L_08A938FC;
    case 642u: goto L_08A93900;
    case 643u: goto L_08A93910;
    case 644u: goto L_08A93940;
    case 645u: goto L_08A93974;
    case 646u: goto L_08A93990;
    case 647u: goto L_08A939D8;
    case 648u: goto L_08A939F0;
    case 649u: goto L_08A93A0C;
    case 650u: goto L_08A93A14;
    case 651u: goto L_08A93A20;
    case 652u: goto L_08A93A24;
    case 653u: goto L_08A93A28;
    case 654u: goto L_08A93A30;
    case 655u: goto L_08A93A40;
    case 656u: goto L_08A93A48;
    case 657u: goto L_08A93A60;
    case 658u: goto L_08A93A6C;
    case 659u: goto L_08A93A8C;
    case 660u: goto L_08A93A9C;
    case 661u: goto L_08A93AA8;
    case 662u: goto L_08A93ABC;
    case 663u: goto L_08A93ACC;
    case 664u: goto L_08A93AD4;
    case 665u: goto L_08A93ADC;
    case 666u: goto L_08A93AE4;
    case 667u: goto L_08A93AEC;
    case 668u: goto L_08A93AF8;
    case 669u: goto L_08A93B00;
    case 670u: goto L_08A93B04;
    case 671u: goto L_08A93B10;
    case 672u: goto L_08A93B18;
    case 673u: goto L_08A93B24;
    case 674u: goto L_08A93B5C;
    case 675u: goto L_08A93B68;
    case 676u: goto L_08A93B70;
    case 677u: goto L_08A93B78;
    case 678u: goto L_08A93B80;
    case 679u: goto L_08A93B88;
    case 680u: goto L_08A93B90;
    case 681u: goto L_08A93B98;
    case 682u: goto L_08A93BA0;
    case 683u: goto L_08A93BA8;
    case 684u: goto L_08A93BB0;
    case 685u: goto L_08A93BB8;
    case 686u: goto L_08A93BC0;
    case 687u: goto L_08A93BC8;
    case 688u: goto L_08A93BD0;
    case 689u: goto L_08A93BD8;
    case 690u: goto L_08A93BE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A90000:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 807u, 0x08A8FFF8u>(ctx, &aot_mem); return;
      }
      goto L_08A9000C;
    }
L_08A9000C:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12052), 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12104)));
    ctx.gpr[6] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-14420), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-14424), ctx.gpr[4]);
    ctx.gpr[4] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26608));
    ctx.gpr[5] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12064), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90040:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A90070;
      }
      goto L_08A9004C;
    }
L_08A9004C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14352));
    goto L_08A90054;
L_08A90054:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A90078;
      }
      goto L_08A90060;
    }
L_08A90060:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A90054;
      }
      goto L_08A90070;
    }
L_08A90070:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90078:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90080:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A900B0;
      }
      goto L_08A9008C;
    }
L_08A9008C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14352));
    goto L_08A90094;
L_08A90094:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A900B8;
      }
      goto L_08A900A0;
    }
L_08A900A0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A90094;
      }
      goto L_08A900B0;
    }
L_08A900B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A900B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A900C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2223u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-14268), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A90120;
      }
      goto L_08A90108;
    }
L_08A90108:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12068)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A902F4;
      }
      goto L_08A90118;
    }
L_08A90118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9015C;
      }
      goto L_08A90120;
    }
L_08A90120:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9012Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A9085C;
L_08A9012C:
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
L_08A9015C:
    ctx.gpr[31] = (0x08A90164u);
    // nop
    goto L_08A90080;
L_08A90164:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A902F4;
      }
      goto L_08A90174;
    }
L_08A90174:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A902F4;
      }
      goto L_08A9018C;
    }
L_08A9018C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-14268), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 11u));
    ctx.gpr[5] = (ctx.gpr[5] >> 21u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[16]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[22] = (2223u << 16u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[19]);
        goto L_08A901D4;
    }
    goto L_08A901D4;
L_08A901D4:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14280), ctx.gpr[19]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14276), ctx.gpr[16]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A901F4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14288), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 769u, 0x08A8FC34u>(ctx, &aot_mem) && ctx.pc == 0x08A901F4u) goto L_08A901F4;
    return;
L_08A901F4:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A90200u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14424));
    ctx.pc = 0x08AB417Cu;
    return;
L_08A90200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 11u));
    ctx.gpr[4] = (ctx.gpr[4] >> 21u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 4u));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 11u));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12052), 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 4u));
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-14272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A902B8;
      }
      goto L_08A90254;
    }
L_08A90254:
    ctx.gpr[30] = (0u | 32768u);
    goto L_08A90258;
L_08A90258:
    ctx.gpr[31] = (0x08A90260u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 789u, 0x08A8FE30u>(ctx, &aot_mem) && ctx.pc == 0x08A90260u) goto L_08A90260;
    return;
L_08A90260:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08A90268;
    }
    goto L_08A90268;
L_08A90268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12052)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4500));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12052), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
        goto L_08A90284;
    }
    goto L_08A90284;
L_08A90284:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1500));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 15u));
    ctx.gpr[7] = (ctx.gpr[7] >> 17u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 15u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12052), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A90258;
      }
      goto L_08A902B8;
    }
L_08A902B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12040)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    ctx.gpr[17] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_08A902EC;
      }
      goto L_08A902C4;
    }
L_08A902C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-14272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A902EC;
L_08A902EC:
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14284), ctx.gpr[17]);
    goto L_08A902F4;
L_08A902F4:
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
L_08A90324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12068)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A904A0;
      }
      goto L_08A90360;
    }
L_08A90360:
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-14268)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A904A0;
      }
      goto L_08A90370;
    }
L_08A90370:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14424));
      if (branch_taken) {
          goto L_08A90394;
      }
      goto L_08A90378;
    }
L_08A90378:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12072)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A903CC;
      }
      goto L_08A9038C;
    }
L_08A9038C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A9045C;
      }
      goto L_08A90394;
    }
L_08A90394:
    ctx.gpr[31] = (0x08A9039Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB417Cu;
    return;
L_08A9039C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A903CC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12052)));
    ctx.gpr[4] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A9045C;
      }
      goto L_08A903EC;
    }
L_08A903EC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2223u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14272)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10568));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14280)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14276)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14288)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[30] = (ctx.lo);
    ctx.gpr[31] = (0x08A90428u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14284)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A90428u) goto L_08A90428;
    return;
L_08A90428:
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14264)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A90458u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A90458u) goto L_08A90458;
    return;
L_08A90458:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08A9045C;
L_08A9045C:
    ctx.gpr[31] = (0x08A90464u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08AB417Cu;
    return;
L_08A90464:
    ctx.gpr[31] = (0x08A9046Cu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A9046Cu) goto L_08A9046C;
    return;
L_08A9046C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14420)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12052)));
    ctx.gpr[6] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9045C;
      }
      goto L_08A90498;
    }
L_08A90498:
    ctx.gpr[31] = (0x08A904A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB417Cu;
    return;
L_08A904A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A904D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12076)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A90510;
      }
      goto L_08A904F8;
    }
L_08A904F8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12068)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A90508;
    }
L_08A90508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90534;
      }
      goto L_08A90510;
    }
L_08A90510:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A90524u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A90788;
L_08A90524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90534:
    ctx.gpr[31] = (0x08A9053Cu);
    // nop
    goto L_08A90040;
L_08A9053C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A90548;
    }
L_08A90548:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A90558;
L_08A90558:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A90594;
      }
      goto L_08A90580;
    }
L_08A90580:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12068)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A905E0;
      }
      goto L_08A9058C;
    }
L_08A9058C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A905A8;
      }
      goto L_08A90594;
    }
L_08A90594:
    ctx.gpr[31] = (0x08A9059Cu);
    // nop
    goto L_08A909B8;
L_08A9059C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A905A8:
    ctx.gpr[31] = (0x08A905B0u);
    // nop
    goto L_08A90080;
L_08A905B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A905E0;
      }
      goto L_08A905BC;
    }
L_08A905BC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14352));
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-14416));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A905E0;
L_08A905E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A905EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A90620;
      }
      goto L_08A90614;
    }
L_08A90614:
    ctx.gpr[5] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90624;
      }
      goto L_08A90620;
    }
L_08A90620:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A90624;
L_08A90624:
    ctx.gpr[31] = (0x08A9062Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A9062Cu) goto L_08A9062C;
    return;
L_08A9062C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(14208));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08A90644;
L_08A90644:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (0u | 92u);
        goto L_08A90650;
    }
    goto L_08A90650;
L_08A90650:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9066C;
      }
      goto L_08A90664;
    }
L_08A90664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A9066C;
      }
      goto L_08A9066C;
    }
L_08A9066C:
    ctx.gpr[7] = (ctx.gpr[18] << 5u);
    ctx.gpr[18] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
        goto L_08A90644;
    }
    goto L_08A90684;
L_08A90684:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08A906A0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A906BC;
      }
      goto L_08A906B0;
    }
L_08A906B0:
    ctx.gpr[9] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A906C0;
      }
      goto L_08A906BC;
    }
L_08A906BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A906C0;
L_08A906C0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[8] = (0u | 92u);
      if (branch_taken) {
          goto L_08A906D0;
      }
      goto L_08A906C8;
    }
L_08A906C8:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[8] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A906D8;
      }
      goto L_08A906D0;
    }
L_08A906D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (2222u << 16u);
    goto L_08A906D8;
L_08A906D8:
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(14208));
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08A906EC;
L_08A906EC:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A90710;
      }
      goto L_08A90700;
    }
L_08A90700:
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[8] = (0u | 92u);
        goto L_08A90718;
    }
    goto L_08A90708;
L_08A90708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90718;
      }
      goto L_08A90710;
    }
L_08A90710:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90718:
    if (ctx.gpr[10] == ctx.gpr[6]) {
    ctx.gpr[10] = (0u | 92u);
        goto L_08A90720;
    }
    goto L_08A90720;
L_08A90720:
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
        goto L_08A90744;
    }
    goto L_08A90734;
L_08A90734:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_08A90748;
      }
      goto L_08A90744;
    }
L_08A90744:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    goto L_08A90748;
L_08A90748:
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
        goto L_08A9076C;
    }
    goto L_08A9075C;
L_08A9075C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
      if (branch_taken) {
          goto L_08A90770;
      }
      goto L_08A9076C;
    }
L_08A9076C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
    goto L_08A90770;
L_08A90770:
    if (ctx.gpr[8] != ctx.gpr[10]) {
    ctx.gpr[11] = (0u | 0u);
        goto L_08A90778;
    }
    goto L_08A90778;
L_08A90778:
    if (ctx.gpr[11] == ctx.gpr[7]) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08A906EC;
    }
    goto L_08A90780;
L_08A90780:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A90840;
      }
      goto L_08A907B0;
    }
L_08A907B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A90840;
      }
      goto L_08A907BC;
    }
L_08A907BC:
    ctx.gpr[31] = (0x08A907C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 591u, 0x08A8EB84u>(ctx, &aot_mem) && ctx.pc == 0x08A907C4u) goto L_08A907C4;
    return;
L_08A907C4:
    ctx.gpr[31] = (0x08A907CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A907CCu) goto L_08A907CC;
    return;
L_08A907CC:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A907F8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A907F8u) goto L_08A907F8;
    return;
L_08A907F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A90804u);
    ctx.gpr[5] = (0u | 5381u);
    goto L_08A905EC;
L_08A90804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    goto L_08A90840;
L_08A90840:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9085C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A90990;
      }
      goto L_08A90890;
    }
L_08A90890:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_08A90990;
      }
      goto L_08A9089C;
    }
L_08A9089C:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A90990;
      }
      goto L_08A908C4;
    }
L_08A908C4:
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(11824));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10456));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A908E0u);
    ctx.gpr[6] = (0u | 256u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A908E0u) goto L_08A908E0;
    return;
L_08A908E0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A908F8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB47E4u;
    return;
L_08A908F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A90908u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB476Cu;
    return;
L_08A90908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(260)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A90954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10444));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A90954u) goto L_08A90954;
    return;
L_08A90954:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14260)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08A9096Cu);
    ctx.gpr[6] = (0u | 284u);
    ctx.pc = 0x08AB475Cu;
    return;
L_08A9096C:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14260)));
    ctx.gpr[31] = (0x08A90984u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08AB475Cu;
    return;
L_08A90984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A90990u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A90990u) goto L_08A90990;
    return;
L_08A90990:
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
L_08A909B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A909E8;
      }
      goto L_08A909C0;
    }
L_08A909C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08A909E8;
      }
      goto L_08A909C8;
    }
L_08A909C8:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26928)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(0u));
    goto L_08A909E8;
L_08A909E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A909F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12077)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A90A6C;
      }
      goto L_08A90A30;
    }
L_08A90A30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A90A6C;
      }
      goto L_08A90A38;
    }
L_08A90A38:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A90A6C;
      }
      goto L_08A90A40;
    }
L_08A90A40:
    ctx.gpr[31] = (0x08A90A48u);
    ctx.gpr[5] = (0u | 5381u);
    goto L_08A905EC;
L_08A90A48:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12088)));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12084)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A90AA0;
      }
      goto L_08A90A6C;
    }
L_08A90A6C:
    ctx.gpr[2] = (0u | 0u);
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
L_08A90AA0:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[19]);
    goto L_08A90AA4;
L_08A90AA4:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(284) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (0u | 1u);
        goto L_08A90B48;
    }
    goto L_08A90AB0;
L_08A90AB0:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12080)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(284));
      if (branch_taken) {
          goto L_08A90AD8;
      }
      goto L_08A90AC4;
    }
L_08A90AC4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A90AD0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A906A0;
L_08A90AD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A90AFC;
      }
      goto L_08A90AD8;
    }
L_08A90AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12084)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A90B40;
      }
      goto L_08A90AF0;
    }
L_08A90AF0:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A90B48;
      }
      goto L_08A90AFC;
    }
L_08A90AFC:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14256));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[2] = (0u | 1u);
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
L_08A90B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A90B48;
      }
      goto L_08A90B48;
    }
L_08A90B48:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A90AA4;
      }
      goto L_08A90B50;
    }
L_08A90B50:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A90B60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10404));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A90B60u) goto L_08A90B60;
    return;
L_08A90B60:
    ctx.gpr[2] = (0u | 0u);
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
L_08A90B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08A90BC0;
L_08A90BC0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08A90BD4;
    }
    goto L_08A90BCC;
L_08A90BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A90BE0;
      }
      goto L_08A90BD4;
    }
L_08A90BD4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A90BC0;
      }
      goto L_08A90BE0;
    }
L_08A90BE0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A90C3C;
      }
      goto L_08A90BE8;
    }
L_08A90BE8:
    ctx.gpr[31] = (0x08A90BF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A909F0;
L_08A90BF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (173u << 16u);
      if (branch_taken) {
          goto L_08A90C20;
      }
      goto L_08A90BF8;
    }
L_08A90BF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8960));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08A90C20:
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
L_08A90C3C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A90C48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10356));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A90C48u) goto L_08A90C48;
    return;
L_08A90C48:
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
L_08A90C64:
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (173u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8960));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (173u << 16u);
      if (branch_taken) {
          goto L_08A90C94;
      }
      goto L_08A90C84;
    }
L_08A90C84:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9216));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A90C9C;
      }
      goto L_08A90C94;
    }
L_08A90C94:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90C9C:
    ctx.gpr[5] = (1530u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15440), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (173u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A90D44;
      }
      goto L_08A90D04;
    }
L_08A90D04:
    ctx.gpr[4] = (173u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9216));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_08A90D44;
      }
      goto L_08A90D18;
    }
L_08A90D18:
    ctx.gpr[5] = (1530u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12088)));
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12084)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A90D78;
      }
      goto L_08A90D44;
    }
L_08A90D44:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90D78:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_08A90D7C;
L_08A90D7C:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(284) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08A90EAC;
    }
    goto L_08A90D88;
L_08A90D88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12080)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(284));
      if (branch_taken) {
          goto L_08A90DC8;
      }
      goto L_08A90DA0;
    }
L_08A90DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12084)));
        goto L_08A90DCC;
    }
    goto L_08A90DAC;
L_08A90DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A90DC8;
      }
      goto L_08A90DB8;
    }
L_08A90DB8:
    ctx.gpr[31] = (0x08A90DC0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A906A0;
L_08A90DC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A90DEC;
      }
      goto L_08A90DC8;
    }
L_08A90DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12084)));
    goto L_08A90DCC;
L_08A90DCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A90EA4;
      }
      goto L_08A90DE0;
    }
L_08A90DE0:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A90EAC;
      }
      goto L_08A90DEC;
    }
L_08A90DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(12092), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[6] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-14188), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12080)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-14184), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14180), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-14176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    ctx.gpr[6] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-14172), ctx.gpr[5]);
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14168), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14164), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12088), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90E70u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = 0x08AB454Cu;
    return;
L_08A90E70:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A90EAC;
      }
      goto L_08A90EAC;
    }
L_08A90EAC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A90D7C;
      }
      goto L_08A90EB4;
    }
L_08A90EB4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A90EC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10316));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A90EC4u) goto L_08A90EC4;
    return;
L_08A90EC4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90EF8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12093)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A90F14;
      }
      goto L_08A90F08;
    }
L_08A90F08:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14164)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12093), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90F14:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90F1C:
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (173u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8960));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (173u << 16u);
      if (branch_taken) {
          goto L_08A90F4C;
      }
      goto L_08A90F3C;
    }
L_08A90F3C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9216));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A90F54;
      }
      goto L_08A90F4C;
    }
L_08A90F4C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90F54:
    ctx.gpr[5] = (1530u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15440)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90F68:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12077)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90F74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[31]);
    goto L_08A90F88;
L_08A90F88:
    ctx.gpr[31] = (0x08A90F90u);
    // nop
    ctx.pc = 0x08AB467Cu;
    return;
L_08A90F90:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12092)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A90F88;
      }
      goto L_08A90FA0;
    }
L_08A90FA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14188)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14184)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90FC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10248));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08A90FC8u) goto L_08A90FC8;
    return;
L_08A90FC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A90FD8u);
    ctx.gpr[6] = (0u | 420u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 350u, 0x08A8DB0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90FD8u) goto L_08A90FD8;
    return;
L_08A90FD8:
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14180)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14172)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14168)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A91004u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 492u, 0x08A8E5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A91004u) goto L_08A91004;
    return;
L_08A91004:
    ctx.gpr[31] = (0x08A9100Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08A9100C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14180)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14176)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[31] = (0x08A91024u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14164)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 118u, 0x08AB1300u>(ctx, &aot_mem) && ctx.pc == 0x08A91024u) goto L_08A91024;
    return;
L_08A91024:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12092), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12093), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A90F88;
      }
      goto L_08A91038;
    }
L_08A91038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A91078;
      }
      goto L_08A9105C;
    }
L_08A9105C:
    ctx.gpr[31] = (0x08A91064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 804u, 0x08A8FFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A91064u) goto L_08A91064;
    return;
L_08A91064:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A91070u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10224));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A91070u) goto L_08A91070;
    return;
L_08A91070:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12068), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A91090;
      }
      goto L_08A91078;
    }
L_08A91078:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12068)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08A9108C;
      }
      goto L_08A91084;
    }
L_08A91084:
    ctx.gpr[31] = (0x08A9108Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10200));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A9108Cu) goto L_08A9108C;
    return;
L_08A9108C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12068), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08A91090;
L_08A91090:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12072), ctx.gpr[16]);
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
L_08A91384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14120)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    goto L_08A913A4;
L_08A913A4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A913D4;
      }
      goto L_08A913B0;
    }
L_08A913B0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          goto L_08A913A4;
      }
      goto L_08A913BC;
    }
L_08A913BC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A913C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9880));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 428u, 0x08A86A38u>(ctx, &aot_mem) && ctx.pc == 0x08A913C8u) goto L_08A913C8;
    return;
L_08A913C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A913D4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A913F0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A913F0u) goto L_08A913F0;
    return;
L_08A913F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A913FC:
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14120)));
    ctx.gpr[6] = (0u | 0u);
    goto L_08A91408;
L_08A91408:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08A91424;
    }
    goto L_08A91414;
L_08A91414:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A91438;
      }
      goto L_08A91420;
    }
L_08A91420:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A91424;
L_08A91424:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          goto L_08A91408;
      }
      goto L_08A91430;
    }
L_08A91430:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91438:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91440:
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14120)));
    ctx.gpr[6] = (0u | 0u);
    goto L_08A9144C;
L_08A9144C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08A91468;
    }
    goto L_08A91458;
L_08A91458:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9147C;
      }
      goto L_08A91464;
    }
L_08A91464:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A91468;
L_08A91468:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          goto L_08A9144C;
      }
      goto L_08A91474;
    }
L_08A91474:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9147C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91484:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (33053u << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25147));
      if (branch_taken) {
          goto L_08A914E0;
      }
      goto L_08A91494;
    }
L_08A91494:
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[7] = (0u | 47u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(403));
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    goto L_08A914A4;
L_08A914A4:
    ctx.gpr[10] = (ctx.gpr[8] < static_cast<std::uint32_t>(91) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(65) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A914BC;
      }
      goto L_08A914B0;
    }
L_08A914B0:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A914BC;
      }
      goto L_08A914B8;
    }
L_08A914B8:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    goto L_08A914BC;
L_08A914BC:
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[8] = (0u | 92u);
        goto L_08A914C4;
    }
    goto L_08A914C4;
L_08A914C4:
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A914A4;
      }
      goto L_08A914E0;
    }
L_08A914E0:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A914F4;
      }
      goto L_08A914EC;
    }
L_08A914EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 17767u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A914F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A914FC:
    ctx.gpr[6] = (ctx.gpr[4] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (0u | 92u);
      if (branch_taken) {
          goto L_08A91530;
      }
      goto L_08A91518;
    }
L_08A91518:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A91534;
      }
      goto L_08A91524;
    }
L_08A91524:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    goto L_08A91530;
L_08A91530:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    goto L_08A91534;
L_08A91534:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A91550;
      }
      goto L_08A9153C;
    }
L_08A9153C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91550;
      }
      goto L_08A91544;
    }
L_08A91544:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    goto L_08A91550;
L_08A91550:
    if (ctx.gpr[6] == ctx.gpr[4]) {
    ctx.gpr[6] = (0u | 47u);
        goto L_08A91558;
    }
    goto L_08A91558;
L_08A91558:
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[5] = (0u | 47u);
        goto L_08A91560;
    }
    goto L_08A91560;
L_08A91560:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91578;
      }
      goto L_08A91568;
    }
L_08A91568:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91578;
      }
      goto L_08A91570;
    }
L_08A91570:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91578:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A915B4;
      }
      goto L_08A915A8;
    }
L_08A915A8:
    ctx.gpr[7] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A915BC;
      }
      goto L_08A915B4;
    }
L_08A915B4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08A915BC;
L_08A915BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 92u);
      if (branch_taken) {
          goto L_08A915CC;
      }
      goto L_08A915C4;
    }
L_08A915C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A915D8;
      }
      goto L_08A915CC;
    }
L_08A915CC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08A915D4;
L_08A915D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A915D8;
L_08A915D8:
    ctx.gpr[31] = (0x08A915E0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08A914FC;
L_08A915E0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08A915FC;
    }
    goto L_08A915E8;
L_08A915E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A915D4;
      }
      goto L_08A915FC;
    }
L_08A915FC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A91614;
      }
      goto L_08A91604;
    }
L_08A91604:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91614;
      }
      goto L_08A91610;
    }
L_08A91610:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A91614;
L_08A91614:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A917B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A917D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A917D4u) goto L_08A917D4;
    return;
L_08A917D4:
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14104)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A91804;
    }
    goto L_08A917E4;
L_08A917E4:
    ctx.gpr[31] = (0x08A917ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A917ECu) goto L_08A917EC;
    return;
L_08A917EC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91804:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14104), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A91818u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A91818u) goto L_08A91818;
    return;
L_08A91818:
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
L_08A91830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9184Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A9184Cu) goto L_08A9184C;
    return;
L_08A9184C:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14104)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91878;
      }
      goto L_08A9185C;
    }
L_08A9185C:
    ctx.gpr[31] = (0x08A91864u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A91864u) goto L_08A91864;
    return;
L_08A91864:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91878:
    ctx.gpr[31] = (0x08A91880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A91880u) goto L_08A91880;
    return;
L_08A91880:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A918B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A918B8u) goto L_08A918B8;
    return;
L_08A918B8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A918DC;
      }
      goto L_08A918C0;
    }
L_08A918C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14104)));
    goto L_08A918C4;
L_08A918C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A918C4;
      }
      goto L_08A918D8;
    }
L_08A918D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14104), ctx.gpr[4]);
    goto L_08A918DC;
L_08A918DC:
    ctx.gpr[31] = (0x08A918E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A918E4u) goto L_08A918E4;
    return;
L_08A918E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A918F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14104)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-14104), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91918:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91920:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12132)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12132), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9195C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A9198C;
    }
    goto L_08A91974;
L_08A91974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A91980u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 159u, 0x08AB190Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91980u) goto L_08A91980;
    return;
L_08A91980:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9198C:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A91998u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08A91920;
L_08A91998:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A919A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(12136), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12114)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A91A10;
      }
      goto L_08A919D0;
    }
L_08A919D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 16384u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[31] = (0x08A919F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9736));
    goto L_08A9195C;
L_08A919F8:
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14096), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (2222u << 16u);
    goto L_08A91A10;
L_08A91A10:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12124), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(26932), ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26936), ctx.gpr[5]);
    ctx.gpr[5] = (2223u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14108), 0u);
      if (branch_taken) {
          goto L_08A91A44;
      }
      goto L_08A91A34;
    }
L_08A91A34:
    ctx.gpr[31] = (0x08A91A3Cu);
    // nop
    goto L_08A933D4;
L_08A91A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A91A50;
      }
      goto L_08A91A44;
    }
L_08A91A44:
    ctx.gpr[31] = (0x08A91A4Cu);
    // nop
    goto L_08A91E70;
L_08A91A4C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A91A50;
L_08A91A50:
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[31] = (0x08A91A64u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12112), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A9506Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91A64u) goto L_08A91A64;
    return;
L_08A91A64:
    ctx.gpr[31] = (0x08A91A6Cu);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A91A6Cu) goto L_08A91A6C;
    return;
L_08A91A6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91D6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] & 15u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A91DE0;
      }
      goto L_08A91D88;
    }
L_08A91D88:
    ctx.gpr[7] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A91DE4;
      }
      goto L_08A91D94;
    }
L_08A91D94:
    ctx.gpr[7] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A91DE4;
      }
      goto L_08A91DA0;
    }
L_08A91DA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91DA8;
    }
L_08A91DA8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A91DA8;
      }
      goto L_08A91DD8;
    }
L_08A91DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91DE0;
    }
L_08A91DE0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_08A91DE4;
L_08A91DE4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A91DF0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A91DF0u) goto L_08A91DF0;
    return;
L_08A91DF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14136)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A91E2Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 141u, 0x08A94F58u>(ctx, &aot_mem) && ctx.pc == 0x08A91E2Cu) goto L_08A91E2C;
    return;
L_08A91E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12152), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A91E64u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 141u, 0x08A94F58u>(ctx, &aot_mem) && ctx.pc == 0x08A91E64u) goto L_08A91E64;
    return;
L_08A91E64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14084)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9207C;
      }
      goto L_08A91EA4;
    }
L_08A91EA4:
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[18] = (0u | 32768u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A92064;
      }
      goto L_08A91EB8;
    }
L_08A91EB8:
    ctx.gpr[31] = (0x08A91EC0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A91DFC;
L_08A91EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[5] = (0u | 76u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[8] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A91F00;
      }
      goto L_08A91ED4;
    }
L_08A91ED4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (0u | 81u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (2221u << 16u);
        goto L_08A91F04;
    }
    goto L_08A91EE4;
L_08A91EE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (0u | 69u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (2221u << 16u);
        goto L_08A91F04;
    }
    goto L_08A91EF4;
L_08A91EF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14088)));
        goto L_08A91F24;
    }
    goto L_08A91F00;
L_08A91F00:
    ctx.gpr[4] = (2221u << 16u);
    goto L_08A91F04;
L_08A91F04:
    ctx.gpr[31] = (0x08A91F0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9648));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 384u, 0x08A86388u>(ctx, &aot_mem) && ctx.pc == 0x08A91F0Cu) goto L_08A91F0C;
    return;
L_08A91F0C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A91F18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9600));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 428u, 0x08A86A38u>(ctx, &aot_mem) && ctx.pc == 0x08A91F18u) goto L_08A91F18;
    return;
L_08A91F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14088)));
    goto L_08A91F24;
L_08A91F24:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-14088), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A91F3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A91918;
L_08A91F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08A91F74u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12124), ctx.gpr[4]);
    goto L_08A91918;
L_08A91F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A91F9Cu);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12124), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 291u, 0x08A95A18u>(ctx, &aot_mem) && ctx.pc == 0x08A91F9Cu) goto L_08A91F9C;
    return;
L_08A91F9C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A91FB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9580));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 159u, 0x08AB190Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91FB0u) goto L_08A91FB0;
    return;
L_08A91FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A91FC8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 289u, 0x08A959FCu>(ctx, &aot_mem) && ctx.pc == 0x08A91FC8u) goto L_08A91FC8;
    return;
L_08A91FC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[31] = (0x08A91FE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9560));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 159u, 0x08AB190Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91FE0u) goto L_08A91FE0;
    return;
L_08A91FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A92030;
      }
      goto L_08A92000;
    }
L_08A92000:
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    goto L_08A92004;
L_08A92004:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A92020;
      }
      goto L_08A92014;
    }
L_08A92014:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A92014;
      }
      goto L_08A92020;
    }
L_08A92020:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A92004;
      }
      goto L_08A92030;
    }
L_08A92030:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A92044u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-14088), ctx.gpr[5]);
    goto L_08A933D4;
L_08A92044:
    ctx.gpr[31] = (0x08A9204Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 228u, 0x08AB1F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9204Cu) goto L_08A9204C;
    return;
L_08A9204C:
    ctx.gpr[31] = (0x08A92054u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 228u, 0x08AB1F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92054u) goto L_08A92054;
    return;
L_08A92054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14084)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-14084), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A920C4;
      }
      goto L_08A92064;
    }
L_08A92064:
    ctx.gpr[31] = (0x08A9206Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A91DFC;
L_08A9206C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14084)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-14084), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A920C4;
      }
      goto L_08A9207C;
    }
L_08A9207C:
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[5] = (0u | 49152u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A920C4;
      }
      goto L_08A92094;
    }
L_08A92094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[17] = (0u | 49152u);
    ctx.gpr[6] = (0u | 16384u);
    ctx.gpr[31] = (0x08A920A8u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A91D6C;
L_08A920A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A920B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16384));
    goto L_08A91DFC;
L_08A920B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-14088), ctx.gpr[4]);
    goto L_08A920C4;
L_08A920C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A920E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2223u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14092)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 49152u);
      if (branch_taken) {
          goto L_08A92150;
      }
      goto L_08A92138;
    }
L_08A92138:
    ctx.gpr[31] = (0x08A92140u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 289u, 0x08A959FCu>(ctx, &aot_mem) && ctx.pc == 0x08A92140u) goto L_08A92140;
    return;
L_08A92140:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9218C;
      }
      goto L_08A92150;
    }
L_08A92150:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A92174;
      }
      goto L_08A9215C;
    }
L_08A9215C:
    ctx.gpr[31] = (0x08A92164u);
    // nop
    goto L_08A91E70;
L_08A92164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A92174;
L_08A92174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A92180u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A91D6C;
L_08A92180:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08A9218C;
L_08A9218C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-14088), ctx.gpr[16]);
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
L_08A921B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14096)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A921F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 175u, 0x08A951F4u>(ctx, &aot_mem) && ctx.pc == 0x08A921F0u) goto L_08A921F0;
    return;
L_08A921F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[19] = (2223u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A9229C;
      }
      goto L_08A92230;
    }
L_08A92230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12160)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14096)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12160), ctx.gpr[4]);
    ctx.gpr[21] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A92260u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 175u, 0x08A951F4u>(ctx, &aot_mem) && ctx.pc == 0x08A92260u) goto L_08A92260;
    return;
L_08A92260:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A92280u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 147u, 0x08A94FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A92280u) goto L_08A92280;
    return;
L_08A92280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14092)));
    ctx.gpr[31] = (0x08A92290u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 147u, 0x08A94FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A92290u) goto L_08A92290;
    return;
L_08A92290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12156)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A922E4;
      }
      goto L_08A9229C;
    }
L_08A9229C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A922C0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 147u, 0x08A94FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A922C0u) goto L_08A922C0;
    return;
L_08A922C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14096)));
    ctx.gpr[31] = (0x08A922D0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 147u, 0x08A94FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A922D0u) goto L_08A922D0;
    return;
L_08A922D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12160)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12156)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12160), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_08A922E4;
L_08A922E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12156), ctx.gpr[16]);
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
L_08A92310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12128)));
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
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A92678;
      }
      goto L_08A9234C;
    }
L_08A9234C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12156), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12160), 0u);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12148), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A92600;
      }
      goto L_08A9237C;
    }
L_08A9237C:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9540));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[30] = (2223u << 16u);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-14160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[23] = (2222u << 16u);
    goto L_08A923A4;
L_08A923A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[6]) <= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08A925E4;
    }
    goto L_08A923B8;
L_08A923B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12113)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(12114)));
      if (branch_taken) {
          goto L_08A923E0;
      }
      goto L_08A923C8;
    }
L_08A923C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A923E0;
      }
      goto L_08A923D0;
    }
L_08A923D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A923DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A923DCu) goto L_08A923DC;
    return;
L_08A923DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(12114)));
    goto L_08A923E0;
L_08A923E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A923F8;
      }
      goto L_08A923E8;
    }
L_08A923E8:
    ctx.gpr[31] = (0x08A923F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 137u, 0x08A94F04u>(ctx, &aot_mem) && ctx.pc == 0x08A923F0u) goto L_08A923F0;
    return;
L_08A923F0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(12114)));
    goto L_08A923F8;
L_08A923F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A92408;
      }
      goto L_08A92400;
    }
L_08A92400:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08A925C0;
    }
    goto L_08A92408;
L_08A92408:
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(276)));
      if (branch_taken) {
          goto L_08A925AC;
      }
      goto L_08A92424;
    }
L_08A92424:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16385 ? 1u : 0u);
    ctx.gpr[16] = (2222u << 16u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (0u | 16384u);
        goto L_08A92438;
    }
    goto L_08A92438;
L_08A92438:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 49u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08A925A0;
    }
    goto L_08A92448;
L_08A92448:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A92460;
      }
      goto L_08A92450;
    }
L_08A92450:
    ctx.gpr[31] = (0x08A92458u);
    // nop
    goto L_08A91E70;
L_08A92458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12113)));
      if (branch_taken) {
          goto L_08A9247C;
      }
      goto L_08A92460;
    }
L_08A92460:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A92478u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_08A91E4C;
L_08A92478:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12113)));
    goto L_08A9247C;
L_08A9247C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92498;
      }
      goto L_08A92484;
    }
L_08A92484:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(12114)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92498;
      }
      goto L_08A92490;
    }
L_08A92490:
    ctx.gpr[31] = (0x08A92498u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A921B0;
L_08A92498:
    ctx.gpr[31] = (0x08A924A0u);
    // nop
    goto L_08A917B4;
L_08A924A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] != 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
        goto L_08A92514;
    }
    goto L_08A924AC;
L_08A924AC:
    ctx.gpr[31] = (0x08A924B4u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A924B4u) goto L_08A924B4;
    return;
L_08A924B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12148)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A924E0;
      }
      goto L_08A924C0;
    }
L_08A924C0:
    ctx.gpr[31] = (0x08A924C8u);
    // nop
    goto L_08A917B4;
L_08A924C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A924AC;
      }
      goto L_08A924D4;
    }
L_08A924D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A92514;
      }
      goto L_08A924DC;
    }
L_08A924DC:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A924E0;
L_08A924E0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12128), static_cast<std::uint8_t>(0u));
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
L_08A92514:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(12114)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A92534;
      }
      goto L_08A92520;
    }
L_08A92520:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9252Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A920E4;
L_08A9252C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92548;
      }
      goto L_08A92534;
    }
L_08A92534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14096)));
    ctx.gpr[31] = (0x08A92548u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A91D6C;
L_08A92548:
    ctx.gpr[31] = (0x08A92550u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A92550u) goto L_08A92550;
    return;
L_08A92550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(284), ctx.gpr[16]);
        goto L_08A92590;
    }
    goto L_08A9256C;
L_08A9256C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92588;
      }
      goto L_08A92578;
    }
L_08A92578:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A9257C;
L_08A9257C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A9257C;
    }
    goto L_08A92588;
L_08A92588:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A92590;
      }
      goto L_08A92590;
    }
L_08A92590:
    ctx.gpr[31] = (0x08A92598u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A92598u) goto L_08A92598;
    return;
L_08A92598:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(12114)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A925A0;
L_08A925A0:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16384));
      if (branch_taken) {
          goto L_08A92424;
      }
      goto L_08A925AC;
    }
L_08A925AC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08A925C0;
    }
    goto L_08A925B4;
L_08A925B4:
    ctx.gpr[31] = (0x08A925BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 151u, 0x08A95028u>(ctx, &aot_mem) && ctx.pc == 0x08A925BCu) goto L_08A925BC;
    return;
L_08A925BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A925C0;
L_08A925C0:
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12124)));
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A925E4;
L_08A925E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A923A4;
      }
      goto L_08A92600;
    }
L_08A92600:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A92624;
      }
      goto L_08A92610;
    }
L_08A92610:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12114)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A92624;
      }
      goto L_08A9261C;
    }
L_08A9261C:
    ctx.gpr[31] = (0x08A92624u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14096)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 228u, 0x08AB1F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92624u) goto L_08A92624;
    return;
L_08A92624:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12113)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A92674;
      }
      goto L_08A92630;
    }
L_08A92630:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12156)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12160)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A9264Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9512));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A9264Cu) goto L_08A9264C;
    return;
L_08A9264C:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A92658u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14140)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 149u, 0x08A9500Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92658u) goto L_08A92658;
    return;
L_08A92658:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A92674;
      }
      goto L_08A92664;
    }
L_08A92664:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A92670u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14092)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 228u, 0x08AB1F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92670u) goto L_08A92670;
    return;
L_08A92670:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A92674;
L_08A92674:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12128), static_cast<std::uint8_t>(0u));
    goto L_08A92678;
L_08A92678:
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
L_08A926A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_08A926B0;
L_08A926B0:
    ctx.gpr[31] = (0x08A926B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 154u, 0x08A95050u>(ctx, &aot_mem) && ctx.pc == 0x08A926B8u) goto L_08A926B8;
    return;
L_08A926B8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A926B0;
      }
      goto L_08A926C8;
    }
L_08A926C8:
    ctx.gpr[31] = (0x08A926D0u);
    // nop
    goto L_08A92310;
L_08A926D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A926B0;
      }
      goto L_08A926D8;
    }
L_08A926D8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12120)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A92710;
      }
      goto L_08A926F0;
    }
L_08A926F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14116)));
    goto L_08A926F4;
L_08A926F4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92718;
      }
      goto L_08A92700;
    }
L_08A92700:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(268));
      if (branch_taken) {
          goto L_08A926F4;
      }
      goto L_08A92710;
    }
L_08A92710:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92718:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A92748u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A91484;
L_08A92748:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12124)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A92864;
      }
      goto L_08A92760;
    }
L_08A92760:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2223u << 16u);
    goto L_08A92768;
L_08A92768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(17));
      if (branch_taken) {
          goto L_08A92850;
      }
      goto L_08A9277C;
    }
L_08A9277C:
    ctx.gpr[31] = (0x08A92784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A91580;
L_08A92784:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12124)));
        goto L_08A92854;
    }
    goto L_08A9278C;
L_08A9278C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A92828;
      }
      goto L_08A927A4;
    }
L_08A927A4:
    ctx.gpr[31] = (0x08A927ACu);
    // nop
    goto L_08A926D8;
L_08A927AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08A927F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A927F8u) goto L_08A927F8;
    return;
L_08A927F8:
    ctx.gpr[4] = (202u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(18944));
    ctx.gpr[2] = (ctx.gpr[19] + ctx.gpr[2]);
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
L_08A92828:
    ctx.gpr[2] = (0u | 0u);
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
L_08A92850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12124)));
    goto L_08A92854;
L_08A92854:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_08A92768;
      }
      goto L_08A92864;
    }
L_08A92864:
    ctx.gpr[31] = (0x08A9286Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 137u, 0x08A94F04u>(ctx, &aot_mem) && ctx.pc == 0x08A9286Cu) goto L_08A9286C;
    return;
L_08A9286C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A928E4;
      }
      goto L_08A92878;
    }
L_08A92878:
    ctx.gpr[31] = (0x08A92880u);
    // nop
    goto L_08A926D8;
L_08A92880:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18944));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
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
L_08A928E4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A9290C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] & ctx.gpr[16]);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (202u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(18944));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A9299C;
      }
      goto L_08A9294C;
    }
L_08A9294C:
    ctx.gpr[9] = (202u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(19200));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[16] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A9299C;
      }
      goto L_08A92960;
    }
L_08A92960:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[7] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A929C4;
      }
      goto L_08A92988;
    }
L_08A92988:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08A929CC;
      }
      goto L_08A9299C;
    }
L_08A9299C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A929B0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 139u, 0x08A94F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A929B0u) goto L_08A929B0;
    return;
L_08A929B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A929C4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    goto L_08A929CC;
L_08A929CC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08A92AA4;
      }
      goto L_08A929D4;
    }
L_08A929D4:
    ctx.gpr[11] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(12116), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[3] = (0u | 2u);
    ctx.gpr[11] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[3];
    ctx.gpr[2] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A92A5C;
      }
      goto L_08A929EC;
    }
L_08A929EC:
    ctx.gpr[3] = (0u | 3u);
    if (ctx.gpr[9] == ctx.gpr[3]) {
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(12177), static_cast<std::uint8_t>(ctx.gpr[10]));
        goto L_08A92A24;
    }
    goto L_08A929F8;
L_08A929F8:
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(12177), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12176), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12172), ctx.gpr[7]);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12112)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
        goto L_08A92AE0;
    }
    goto L_08A92A18;
L_08A92A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92B3C;
      }
      goto L_08A92A20;
    }
L_08A92A20:
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(12177), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_08A92A24;
L_08A92A24:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12176), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[7] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(12178), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[7] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-14080), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14076), ctx.gpr[5]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14072), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92A5C:
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(12177), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12176), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(12178), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12168), ctx.gpr[7]);
    ctx.gpr[7] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-14080), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14076), ctx.gpr[5]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14072), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92AA4:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A92AB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 139u, 0x08A94F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92AB8u) goto L_08A92AB8;
    return;
L_08A92AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92AE0:
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[8] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-14080), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-14076), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14072), ctx.gpr[6]);
    ctx.gpr[10] = (2223u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-14068), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A92B28;
      }
      goto L_08A92B18;
    }
L_08A92B18:
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14072), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A92B28;
      }
      goto L_08A92B24;
    }
L_08A92B24:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14072), 0u);
    goto L_08A92B28;
L_08A92B28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A92B3C;
      }
      goto L_08A92B30;
    }
L_08A92B30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A92B3C;
      }
      goto L_08A92B38;
    }
L_08A92B38:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A92B3C;
L_08A92B3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92B50:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12178), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12176), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (202u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18944));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08A92BD8;
      }
      goto L_08A92BC0;
    }
L_08A92BC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A92BD8;
      }
      goto L_08A92BC8;
    }
L_08A92BC8:
    ctx.gpr[31] = (0x08A92BD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 151u, 0x08A95028u>(ctx, &aot_mem) && ctx.pc == 0x08A92BD0u) goto L_08A92BD0;
    return;
L_08A92BD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08A92BD8;
L_08A92BD8:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92BF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[7] << 16u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92C1C:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (ctx.gpr[5] >> 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] >> 24u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92CE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14132)));
    ctx.gpr[18] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A92DC8;
      }
      goto L_08A92D10;
    }
L_08A92D10:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A92D14;
L_08A92D14:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08A92D1C;
L_08A92D1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A92D2Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A914FC;
L_08A92D2C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_08A92D48;
    }
    goto L_08A92D34;
L_08A92D34:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A92D1C;
      }
      goto L_08A92D48;
    }
L_08A92D48:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92D7C;
      }
      goto L_08A92D50;
    }
L_08A92D50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92D7C;
      }
      goto L_08A92D5C;
    }
L_08A92D5C:
    ctx.gpr[2] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
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
L_08A92D7C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A92D98;
      }
      goto L_08A92D84;
    }
L_08A92D84:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A92D88;
L_08A92D88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A92D88;
    }
    goto L_08A92D94;
L_08A92D94:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    goto L_08A92D98;
L_08A92D98:
    ctx.gpr[31] = (0x08A92DA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A92BF0;
L_08A92DA0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16383));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 14u));
    ctx.gpr[5] = (ctx.gpr[5] >> 18u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 14u));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14128)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A92D14;
      }
      goto L_08A92DC8;
    }
L_08A92DC8:
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
L_08A92DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14060)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A92E64;
      }
      goto L_08A92E2C;
    }
L_08A92E2C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (2223u << 16u);
    goto L_08A92E34;
L_08A92E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14064)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x08A92E48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A91580;
L_08A92E48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92F58;
      }
      goto L_08A92E50;
    }
L_08A92E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14060)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A92E34;
      }
      goto L_08A92E64;
    }
L_08A92E64:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A92E7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9400));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 384u, 0x08A86388u>(ctx, &aot_mem) && ctx.pc == 0x08A92E7Cu) goto L_08A92E7C;
    return;
L_08A92E7C:
    ctx.gpr[31] = (0x08A92E84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A92CE0;
L_08A92E84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A92EA0;
      }
      goto L_08A92E90;
    }
L_08A92E90:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A92F58;
      }
      goto L_08A92EA0;
    }
L_08A92EA0:
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14128)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A92EB4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A92EB4u) goto L_08A92EB4;
    return;
L_08A92EB4:
    ctx.gpr[31] = (0x08A92EBCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A92EBCu) goto L_08A92EBC;
    return;
L_08A92EBC:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A92EDCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A92C1C;
L_08A92EDC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A92EECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A92C1C;
L_08A92EEC:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A92EFCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A92C1C;
L_08A92EFC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A92F0Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A92C1C;
L_08A92F0C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A92F1Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A92C1C;
L_08A92F1C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16383));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 14u));
    ctx.gpr[6] = (ctx.gpr[4] >> 18u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 14u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A92F54;
      }
      goto L_08A92F40;
    }
L_08A92F40:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A92F40;
      }
      goto L_08A92F54;
    }
L_08A92F54:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-14128), ctx.gpr[4]);
    goto L_08A92F58;
L_08A92F58:
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
L_08A92F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A92FB0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A91440;
L_08A92FB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92FD0;
      }
      goto L_08A92FBC;
    }
L_08A92FBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A92FCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9360));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 428u, 0x08A86A38u>(ctx, &aot_mem) && ctx.pc == 0x08A92FCCu) goto L_08A92FCC;
    return;
L_08A92FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A92FD0;
L_08A92FD0:
    ctx.gpr[31] = (0x08A92FD8u);
    // nop
    goto L_08A92CE0;
L_08A92FD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A930D0;
      }
      goto L_08A92FE4;
    }
L_08A92FE4:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A92FF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A92BF0;
L_08A92FF0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16383));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 14u));
    ctx.gpr[5] = (ctx.gpr[5] >> 18u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 14u));
    ctx.gpr[31] = (0x08A93010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A92BF0;
L_08A93010:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 14u));
    ctx.gpr[4] = (ctx.gpr[4] >> 18u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 14u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 14u));
    ctx.gpr[4] = (ctx.gpr[4] >> 18u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 14u));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08A93048;
    }
    goto L_08A93048;
L_08A93048:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A93054u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08A92C1C;
L_08A93054:
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A93060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A92BF0;
L_08A93060:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[22] = (0u | 0u);
        goto L_08A9306C;
    }
    goto L_08A9306C;
L_08A9306C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A93078u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A92C1C;
L_08A93078:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A93084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A92BF0;
L_08A93084:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08A93090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A92C1C;
L_08A93090:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A930D0;
      }
      goto L_08A930A0;
    }
L_08A930A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
        goto L_08A930AC;
    }
    goto L_08A930AC;
L_08A930AC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A930D0;
      }
      goto L_08A930B8;
    }
L_08A930B8:
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[20]);
    goto L_08A930BC;
L_08A930BC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A930BC;
      }
      goto L_08A930D0;
    }
L_08A930D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A930F8:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12117)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93104:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12112)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93110:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12115)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A93148u);
    // nop
    goto L_08A92720;
L_08A93148:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A93164u);
    // nop
    goto L_08A9290C;
L_08A93164:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A93180u);
    // nop
    goto L_08A92B68;
L_08A93180:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9318C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A931F0;
      }
      goto L_08A931AC;
    }
L_08A931AC:
    ctx.gpr[31] = (0x08A931B4u);
    // nop
    goto L_08A937F4;
L_08A931B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A931D8;
      }
      goto L_08A931C0;
    }
L_08A931C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A931D8;
      }
      goto L_08A931CC;
    }
L_08A931CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14124)));
    ctx.gpr[31] = (0x08A931D8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12116), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 126u, 0x08A94E48u>(ctx, &aot_mem) && ctx.pc == 0x08A931D8u) goto L_08A931D8;
    return;
L_08A931D8:
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
L_08A931F0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A93218u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A93218u) goto L_08A93218;
    return;
L_08A93218:
    ctx.gpr[31] = (0x08A93220u);
    // nop
    goto L_08A9318C;
L_08A93220:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A93238;
      }
      goto L_08A93228;
    }
L_08A93228:
    ctx.gpr[31] = (0x08A93230u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A93230u) goto L_08A93230;
    return;
L_08A93230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93218;
      }
      goto L_08A93238;
    }
L_08A93238:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A932C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (202u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18944));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[8] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A9333C;
      }
      goto L_08A9331C;
    }
L_08A9331C:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A93350;
      }
      goto L_08A93328;
    }
L_08A93328:
    ctx.gpr[31] = (0x08A93330u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 119u, 0x08A94DD0u>(ctx, &aot_mem) && ctx.pc == 0x08A93330u) goto L_08A93330;
    return;
L_08A93330:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9333C:
    ctx.gpr[31] = (0x08A93344u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 121u, 0x08A94DECu>(ctx, &aot_mem) && ctx.pc == 0x08A93344u) goto L_08A93344;
    return;
L_08A93344:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A93374u);
    // nop
    goto L_08A92DE8;
L_08A93374:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A93390u);
    // nop
    goto L_08A92F80;
L_08A93390:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9339C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A933ACu);
    // nop
    goto L_08A91384;
L_08A933AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A933B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A933C8u);
    // nop
    goto L_08A913FC;
L_08A933C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A933D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26936)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] << 8u);
    ctx.gpr[6] = (ctx.gpr[30] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A93438u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A91920;
L_08A93438:
    ctx.gpr[18] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112), ctx.gpr[2]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9356C;
      }
      goto L_08A93458;
    }
L_08A93458:
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (0u | 49u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08A9346C;
L_08A9346C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08A93480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A93480u) goto L_08A93480;
    return;
L_08A93480:
    ctx.gpr[31] = (0x08A93488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A93488u) goto L_08A93488;
    return;
L_08A93488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A9349Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A9349Cu) goto L_08A9349C;
    return;
L_08A9349C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08A934D8;
    }
    goto L_08A934C8;
L_08A934C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08A934D8;
L_08A934D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A934F4;
      }
      goto L_08A934E8;
    }
L_08A934E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08A934F4;
L_08A934F4:
    ctx.gpr[31] = (0x08A934FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A91484;
L_08A934FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A9351Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A9351Cu) goto L_08A9351C;
    return;
L_08A9351C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A93550;
      }
      goto L_08A9352C;
    }
L_08A9352C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16383));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 14u));
    ctx.gpr[6] = (ctx.gpr[6] >> 18u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 14u));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
        goto L_08A93554;
    }
    goto L_08A9354C;
L_08A9354C:
    ctx.gpr[5] = (0u | 0u);
    goto L_08A93550;
L_08A93550:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    goto L_08A93554;
L_08A93554:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A9346C;
      }
      goto L_08A9356C;
    }
L_08A9356C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A9357Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A91920;
L_08A9357C:
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14108), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A936CC;
      }
      goto L_08A93594;
    }
L_08A93594:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u | 48u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A935A4;
L_08A935A4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(276), ctx.gpr[20]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14112)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(280)));
      if (branch_taken) {
          goto L_08A93694;
      }
      goto L_08A935C8;
    }
L_08A935C8:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.gpr[10] = (ctx.gpr[10] >> 30u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A936BC;
    }
    goto L_08A935E8;
L_08A935E8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A93610;
      }
      goto L_08A93600;
    }
L_08A93600:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-87));
    ctx.gpr[11] = (ctx.gpr[11] << 24u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 24u));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 65 ? 1u : 0u);
    goto L_08A93610;
L_08A93610:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A93628;
      }
      goto L_08A93618;
    }
L_08A93618:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-55));
    ctx.gpr[11] = (ctx.gpr[11] << 24u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 24u));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 48 ? 1u : 0u);
    goto L_08A93628;
L_08A93628:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
        goto L_08A93640;
    }
    goto L_08A93630;
L_08A93630:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-48));
    ctx.gpr[11] = (ctx.gpr[11] << 24u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08A93640;
L_08A93640:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[2] = (ctx.gpr[11] & 1u);
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08A93658;
    }
    goto L_08A93658;
L_08A93658:
    ctx.gpr[2] = (ctx.gpr[11] & 2u);
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08A93664;
    }
    goto L_08A93664;
L_08A93664:
    ctx.gpr[2] = (ctx.gpr[11] & 4u);
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08A93670;
    }
    goto L_08A93670;
L_08A93670:
    ctx.gpr[11] = (ctx.gpr[11] & 8u);
    if (ctx.gpr[11] != 0u) {
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08A9367C;
    }
    goto L_08A9367C;
L_08A9367C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A935E8;
      }
      goto L_08A9368C;
    }
L_08A9368C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A936BC;
      }
      goto L_08A93694;
    }
L_08A93694:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A936BC;
    }
    goto L_08A936A4;
L_08A936A4:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A936A4;
      }
      goto L_08A936B8;
    }
L_08A936B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A936BC;
L_08A936BC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(288));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A935A4;
      }
      goto L_08A936CC;
    }
L_08A936CC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12140)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (2222u << 16u);
        goto L_08A936EC;
    }
    goto L_08A936DC;
L_08A936DC:
    ctx.gpr[31] = (0x08A936E4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 228u, 0x08AB1F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A936E4u) goto L_08A936E4;
    return;
L_08A936E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12140), 0u);
    ctx.gpr[5] = (2222u << 16u);
    goto L_08A936EC;
L_08A936EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12144)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A93708;
    }
    goto L_08A936F8;
L_08A936F8:
    ctx.gpr[31] = (0x08A93700u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 228u, 0x08AB1F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93700u) goto L_08A93700;
    return;
L_08A93700:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12144), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A93708;
L_08A93708:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 14u));
    ctx.gpr[4] = (ctx.gpr[4] >> 18u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 14u));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 14u));
    ctx.gpr[6] = (ctx.gpr[6] >> 18u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 14u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A93750u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A91920;
L_08A93750:
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14100), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14104), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A937B0;
      }
      goto L_08A93778;
    }
L_08A93778:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (2223u << 16u);
    goto L_08A93780;
L_08A93780:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-14100)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16384));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-14100)));
      if (branch_taken) {
          goto L_08A93780;
      }
      goto L_08A937B0;
    }
L_08A937B0:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8), 0u);
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
L_08A937F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12177)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A9389C;
      }
      goto L_08A93830;
    }
L_08A93830:
    ctx.gpr[23] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A93864;
      }
      goto L_08A93840;
    }
L_08A93840:
    ctx.gpr[31] = (0x08A93848u);
    // nop
    goto L_08A91830;
L_08A93848:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A938D4;
      }
      goto L_08A93858;
    }
L_08A93858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A939D8;
      }
      goto L_08A93860;
    }
L_08A93860:
    ctx.gpr[4] = (2223u << 16u);
    goto L_08A93864;
L_08A93864:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14124), 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9389C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12116), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A938D4:
    ctx.gpr[31] = (0x08A938DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A9506Cu>(ctx, &aot_mem) && ctx.pc == 0x08A938DCu) goto L_08A938DC;
    return;
L_08A938DC:
    ctx.gpr[31] = (0x08A938E4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A938E4u) goto L_08A938E4;
    return;
L_08A938E4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A93900;
      }
      goto L_08A938F4;
    }
L_08A938F4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93BE0;
      }
      goto L_08A938FC;
    }
L_08A938FC:
    ctx.gpr[16] = (2222u << 16u);
    goto L_08A93900;
L_08A93900:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12178)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A93974;
      }
      goto L_08A93910;
    }
L_08A93910:
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12172)));
    ctx.gpr[21] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A93940u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 137u, 0x08A94F04u>(ctx, &aot_mem) && ctx.pc == 0x08A93940u) goto L_08A93940;
    return;
L_08A93940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12172)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12168), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14116)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12178), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A93974;
L_08A93974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12168)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14072)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14080)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[31] = (0x08A93990u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14076)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 139u, 0x08A94F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93990u) goto L_08A93990;
    return;
L_08A93990:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12168), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(12177), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12116), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A939D8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14068)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (ctx.gpr[4] | ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[30] = (0u < ctx.gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A93BC0;
      }
      goto L_08A939F0;
    }
L_08A939F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14072)));
    ctx.gpr[21] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14076)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08A93A0C;
L_08A93A0C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16384));
      if (branch_taken) {
          goto L_08A93A24;
      }
      goto L_08A93A14;
    }
L_08A93A14:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
        goto L_08A93A28;
    }
    goto L_08A93A20;
L_08A93A20:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A93A24;
L_08A93A24:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08A93A28;
L_08A93A28:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08A93B90;
    }
    goto L_08A93A30;
L_08A93A30:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14080)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A93B68;
      }
      goto L_08A93A40;
    }
L_08A93A40:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14076)));
    goto L_08A93A48;
L_08A93A48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(16384));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08A93A60;
    }
    goto L_08A93A60;
L_08A93A60:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
        goto L_08A93A6C;
    }
    goto L_08A93A6C;
L_08A93A6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A93A8Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A91D6C;
L_08A93A8C:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A93B5C;
      }
      goto L_08A93A9C;
    }
L_08A93A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14072)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A93B5C;
      }
      goto L_08A93AA8;
    }
L_08A93AA8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14068)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A93B04;
      }
      goto L_08A93ABC;
    }
L_08A93ABC:
    ctx.gpr[18] = (2223u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14160));
    ctx.gpr[31] = (0x08A93ACCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A93ACCu) goto L_08A93ACC;
    return;
L_08A93ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14068)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    goto L_08A93AD4;
L_08A93AD4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A93AF8;
      }
      goto L_08A93ADC;
    }
L_08A93ADC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93AF8;
      }
      goto L_08A93AE4;
    }
L_08A93AE4:
    ctx.gpr[31] = (0x08A93AECu);
    // nop
    goto L_08A918F8;
L_08A93AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14068)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
      if (branch_taken) {
          goto L_08A93AD4;
      }
      goto L_08A93AF8;
    }
L_08A93AF8:
    ctx.gpr[31] = (0x08A93B00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A93B00u) goto L_08A93B00;
    return;
L_08A93B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14068)));
    goto L_08A93B04;
L_08A93B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (2222u << 16u);
        goto L_08A93B24;
    }
    goto L_08A93B10;
L_08A93B10:
    ctx.gpr[31] = (0x08A93B18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    goto L_08A91894;
L_08A93B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-14068)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), 0u);
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A93B24;
L_08A93B24:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12177), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93B5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14076)));
        goto L_08A93A48;
    }
    goto L_08A93B68;
L_08A93B68:
    ctx.gpr[31] = (0x08A93B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A9506Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B70u) goto L_08A93B70;
    return;
L_08A93B70:
    ctx.gpr[31] = (0x08A93B78u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A93B78u) goto L_08A93B78;
    return;
L_08A93B78:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93BE0;
      }
      goto L_08A93B80;
    }
L_08A93B80:
    ctx.gpr[31] = (0x08A93B88u);
    // nop
    goto L_08A92B50;
L_08A93B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93BE0;
      }
      goto L_08A93B90;
    }
L_08A93B90:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A93A0C;
    }
    goto L_08A93B98;
L_08A93B98:
    ctx.gpr[31] = (0x08A93BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A9506Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BA0u) goto L_08A93BA0;
    return;
L_08A93BA0:
    ctx.gpr[31] = (0x08A93BA8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A93BA8u) goto L_08A93BA8;
    return;
L_08A93BA8:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93BE0;
      }
      goto L_08A93BB0;
    }
L_08A93BB0:
    ctx.gpr[31] = (0x08A93BB8u);
    // nop
    goto L_08A92B50;
L_08A93BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93BE0;
      }
      goto L_08A93BC0;
    }
L_08A93BC0:
    ctx.gpr[31] = (0x08A93BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A9506Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93BC8u) goto L_08A93BC8;
    return;
L_08A93BC8:
    ctx.gpr[31] = (0x08A93BD0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A93BD0u) goto L_08A93BD0;
    return;
L_08A93BD0:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93BE0;
      }
      goto L_08A93BD8;
    }
L_08A93BD8:
    ctx.gpr[31] = (0x08A93BE0u);
    // nop
    goto L_08A92B50;
L_08A93BE0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0163(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0163_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_163(Runtime &runtime) {
    runtime.register_generated_unit(163u, 0x08A90000u, 16384u, &recomp_unit_0163, &recomp_unit_0163_entry);
    runtime.register_function(0x08A90000u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9000Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90040u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9004Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90054u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90060u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90070u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90078u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90080u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9008Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90094u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90108u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90118u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90120u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9012Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9015Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90164u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90174u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9018Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90200u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90254u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90258u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90260u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90268u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90284u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90324u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90360u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90370u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90378u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9038Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90394u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9039Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90428u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90458u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9045Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90464u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9046Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90498u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90508u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90510u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90524u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90534u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9053Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90548u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90558u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90568u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90580u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9058Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90594u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9059Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90614u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90620u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90624u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9062Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90644u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90650u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90664u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9066Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90684u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90700u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90708u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90710u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90718u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90720u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90734u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90744u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90748u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9075Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9076Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90770u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90778u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90780u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90788u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90804u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90840u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9085Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9089Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90908u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90954u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9096Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90984u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90990u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91004u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9100Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91024u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91038u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9105Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91064u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91070u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91078u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91084u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9108Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91090u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91384u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91408u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91414u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91420u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91424u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91430u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91438u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91440u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9144Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91458u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91464u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91468u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91474u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9147Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91484u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91494u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91518u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91524u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91530u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91534u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9153Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91544u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91550u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91558u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91560u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91568u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91570u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91578u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91580u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91604u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91610u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91614u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91804u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91818u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91830u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9184Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9185Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91864u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91878u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91880u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91894u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91918u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91920u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9195Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91974u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91980u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9198Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91998u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91ED4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92000u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92004u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92014u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92020u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92030u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92044u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9204Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92054u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92064u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9206Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9207Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92094u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92138u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92140u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92150u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9215Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92164u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92174u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92180u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9218Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92230u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92260u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92280u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92290u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9229Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92310u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9234Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9237Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92400u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92408u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92424u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92438u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92448u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92450u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92458u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92460u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92478u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9247Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92484u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92490u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92498u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92514u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92520u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9252Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92534u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92548u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92550u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9256Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92578u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9257Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92588u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92590u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92598u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92600u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92610u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9261Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92624u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92630u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9264Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92658u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92664u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92670u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92674u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92678u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92700u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92710u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92718u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92720u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92748u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92760u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92768u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9277Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92784u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9278Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92828u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92850u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92854u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92864u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9286Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92878u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92880u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9290Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9294Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92960u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92988u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9299Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EDCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93010u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93048u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93054u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93060u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9306Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93078u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93084u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93090u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93104u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93110u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93138u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93148u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93154u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93164u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93170u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93180u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9318Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93208u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93218u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93220u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93228u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93230u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93238u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9331Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93328u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93330u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9333Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93344u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93350u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93364u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93374u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93380u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93390u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9339Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93438u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93458u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9346Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93480u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93488u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9349Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9351Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9352Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9354Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93550u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93554u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9356Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9357Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93594u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93600u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93610u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93618u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93628u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93630u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93640u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93658u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93664u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93670u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9367Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9368Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93694u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93700u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93708u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93750u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93778u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93780u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93830u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93840u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93848u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93858u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93860u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93864u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9389Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93900u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93910u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93940u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93974u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93990u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ABCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ACCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ADCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BE0u, &recomp_unit_0163, "recomp_unit_0163");
}
} // namespace psprecomp

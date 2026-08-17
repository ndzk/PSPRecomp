#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0115[4092] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 20, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    50, 0, 51, 0, 0, 52, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 63, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 95, 0, 0, 0, 0, 0, 96, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 107, 0,
    108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 133, 0, 0, 0, 0, 134, 135, 0, 0, 0, 136, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144,
    0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 160, 161, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0,
    0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 235, 0, 236, 0, 237, 0, 0, 0, 0,
    238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0,
    256, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 265, 0, 266, 0, 0, 267, 0,
    0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 287,
    0, 288, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0,
    0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0,
    305, 0, 306, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314,
    0, 315, 0, 316, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 338, 0, 339,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 348,
    0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 363, 0, 364, 365, 0, 0, 366,
    0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 374, 0, 375, 0, 376, 377, 378, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0,
    405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0,
    412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 423, 0, 424, 0, 0, 425,
    0, 426, 0, 0, 0, 427, 0, 0, 428, 429, 0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 434, 435, 0, 436, 0, 0, 437, 0, 438, 0, 439,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 445,
    446, 0, 0, 0, 447, 0, 0, 448, 0, 449, 450, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 457, 458,
    0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 462, 0, 0, 0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 468, 0, 469, 470, 0, 471, 0, 0,
    0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    477, 478, 0, 479, 0, 0, 480, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0,
    0, 0, 0, 486, 487, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 491, 492, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 499, 0, 500, 0, 0, 501, 0, 0, 0, 502, 0, 0,
    503, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 515,
    0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0,
    0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0,
    0, 0, 532, 0, 0, 0, 0, 0, 533, 534, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 537, 0, 0, 538, 0, 539, 0, 540, 0, 0, 541,
    0, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 545, 546, 0, 547, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0,
    550, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 559, 0, 0, 560, 561, 0, 562,
    0, 0, 563, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 566, 567, 0, 0, 0, 568, 0, 569, 0, 0, 570, 571, 0, 0, 0, 572, 0,
    0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 578, 0, 0, 0, 579,
    0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0,
    588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 598, 0, 0, 599, 0, 0, 0, 600, 0, 601, 0, 0, 0,
    602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 606, 0, 0, 607, 608, 0, 0, 0, 0, 609,
    610, 0, 611, 612, 0, 613, 0, 0, 614, 0, 615, 616, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628,
    0, 0, 629, 0, 630, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642,
    0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 644, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 653, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 661, 662, 0, 0,
    663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    666, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 670, 671, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685,
    0, 0, 0, 0, 0, 0, 0, 0, 686, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 697, 0, 698, 0, 0, 0,
    699, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 707,
};
void recomp_unit_0115_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089D0000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0115[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D0000;
    case 2u: goto L_089D0008;
    case 3u: goto L_089D0014;
    case 4u: goto L_089D0040;
    case 5u: goto L_089D0050;
    case 6u: goto L_089D0058;
    case 7u: goto L_089D0118;
    case 8u: goto L_089D022C;
    case 9u: goto L_089D0304;
    case 10u: goto L_089D030C;
    case 11u: goto L_089D0390;
    case 12u: goto L_089D0398;
    case 13u: goto L_089D03A0;
    case 14u: goto L_089D03B0;
    case 15u: goto L_089D0434;
    case 16u: goto L_089D0444;
    case 17u: goto L_089D04C8;
    case 18u: goto L_089D04E0;
    case 19u: goto L_089D04EC;
    case 20u: goto L_089D04F0;
    case 21u: goto L_089D0504;
    case 22u: goto L_089D051C;
    case 23u: goto L_089D0524;
    case 24u: goto L_089D05A4;
    case 25u: goto L_089D05B0;
    case 26u: goto L_089D05B8;
    case 27u: goto L_089D0694;
    case 28u: goto L_089D0740;
    case 29u: goto L_089D0744;
    case 30u: goto L_089D075C;
    case 31u: goto L_089D0768;
    case 32u: goto L_089D0790;
    case 33u: goto L_089D07A8;
    case 34u: goto L_089D07B0;
    case 35u: goto L_089D0830;
    case 36u: goto L_089D083C;
    case 37u: goto L_089D0844;
    case 38u: goto L_089D0890;
    case 39u: goto L_089D0954;
    case 40u: goto L_089D0958;
    case 41u: goto L_089D0970;
    case 42u: goto L_089D097C;
    case 43u: goto L_089D09A4;
    case 44u: goto L_089D09B0;
    case 45u: goto L_089D09FC;
    case 46u: goto L_089D0A10;
    case 47u: goto L_089D0A2C;
    case 48u: goto L_089D0A54;
    case 49u: goto L_089D0A7C;
    case 50u: goto L_089D0A80;
    case 51u: goto L_089D0A88;
    case 52u: goto L_089D0A94;
    case 53u: goto L_089D0A98;
    case 54u: goto L_089D0AA0;
    case 55u: goto L_089D0AC4;
    case 56u: goto L_089D0B10;
    case 57u: goto L_089D0B18;
    case 58u: goto L_089D0B20;
    case 59u: goto L_089D0B3C;
    case 60u: goto L_089D0B4C;
    case 61u: goto L_089D0B54;
    case 62u: goto L_089D0B64;
    case 63u: goto L_089D0B68;
    case 64u: goto L_089D0B70;
    case 65u: goto L_089D0B9C;
    case 66u: goto L_089D0BC8;
    case 67u: goto L_089D0BF0;
    case 68u: goto L_089D0C10;
    case 69u: goto L_089D0C2C;
    case 70u: goto L_089D0C3C;
    case 71u: goto L_089D0C48;
    case 72u: goto L_089D0C78;
    case 73u: goto L_089D0C84;
    case 74u: goto L_089D0CD4;
    case 75u: goto L_089D0CDC;
    case 76u: goto L_089D0D08;
    case 77u: goto L_089D0D20;
    case 78u: goto L_089D0D2C;
    case 79u: goto L_089D0D3C;
    case 80u: goto L_089D0D48;
    case 81u: goto L_089D0D70;
    case 82u: goto L_089D0D74;
    case 83u: goto L_089D0D94;
    case 84u: goto L_089D0DA0;
    case 85u: goto L_089D0DB0;
    case 86u: goto L_089D0DC0;
    case 87u: goto L_089D0DC8;
    case 88u: goto L_089D0DD4;
    case 89u: goto L_089D0DDC;
    case 90u: goto L_089D0DE4;
    case 91u: goto L_089D0DFC;
    case 92u: goto L_089D0E1C;
    case 93u: goto L_089D0E4C;
    case 94u: goto L_089D0E5C;
    case 95u: goto L_089D0E60;
    case 96u: goto L_089D0E78;
    case 97u: goto L_089D0E80;
    case 98u: goto L_089D0EA4;
    case 99u: goto L_089D0EB8;
    case 100u: goto L_089D0EC8;
    case 101u: goto L_089D0ED4;
    case 102u: goto L_089D0F24;
    case 103u: goto L_089D0F2C;
    case 104u: goto L_089D0F34;
    case 105u: goto L_089D0F5C;
    case 106u: goto L_089D0F74;
    case 107u: goto L_089D0F78;
    case 108u: goto L_089D0F80;
    case 109u: goto L_089D0F98;
    case 110u: goto L_089D0FD4;
    case 111u: goto L_089D0FDC;
    case 112u: goto L_089D0FFC;
    case 113u: goto L_089D1004;
    case 114u: goto L_089D1014;
    case 115u: goto L_089D101C;
    case 116u: goto L_089D1030;
    case 117u: goto L_089D103C;
    case 118u: goto L_089D1070;
    case 119u: goto L_089D10C0;
    case 120u: goto L_089D10C8;
    case 121u: goto L_089D10E0;
    case 122u: goto L_089D10EC;
    case 123u: goto L_089D1100;
    case 124u: goto L_089D1114;
    case 125u: goto L_089D111C;
    case 126u: goto L_089D1150;
    case 127u: goto L_089D115C;
    case 128u: goto L_089D116C;
    case 129u: goto L_089D1174;
    case 130u: goto L_089D1184;
    case 131u: goto L_089D11B8;
    case 132u: goto L_089D11BC;
    case 133u: goto L_089D11C8;
    case 134u: goto L_089D11DC;
    case 135u: goto L_089D11E0;
    case 136u: goto L_089D11F0;
    case 137u: goto L_089D1200;
    case 138u: goto L_089D12A8;
    case 139u: goto L_089D12B8;
    case 140u: goto L_089D12C4;
    case 141u: goto L_089D12D4;
    case 142u: goto L_089D12E0;
    case 143u: goto L_089D12F0;
    case 144u: goto L_089D12FC;
    case 145u: goto L_089D1310;
    case 146u: goto L_089D1318;
    case 147u: goto L_089D1320;
    case 148u: goto L_089D1348;
    case 149u: goto L_089D135C;
    case 150u: goto L_089D1398;
    case 151u: goto L_089D13AC;
    case 152u: goto L_089D13BC;
    case 153u: goto L_089D13C8;
    case 154u: goto L_089D13D8;
    case 155u: goto L_089D1410;
    case 156u: goto L_089D1418;
    case 157u: goto L_089D1420;
    case 158u: goto L_089D1430;
    case 159u: goto L_089D1438;
    case 160u: goto L_089D1444;
    case 161u: goto L_089D1448;
    case 162u: goto L_089D1450;
    case 163u: goto L_089D1458;
    case 164u: goto L_089D1468;
    case 165u: goto L_089D14A4;
    case 166u: goto L_089D14B0;
    case 167u: goto L_089D14B4;
    case 168u: goto L_089D14BC;
    case 169u: goto L_089D14C8;
    case 170u: goto L_089D14D0;
    case 171u: goto L_089D14D8;
    case 172u: goto L_089D150C;
    case 173u: goto L_089D1518;
    case 174u: goto L_089D1524;
    case 175u: goto L_089D1560;
    case 176u: goto L_089D157C;
    case 177u: goto L_089D159C;
    case 178u: goto L_089D15BC;
    case 179u: goto L_089D15D8;
    case 180u: goto L_089D15E4;
    case 181u: goto L_089D15EC;
    case 182u: goto L_089D15F4;
    case 183u: goto L_089D1604;
    case 184u: goto L_089D1618;
    case 185u: goto L_089D1624;
    case 186u: goto L_089D1640;
    case 187u: goto L_089D1658;
    case 188u: goto L_089D1664;
    case 189u: goto L_089D1680;
    case 190u: goto L_089D1688;
    case 191u: goto L_089D16CC;
    case 192u: goto L_089D1700;
    case 193u: goto L_089D1708;
    case 194u: goto L_089D172C;
    case 195u: goto L_089D1744;
    case 196u: goto L_089D1760;
    case 197u: goto L_089D1780;
    case 198u: goto L_089D1788;
    case 199u: goto L_089D17A0;
    case 200u: goto L_089D17B4;
    case 201u: goto L_089D17DC;
    case 202u: goto L_089D1804;
    case 203u: goto L_089D1810;
    case 204u: goto L_089D181C;
    case 205u: goto L_089D1828;
    case 206u: goto L_089D1860;
    case 207u: goto L_089D1868;
    case 208u: goto L_089D1874;
    case 209u: goto L_089D1890;
    case 210u: goto L_089D18B4;
    case 211u: goto L_089D18C0;
    case 212u: goto L_089D18EC;
    case 213u: goto L_089D1914;
    case 214u: goto L_089D1AA0;
    case 215u: goto L_089D1AC8;
    case 216u: goto L_089D1ADC;
    case 217u: goto L_089D1AE4;
    case 218u: goto L_089D1B38;
    case 219u: goto L_089D1B3C;
    case 220u: goto L_089D1B44;
    case 221u: goto L_089D1B4C;
    case 222u: goto L_089D1B58;
    case 223u: goto L_089D1BCC;
    case 224u: goto L_089D1C1C;
    case 225u: goto L_089D1C30;
    case 226u: goto L_089D1C38;
    case 227u: goto L_089D1CD4;
    case 228u: goto L_089D1D00;
    case 229u: goto L_089D1D1C;
    case 230u: goto L_089D1D24;
    case 231u: goto L_089D1D2C;
    case 232u: goto L_089D1D38;
    case 233u: goto L_089D1D50;
    case 234u: goto L_089D1D58;
    case 235u: goto L_089D1D5C;
    case 236u: goto L_089D1D64;
    case 237u: goto L_089D1D6C;
    case 238u: goto L_089D1D80;
    case 239u: goto L_089D1D8C;
    case 240u: goto L_089D1DD0;
    case 241u: goto L_089D1E10;
    case 242u: goto L_089D1E3C;
    case 243u: goto L_089D1E58;
    case 244u: goto L_089D1E68;
    case 245u: goto L_089D1E9C;
    case 246u: goto L_089D1EA4;
    case 247u: goto L_089D1EA8;
    case 248u: goto L_089D1ECC;
    case 249u: goto L_089D1EF0;
    case 250u: goto L_089D1EFC;
    case 251u: goto L_089D1F18;
    case 252u: goto L_089D1F30;
    case 253u: goto L_089D1F60;
    case 254u: goto L_089D1F68;
    case 255u: goto L_089D1F78;
    case 256u: goto L_089D1F80;
    case 257u: goto L_089D1F8C;
    case 258u: goto L_089D1F94;
    case 259u: goto L_089D1FA4;
    case 260u: goto L_089D1FAC;
    case 261u: goto L_089D1FBC;
    case 262u: goto L_089D1FC4;
    case 263u: goto L_089D1FD4;
    case 264u: goto L_089D1FE0;
    case 265u: goto L_089D1FE4;
    case 266u: goto L_089D1FEC;
    case 267u: goto L_089D1FF8;
    case 268u: goto L_089D200C;
    case 269u: goto L_089D2018;
    case 270u: goto L_089D2034;
    case 271u: goto L_089D2048;
    case 272u: goto L_089D2050;
    case 273u: goto L_089D2074;
    case 274u: goto L_089D2080;
    case 275u: goto L_089D2088;
    case 276u: goto L_089D20AC;
    case 277u: goto L_089D20C8;
    case 278u: goto L_089D20D8;
    case 279u: goto L_089D20E4;
    case 280u: goto L_089D20F4;
    case 281u: goto L_089D2110;
    case 282u: goto L_089D2124;
    case 283u: goto L_089D2140;
    case 284u: goto L_089D215C;
    case 285u: goto L_089D2164;
    case 286u: goto L_089D2174;
    case 287u: goto L_089D217C;
    case 288u: goto L_089D2184;
    case 289u: goto L_089D2190;
    case 290u: goto L_089D219C;
    case 291u: goto L_089D21A4;
    case 292u: goto L_089D21B0;
    case 293u: goto L_089D21B8;
    case 294u: goto L_089D21C4;
    case 295u: goto L_089D21D0;
    case 296u: goto L_089D21DC;
    case 297u: goto L_089D21E8;
    case 298u: goto L_089D21F4;
    case 299u: goto L_089D2208;
    case 300u: goto L_089D2214;
    case 301u: goto L_089D2224;
    case 302u: goto L_089D2254;
    case 303u: goto L_089D225C;
    case 304u: goto L_089D2274;
    case 305u: goto L_089D2280;
    case 306u: goto L_089D2288;
    case 307u: goto L_089D228C;
    case 308u: goto L_089D2298;
    case 309u: goto L_089D22A4;
    case 310u: goto L_089D22C0;
    case 311u: goto L_089D22CC;
    case 312u: goto L_089D22D4;
    case 313u: goto L_089D22E4;
    case 314u: goto L_089D22FC;
    case 315u: goto L_089D2304;
    case 316u: goto L_089D230C;
    case 317u: goto L_089D2318;
    case 318u: goto L_089D2324;
    case 319u: goto L_089D232C;
    case 320u: goto L_089D233C;
    case 321u: goto L_089D2348;
    case 322u: goto L_089D2364;
    case 323u: goto L_089D2380;
    case 324u: goto L_089D2398;
    case 325u: goto L_089D23A4;
    case 326u: goto L_089D23B0;
    case 327u: goto L_089D23BC;
    case 328u: goto L_089D23E4;
    case 329u: goto L_089D2400;
    case 330u: goto L_089D2410;
    case 331u: goto L_089D2418;
    case 332u: goto L_089D242C;
    case 333u: goto L_089D2434;
    case 334u: goto L_089D243C;
    case 335u: goto L_089D2454;
    case 336u: goto L_089D245C;
    case 337u: goto L_089D2468;
    case 338u: goto L_089D2474;
    case 339u: goto L_089D247C;
    case 340u: goto L_089D2494;
    case 341u: goto L_089D24AC;
    case 342u: goto L_089D24B0;
    case 343u: goto L_089D24BC;
    case 344u: goto L_089D24C8;
    case 345u: goto L_089D24E0;
    case 346u: goto L_089D24E8;
    case 347u: goto L_089D24F0;
    case 348u: goto L_089D24FC;
    case 349u: goto L_089D2508;
    case 350u: goto L_089D2510;
    case 351u: goto L_089D2524;
    case 352u: goto L_089D253C;
    case 353u: goto L_089D2550;
    case 354u: goto L_089D255C;
    case 355u: goto L_089D2574;
    case 356u: goto L_089D258C;
    case 357u: goto L_089D25B0;
    case 358u: goto L_089D25B8;
    case 359u: goto L_089D25C0;
    case 360u: goto L_089D25C8;
    case 361u: goto L_089D25D0;
    case 362u: goto L_089D25D8;
    case 363u: goto L_089D25E4;
    case 364u: goto L_089D25EC;
    case 365u: goto L_089D25F0;
    case 366u: goto L_089D25FC;
    case 367u: goto L_089D2608;
    case 368u: goto L_089D2620;
    case 369u: goto L_089D2628;
    case 370u: goto L_089D2634;
    case 371u: goto L_089D2644;
    case 372u: goto L_089D264C;
    case 373u: goto L_089D265C;
    case 374u: goto L_089D2660;
    case 375u: goto L_089D2668;
    case 376u: goto L_089D2670;
    case 377u: goto L_089D2674;
    case 378u: goto L_089D2678;
    case 379u: goto L_089D2680;
    case 380u: goto L_089D26A0;
    case 381u: goto L_089D26B8;
    case 382u: goto L_089D270C;
    case 383u: goto L_089D2728;
    case 384u: goto L_089D2730;
    case 385u: goto L_089D274C;
    case 386u: goto L_089D2750;
    case 387u: goto L_089D2778;
    case 388u: goto L_089D27B0;
    case 389u: goto L_089D27B8;
    case 390u: goto L_089D27CC;
    case 391u: goto L_089D27D4;
    case 392u: goto L_089D27E4;
    case 393u: goto L_089D27F0;
    case 394u: goto L_089D2818;
    case 395u: goto L_089D2824;
    case 396u: goto L_089D2830;
    case 397u: goto L_089D2844;
    case 398u: goto L_089D284C;
    case 399u: goto L_089D2874;
    case 400u: goto L_089D2880;
    case 401u: goto L_089D288C;
    case 402u: goto L_089D28B4;
    case 403u: goto L_089D28DC;
    case 404u: goto L_089D28E8;
    case 405u: goto L_089D2900;
    case 406u: goto L_089D2908;
    case 407u: goto L_089D2920;
    case 408u: goto L_089D292C;
    case 409u: goto L_089D2954;
    case 410u: goto L_089D2960;
    case 411u: goto L_089D2978;
    case 412u: goto L_089D2980;
    case 413u: goto L_089D2988;
    case 414u: goto L_089D29AC;
    case 415u: goto L_089D29B8;
    case 416u: goto L_089D29D4;
    case 417u: goto L_089D29E0;
    case 418u: goto L_089D2A08;
    case 419u: goto L_089D2A10;
    case 420u: goto L_089D2A24;
    case 421u: goto L_089D2A58;
    case 422u: goto L_089D2A64;
    case 423u: goto L_089D2A68;
    case 424u: goto L_089D2A70;
    case 425u: goto L_089D2A7C;
    case 426u: goto L_089D2A84;
    case 427u: goto L_089D2A94;
    case 428u: goto L_089D2AA0;
    case 429u: goto L_089D2AA4;
    case 430u: goto L_089D2AAC;
    case 431u: goto L_089D2AB8;
    case 432u: goto L_089D2AC0;
    case 433u: goto L_089D2AC8;
    case 434u: goto L_089D2AD4;
    case 435u: goto L_089D2AD8;
    case 436u: goto L_089D2AE0;
    case 437u: goto L_089D2AEC;
    case 438u: goto L_089D2AF4;
    case 439u: goto L_089D2AFC;
    case 440u: goto L_089D2B38;
    case 441u: goto L_089D2B40;
    case 442u: goto L_089D2B58;
    case 443u: goto L_089D2B68;
    case 444u: goto L_089D2B74;
    case 445u: goto L_089D2B7C;
    case 446u: goto L_089D2B80;
    case 447u: goto L_089D2B90;
    case 448u: goto L_089D2B9C;
    case 449u: goto L_089D2BA4;
    case 450u: goto L_089D2BA8;
    case 451u: goto L_089D2BC0;
    case 452u: goto L_089D2BC8;
    case 453u: goto L_089D2BD4;
    case 454u: goto L_089D2BDC;
    case 455u: goto L_089D2BE4;
    case 456u: goto L_089D2BF0;
    case 457u: goto L_089D2BF8;
    case 458u: goto L_089D2BFC;
    case 459u: goto L_089D2C04;
    case 460u: goto L_089D2C1C;
    case 461u: goto L_089D2C24;
    case 462u: goto L_089D2C28;
    case 463u: goto L_089D2C3C;
    case 464u: goto L_089D2C44;
    case 465u: goto L_089D2C4C;
    case 466u: goto L_089D2C54;
    case 467u: goto L_089D2C5C;
    case 468u: goto L_089D2C60;
    case 469u: goto L_089D2C68;
    case 470u: goto L_089D2C6C;
    case 471u: goto L_089D2C74;
    case 472u: goto L_089D2C84;
    case 473u: goto L_089D2C8C;
    case 474u: goto L_089D2C98;
    case 475u: goto L_089D2CBC;
    case 476u: goto L_089D2CE0;
    case 477u: goto L_089D2D00;
    case 478u: goto L_089D2D04;
    case 479u: goto L_089D2D0C;
    case 480u: goto L_089D2D18;
    case 481u: goto L_089D2D2C;
    case 482u: goto L_089D2D34;
    case 483u: goto L_089D2D4C;
    case 484u: goto L_089D2D54;
    case 485u: goto L_089D2D68;
    case 486u: goto L_089D2D8C;
    case 487u: goto L_089D2D90;
    case 488u: goto L_089D2D98;
    case 489u: goto L_089D2DA8;
    case 490u: goto L_089D2DB4;
    case 491u: goto L_089D2DBC;
    case 492u: goto L_089D2DC0;
    case 493u: goto L_089D2DC8;
    case 494u: goto L_089D2DE4;
    case 495u: goto L_089D2E18;
    case 496u: goto L_089D2E38;
    case 497u: goto L_089D2E40;
    case 498u: goto L_089D2E4C;
    case 499u: goto L_089D2E50;
    case 500u: goto L_089D2E58;
    case 501u: goto L_089D2E64;
    case 502u: goto L_089D2E74;
    case 503u: goto L_089D2E80;
    case 504u: goto L_089D2E98;
    case 505u: goto L_089D2EA0;
    case 506u: goto L_089D2EBC;
    case 507u: goto L_089D2EC4;
    case 508u: goto L_089D2EC8;
    case 509u: goto L_089D2ED0;
    case 510u: goto L_089D2EF8;
    case 511u: goto L_089D2F20;
    case 512u: goto L_089D2F50;
    case 513u: goto L_089D2F58;
    case 514u: goto L_089D2F64;
    case 515u: goto L_089D2F7C;
    case 516u: goto L_089D2F84;
    case 517u: goto L_089D2F90;
    case 518u: goto L_089D2F98;
    case 519u: goto L_089D2FB0;
    case 520u: goto L_089D2FCC;
    case 521u: goto L_089D2FE8;
    case 522u: goto L_089D3018;
    case 523u: goto L_089D3024;
    case 524u: goto L_089D303C;
    case 525u: goto L_089D304C;
    case 526u: goto L_089D306C;
    case 527u: goto L_089D3088;
    case 528u: goto L_089D3098;
    case 529u: goto L_089D30A4;
    case 530u: goto L_089D30DC;
    case 531u: goto L_089D30EC;
    case 532u: goto L_089D3108;
    case 533u: goto L_089D3120;
    case 534u: goto L_089D3124;
    case 535u: goto L_089D3138;
    case 536u: goto L_089D3140;
    case 537u: goto L_089D3154;
    case 538u: goto L_089D3160;
    case 539u: goto L_089D3168;
    case 540u: goto L_089D3170;
    case 541u: goto L_089D317C;
    case 542u: goto L_089D3190;
    case 543u: goto L_089D319C;
    case 544u: goto L_089D31A4;
    case 545u: goto L_089D31B8;
    case 546u: goto L_089D31BC;
    case 547u: goto L_089D31C4;
    case 548u: goto L_089D31C8;
    case 549u: goto L_089D31F8;
    case 550u: goto L_089D3200;
    case 551u: goto L_089D3208;
    case 552u: goto L_089D3210;
    case 553u: goto L_089D3220;
    case 554u: goto L_089D322C;
    case 555u: goto L_089D3234;
    case 556u: goto L_089D3248;
    case 557u: goto L_089D3254;
    case 558u: goto L_089D325C;
    case 559u: goto L_089D3264;
    case 560u: goto L_089D3270;
    case 561u: goto L_089D3274;
    case 562u: goto L_089D327C;
    case 563u: goto L_089D3288;
    case 564u: goto L_089D3290;
    case 565u: goto L_089D3298;
    case 566u: goto L_089D32BC;
    case 567u: goto L_089D32C0;
    case 568u: goto L_089D32D0;
    case 569u: goto L_089D32D8;
    case 570u: goto L_089D32E4;
    case 571u: goto L_089D32E8;
    case 572u: goto L_089D32F8;
    case 573u: goto L_089D3304;
    case 574u: goto L_089D3320;
    case 575u: goto L_089D3328;
    case 576u: goto L_089D3344;
    case 577u: goto L_089D3368;
    case 578u: goto L_089D336C;
    case 579u: goto L_089D337C;
    case 580u: goto L_089D3388;
    case 581u: goto L_089D33A4;
    case 582u: goto L_089D33D0;
    case 583u: goto L_089D33D4;
    case 584u: goto L_089D33E8;
    case 585u: goto L_089D33F4;
    case 586u: goto L_089D3428;
    case 587u: goto L_089D3478;
    case 588u: goto L_089D3480;
    case 589u: goto L_089D3488;
    case 590u: goto L_089D34A4;
    case 591u: goto L_089D34AC;
    case 592u: goto L_089D34B0;
    case 593u: goto L_089D34C0;
    case 594u: goto L_089D34CC;
    case 595u: goto L_089D3500;
    case 596u: goto L_089D3534;
    case 597u: goto L_089D3548;
    case 598u: goto L_089D354C;
    case 599u: goto L_089D3558;
    case 600u: goto L_089D3568;
    case 601u: goto L_089D3570;
    case 602u: goto L_089D3580;
    case 603u: goto L_089D359C;
    case 604u: goto L_089D35AC;
    case 605u: goto L_089D35D4;
    case 606u: goto L_089D35D8;
    case 607u: goto L_089D35E4;
    case 608u: goto L_089D35E8;
    case 609u: goto L_089D35FC;
    case 610u: goto L_089D3600;
    case 611u: goto L_089D3608;
    case 612u: goto L_089D360C;
    case 613u: goto L_089D3614;
    case 614u: goto L_089D3620;
    case 615u: goto L_089D3628;
    case 616u: goto L_089D362C;
    case 617u: goto L_089D3640;
    case 618u: goto L_089D364C;
    case 619u: goto L_089D3684;
    case 620u: goto L_089D36A0;
    case 621u: goto L_089D36AC;
    case 622u: goto L_089D36C0;
    case 623u: goto L_089D36CC;
    case 624u: goto L_089D3700;
    case 625u: goto L_089D3708;
    case 626u: goto L_089D373C;
    case 627u: goto L_089D3770;
    case 628u: goto L_089D377C;
    case 629u: goto L_089D3788;
    case 630u: goto L_089D3790;
    case 631u: goto L_089D37A0;
    case 632u: goto L_089D37A8;
    case 633u: goto L_089D37C8;
    case 634u: goto L_089D37D8;
    case 635u: goto L_089D37EC;
    case 636u: goto L_089D381C;
    case 637u: goto L_089D3828;
    case 638u: goto L_089D38C8;
    case 639u: goto L_089D38D0;
    case 640u: goto L_089D3968;
    case 641u: goto L_089D3974;
    case 642u: goto L_089D39FC;
    case 643u: goto L_089D3A04;
    case 644u: goto L_089D3A84;
    case 645u: goto L_089D3A9C;
    case 646u: goto L_089D3AA4;
    case 647u: goto L_089D3AB4;
    case 648u: goto L_089D3ABC;
    case 649u: goto L_089D3ACC;
    case 650u: goto L_089D3AD4;
    case 651u: goto L_089D3AE4;
    case 652u: goto L_089D3AEC;
    case 653u: goto L_089D3AF8;
    case 654u: goto L_089D3B30;
    case 655u: goto L_089D3B38;
    case 656u: goto L_089D3B5C;
    case 657u: goto L_089D3B9C;
    case 658u: goto L_089D3BA8;
    case 659u: goto L_089D3BD0;
    case 660u: goto L_089D3BE4;
    case 661u: goto L_089D3BF0;
    case 662u: goto L_089D3BF4;
    case 663u: goto L_089D3C00;
    case 664u: goto L_089D3C2C;
    case 665u: goto L_089D3C4C;
    case 666u: goto L_089D3C80;
    case 667u: goto L_089D3C8C;
    case 668u: goto L_089D3CA8;
    case 669u: goto L_089D3CBC;
    case 670u: goto L_089D3CC8;
    case 671u: goto L_089D3CCC;
    case 672u: goto L_089D3CD8;
    case 673u: goto L_089D3D08;
    case 674u: goto L_089D3D1C;
    case 675u: goto L_089D3D4C;
    case 676u: goto L_089D3D60;
    case 677u: goto L_089D3D90;
    case 678u: goto L_089D3DA4;
    case 679u: goto L_089D3DD4;
    case 680u: goto L_089D3DE8;
    case 681u: goto L_089D3E04;
    case 682u: goto L_089D3E34;
    case 683u: goto L_089D3E5C;
    case 684u: goto L_089D3E6C;
    case 685u: goto L_089D3E7C;
    case 686u: goto L_089D3EA0;
    case 687u: goto L_089D3EA4;
    case 688u: goto L_089D3EB4;
    case 689u: goto L_089D3ECC;
    case 690u: goto L_089D3EDC;
    case 691u: goto L_089D3F08;
    case 692u: goto L_089D3F2C;
    case 693u: goto L_089D3F34;
    case 694u: goto L_089D3F3C;
    case 695u: goto L_089D3F58;
    case 696u: goto L_089D3F64;
    case 697u: goto L_089D3F68;
    case 698u: goto L_089D3F70;
    case 699u: goto L_089D3F80;
    case 700u: goto L_089D3F8C;
    case 701u: goto L_089D3FA4;
    case 702u: goto L_089D3FAC;
    case 703u: goto L_089D3FBC;
    case 704u: goto L_089D3FC8;
    case 705u: goto L_089D3FD0;
    case 706u: goto L_089D3FE4;
    case 707u: goto L_089D3FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D0000:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089D0008;
L_089D0008:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089D0014u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 495u, 0x08A967A8u>(ctx, &aot_mem) && ctx.pc == 0x089D0014u) goto L_089D0014;
    return;
L_089D0014:
    ctx.gpr[4] = (16997u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 12000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D0058;
      }
      goto L_089D0040;
    }
L_089D0040:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089D0058;
      }
      goto L_089D0050;
    }
L_089D0050:
    ctx.gpr[31] = (0x089D0058u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 586u, 0x089CFDDCu>(ctx, &aot_mem) && ctx.pc == 0x089D0058u) goto L_089D0058;
    return;
L_089D0058:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[20] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[20] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (65534u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x089D0118u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 582u, 0x089CFBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0118u) goto L_089D0118;
    return;
L_089D0118:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D022C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[19] - ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[19] - ctx.fpr[0];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[3] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[19] - ctx.fpr[18];
    ctx.fpr[4] = ctx.fpr[1] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = ctx.fpr[2] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[14] = ctx.fpr[2] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D0390;
      }
      goto L_089D0304;
    }
L_089D0304:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D04C8;
      }
      goto L_089D030C;
    }
L_089D030C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D04F0;
      }
      goto L_089D0390;
    }
L_089D0390:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D0434;
      }
      goto L_089D0398;
    }
L_089D0398:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D04C8;
      }
      goto L_089D03A0;
    }
L_089D03A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089D03B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089D03B0u) goto L_089D03B0;
    return;
L_089D03B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D04F0;
      }
      goto L_089D0434;
    }
L_089D0434:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089D0444u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0444u) goto L_089D0444;
    return;
L_089D0444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D04F0;
      }
      goto L_089D04C8;
    }
L_089D04C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[31] = (0x089D04E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29920));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D04E0u) goto L_089D04E0;
    return;
L_089D04E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D04ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D04ECu) goto L_089D04EC;
    return;
L_089D04EC:
    ctx.gpr[16] = (0u | 0u);
    goto L_089D04F0;
L_089D04F0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (65534u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089D05A4;
      }
      goto L_089D051C;
    }
L_089D051C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[7] = (16256u << 16u);
      if (branch_taken) {
          goto L_089D0740;
      }
      goto L_089D0524;
    }
L_089D0524:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D05A4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D0694;
      }
      goto L_089D05B0;
    }
L_089D05B0:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089D0744;
    }
    goto L_089D05B8;
L_089D05B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0740:
    ctx.gpr[4] = (0u | 1u);
    goto L_089D0744;
L_089D0744:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[31] = (0x089D075Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29920));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D075Cu) goto L_089D075C;
    return;
L_089D075C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D0768u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D0768u) goto L_089D0768;
    return;
L_089D0768:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (65534u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D0830;
      }
      goto L_089D07A8;
    }
L_089D07A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[7] = (16256u << 16u);
      if (branch_taken) {
          goto L_089D0954;
      }
      goto L_089D07B0;
    }
L_089D07B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0830:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D0890;
      }
      goto L_089D083C;
    }
L_089D083C:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089D0958;
    }
    goto L_089D0844;
L_089D0844:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0890:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0954:
    ctx.gpr[4] = (0u | 1u);
    goto L_089D0958;
L_089D0958:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[31] = (0x089D0970u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29920));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0970u) goto L_089D0970;
    return;
L_089D0970:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D097Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D097Cu) goto L_089D097C;
    return;
L_089D097C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D09A4:
    ctx.gpr[5] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24088), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D09B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[8] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24084), ctx.gpr[17]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-24380));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-24380), ctx.gpr[9]);
    ctx.gpr[8] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-24372));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D09FCu);
    ctx.gpr[9] = (4u << 16u);
    goto L_089D0AC4;
L_089D09FC:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24080), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_089D0A2C;
    }
    goto L_089D0A10;
L_089D0A10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24084), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0A2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-24380));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D0A98;
      }
      goto L_089D0A7C;
    }
L_089D0A7C:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(28));
    goto L_089D0A80;
L_089D0A80:
    ctx.gpr[31] = (0x089D0A88u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089D0DFC;
L_089D0A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089D0A80;
      }
      goto L_089D0A94;
    }
L_089D0A94:
    ctx.gpr[16] = (2222u << 16u);
    goto L_089D0A98;
L_089D0A98:
    ctx.gpr[31] = (0x089D0AA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24080)));
    goto L_089D0DFC;
L_089D0AA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24080), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24084), 0u);
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
L_089D0AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (0u | 0u);
        goto L_089D0B10;
    }
    goto L_089D0B10;
L_089D0B10:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[17] = (0u | 16u);
        goto L_089D0B18;
    }
    goto L_089D0B18;
L_089D0B18:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_089D0BC8;
      }
      goto L_089D0B20;
    }
L_089D0B20:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (255u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24080)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089D0B54;
      }
      goto L_089D0B3C;
    }
L_089D0B3C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D0B4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0B4Cu) goto L_089D0B4C;
    return;
L_089D0B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D0B68;
      }
      goto L_089D0B54;
    }
L_089D0B54:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D0B64u);
    ctx.gpr[4] = (0u | 36u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0B64u) goto L_089D0B64;
    return;
L_089D0B64:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_089D0B68;
L_089D0B68:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089D0B9C;
      }
      goto L_089D0B70;
    }
L_089D0B70:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089D0BF0;
      }
      goto L_089D0B9C;
    }
L_089D0B9C:
    ctx.gpr[2] = (0u | 0u);
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
L_089D0BC8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_089D0BF0;
L_089D0BF0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[21] = (ctx.gpr[5] >> 3u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089D0C84;
      }
      goto L_089D0C10;
    }
L_089D0C10:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_089D0C2C;
L_089D0C2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D0C3Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0C3Cu) goto L_089D0C3C;
    return;
L_089D0C3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D0CD4;
      }
      goto L_089D0C48;
    }
L_089D0C48:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089D0C78u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089D0C78u) goto L_089D0C78;
    return;
L_089D0C78:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_089D0C2C;
    }
    goto L_089D0C84;
L_089D0C84:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24380)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24380));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24380)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24380), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089D0CD4:
    ctx.gpr[31] = (0x089D0CDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D0D48;
L_089D0CDC:
    ctx.gpr[2] = (0u | 0u);
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
L_089D0D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0D20u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D0AC4;
L_089D0D20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0D2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0D3Cu);
    // nop
    goto L_089D0AC4;
L_089D0D3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0D48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D0DA0;
      }
      goto L_089D0D70;
    }
L_089D0D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089D0D74;
L_089D0D74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D0D94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0D94u) goto L_089D0D94;
    return;
L_089D0D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089D0D74;
    }
    goto L_089D0DA0;
L_089D0DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D0DE4;
      }
      goto L_089D0DB0;
    }
L_089D0DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24080)));
    ctx.gpr[5] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089D0DC8;
      }
      goto L_089D0DC0;
    }
L_089D0DC0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
        goto L_089D0DDC;
    }
    goto L_089D0DC8;
L_089D0DC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D0DD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0DD4u) goto L_089D0DD4;
    return;
L_089D0DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0DE4;
      }
      goto L_089D0DDC;
    }
L_089D0DDC:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D0DE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0DE4u) goto L_089D0DE4;
    return;
L_089D0DE4:
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
L_089D0DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0E1Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_089D0D48;
L_089D0E1C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0E4C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089D0E78;
      }
      goto L_089D0E5C;
    }
L_089D0E5C:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_089D0E60;
L_089D0E60:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089D0E60;
      }
      goto L_089D0E78;
    }
L_089D0E78:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0E80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[8];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089D0F80;
      }
      goto L_089D0EA4;
    }
L_089D0EA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_089D0EB8;
L_089D0EB8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089D0F74;
      }
      goto L_089D0EC8;
    }
L_089D0EC8:
    ctx.gpr[10] = (ctx.gpr[10] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089D0F78;
    }
    goto L_089D0ED4;
L_089D0ED4:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[6] >> 3u);
    ctx.gpr[9] = (ctx.gpr[8] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[6] & 31u)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D0F5C;
      }
      goto L_089D0F24;
    }
L_089D0F24:
    ctx.gpr[31] = (0x089D0F2Cu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_089D0E4C;
L_089D0F2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0F5C;
      }
      goto L_089D0F34;
    }
L_089D0F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D0F5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0F5Cu) goto L_089D0F5C;
    return;
L_089D0F5C:
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
L_089D0F74:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089D0F78;
L_089D0F78:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D0EB8;
      }
      goto L_089D0F80;
    }
L_089D0F80:
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
L_089D0F98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D103C;
      }
      goto L_089D0FD4;
    }
L_089D0FD4:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089D0FDC;
L_089D0FDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[31] = (0x089D0FFCu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089D0E4C;
L_089D0FFC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089D101C;
    }
    goto L_089D1004;
L_089D1004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D1014u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1014u) goto L_089D1014;
    return;
L_089D1014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D1030;
      }
      goto L_089D101C;
    }
L_089D101C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    goto L_089D1030;
L_089D1030:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    if (ctx.gpr[20] != ctx.gpr[19]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089D0FDC;
    }
    goto L_089D103C;
L_089D103C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.lo);
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
L_089D1070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[8];
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D1200;
      }
      goto L_089D10C0;
    }
L_089D10C0:
    ctx.gpr[21] = (0u | 128u);
    ctx.gpr[4] = (2222u << 16u);
    goto L_089D10C8;
L_089D10C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D10E0u);
    ctx.gpr[5] = (1u << 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D10E0u) goto L_089D10E0;
    return;
L_089D10E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D111C;
      }
      goto L_089D10EC;
    }
L_089D10EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089D1100u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089D1100u) goto L_089D1100;
    return;
L_089D1100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[30] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1150;
      }
      goto L_089D1114;
    }
L_089D1114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D11E0;
      }
      goto L_089D111C;
    }
L_089D111C:
    ctx.gpr[2] = (0u | 0u);
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
L_089D1150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D115C;
L_089D115C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089D11C8;
      }
      goto L_089D116C;
    }
L_089D116C:
    ctx.gpr[17] = (ctx.gpr[30] << 3u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> (ctx.gpr[16] & 31u)));
    goto L_089D1174;
L_089D1174:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089D11BC;
    }
    goto L_089D1184;
L_089D1184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    jump_target = ctx.gpr[23];
    ctx.gpr[31] = (0x089D11B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D11B8u) goto L_089D11B8;
    return;
L_089D11B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D11BC;
L_089D11BC:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> (ctx.gpr[16] & 31u)));
      if (branch_taken) {
          goto L_089D1174;
      }
      goto L_089D11C8;
    }
L_089D11C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[30] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089D115C;
    }
    goto L_089D11DC;
L_089D11DC:
    ctx.gpr[4] = (2222u << 16u);
    goto L_089D11E0;
L_089D11E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D11F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D11F0u) goto L_089D11F0;
    return;
L_089D11F0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D10C8;
      }
      goto L_089D1200;
    }
L_089D1200:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089D12A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D12B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 239u, 0x08A9CCFCu>(ctx, &aot_mem) && ctx.pc == 0x089D12B8u) goto L_089D12B8;
    return;
L_089D12B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D12C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D12D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 502u, 0x08A9DCE0u>(ctx, &aot_mem) && ctx.pc == 0x089D12D4u) goto L_089D12D4;
    return;
L_089D12D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D12E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D12F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 223u, 0x08A9CC00u>(ctx, &aot_mem) && ctx.pc == 0x089D12F0u) goto L_089D12F0;
    return;
L_089D12F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D12FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1310u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089D09B0;
L_089D1310:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D1348;
      }
      goto L_089D1318;
    }
L_089D1318:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089D135C;
      }
      goto L_089D1320;
    }
L_089D1320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D1398;
      }
      goto L_089D1348;
    }
L_089D1348:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D135C:
    ctx.gpr[6] = (2205u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4776));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (2218u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13024));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (2205u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4832));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    goto L_089D1398;
L_089D1398:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D13AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D13BCu);
    // nop
    goto L_089D0A54;
L_089D13BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D13C8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(264));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D13D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_089D1410;
L_089D1410:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D14D0;
      }
      goto L_089D1418;
    }
L_089D1418:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1560;
      }
      goto L_089D1420;
    }
L_089D1420:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D14C8;
      }
      goto L_089D1430;
    }
L_089D1430:
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_089D1438;
L_089D1438:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_089D14B0;
      }
      goto L_089D1444;
    }
L_089D1444:
    ctx.gpr[12] = (0u | 1u);
    goto L_089D1448;
L_089D1448:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D14B4;
      }
      goto L_089D1450;
    }
L_089D1450:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> (ctx.gpr[3] & 31u)));
      if (branch_taken) {
          goto L_089D14B4;
      }
      goto L_089D1458;
    }
L_089D1458:
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    ctx.gpr[14] = (ctx.gpr[11] & ctx.gpr[12]);
    if (ctx.gpr[14] != 0u) {
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089D14A4;
    }
    goto L_089D1468;
L_089D1468:
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[12]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (ctx.gpr[9] << 3u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[13] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[12] + static_cast<std::uint32_t>(7));
    ctx.gpr[10] = (~(ctx.gpr[10] | 0u));
    ctx.gpr[2] = (ctx.gpr[3] & ctx.gpr[10]);
    ctx.gpr[10] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_089D14B4;
      }
      goto L_089D14A4;
    }
L_089D14A4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[3] < static_cast<std::uint32_t>(8) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D1448;
      }
      goto L_089D14B0;
    }
L_089D14B0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8));
    goto L_089D14B4;
L_089D14B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D14C8;
      }
      goto L_089D14BC;
    }
L_089D14BC:
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089D1438;
      }
      goto L_089D14C8;
    }
L_089D14C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D1410;
      }
      goto L_089D14D0;
    }
L_089D14D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1560;
      }
      goto L_089D14D8;
    }
L_089D14D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D150Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D150Cu) goto L_089D150C;
    return;
L_089D150C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D157C;
      }
      goto L_089D1518;
    }
L_089D1518:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089D1524u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089D1524u) goto L_089D1524;
    return;
L_089D1524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(7));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    goto L_089D1560;
L_089D1560:
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
L_089D157C:
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
L_089D159C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D1680;
      }
      goto L_089D15BC;
    }
L_089D15BC:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (4u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D15D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1035));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D15D8u) goto L_089D15D8;
    return;
L_089D15D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089D1640;
      }
      goto L_089D15E4;
    }
L_089D15E4:
    ctx.gpr[31] = (0x089D15ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D3EDC;
L_089D15EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089D1688;
      }
      goto L_089D15F4;
    }
L_089D15F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D1604u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1604u) goto L_089D1604;
    return;
L_089D1604:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089D1618u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1618u) goto L_089D1618;
    return;
L_089D1618:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D1624u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D1624u) goto L_089D1624;
    return;
L_089D1624:
    ctx.gpr[2] = (0u | 0u);
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
L_089D1640:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1658u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1658u) goto L_089D1658;
    return;
L_089D1658:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D1664u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D1664u) goto L_089D1664;
    return;
L_089D1664:
    ctx.gpr[2] = (0u | 0u);
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
L_089D1680:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_089D1688;
L_089D1688:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_089D16CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-14376), ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1700u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089D159C;
L_089D1700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14376));
      if (branch_taken) {
          goto L_089D172C;
      }
      goto L_089D1708;
    }
L_089D1708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D172C:
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
L_089D1744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1760u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089D1AE4;
L_089D1760:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14376));
        goto L_089D17B4;
    }
    goto L_089D1780;
L_089D1780:
    ctx.gpr[31] = (0x089D1788u);
    // nop
    goto L_089D3F34;
L_089D1788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D17A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D17A0u) goto L_089D17A0;
    return;
L_089D17A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14376));
    goto L_089D17B4;
L_089D17B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
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
L_089D17DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D1810;
      }
      goto L_089D1804;
    }
L_089D1804:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D1810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1810u) goto L_089D1810;
    return;
L_089D1810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
        goto L_089D181C;
    }
    goto L_089D181C;
L_089D181C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
        goto L_089D1868;
    }
    goto L_089D1828;
L_089D1828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x089D1860u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089D3F3C;
L_089D1860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1874;
      }
      goto L_089D1868;
    }
L_089D1868:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D1874u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1874u) goto L_089D1874;
    return;
L_089D1874:
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
L_089D1890:
    ctx.gpr[9] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D1914;
      }
      goto L_089D18B4;
    }
L_089D18B4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_089D18EC;
    }
    goto L_089D18C0;
L_089D18C0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14376)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1914;
      }
      goto L_089D18EC;
    }
L_089D18EC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_089D1914;
L_089D1914:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1AA0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D1ADC;
      }
      goto L_089D1AC8;
    }
L_089D1AC8:
    ctx.gpr[6] = (ctx.gpr[4] - 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089D1AC8;
      }
      goto L_089D1ADC;
    }
L_089D1ADC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1AE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1B58;
      }
      goto L_089D1B38;
    }
L_089D1B38:
    ctx.gpr[4] = (ctx.gpr[17] - 0u);
    goto L_089D1B3C;
L_089D1B3C:
    ctx.gpr[31] = (0x089D1B44u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089D17DC;
L_089D1B44:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[17] - 0u);
      if (branch_taken) {
          goto L_089D1B3C;
      }
      goto L_089D1B4C;
    }
L_089D1B4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089D1B58;
L_089D1B58:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
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
L_089D1BCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] + static_cast<std::uint32_t>(67));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(24));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[23] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    goto L_089D1C1C;
L_089D1C1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089D1C30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_089D3FEC;
L_089D1C30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(67));
      if (branch_taken) {
          goto L_089D1D00;
      }
      goto L_089D1C38;
    }
L_089D1C38:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_089D1CD4;
    }
    goto L_089D1CD4;
L_089D1CD4:
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
L_089D1D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
        goto L_089D1D2C;
    }
    goto L_089D1D1C;
L_089D1D1C:
    ctx.gpr[31] = (0x089D1D24u);
    ctx.gpr[4] = (ctx.gpr[5] - 0u);
    goto L_089D17DC;
L_089D1D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1D5C;
      }
      goto L_089D1D2C;
    }
L_089D1D2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D1D58;
      }
      goto L_089D1D38;
    }
L_089D1D38:
    ctx.gpr[4] = (ctx.gpr[5] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[31] = (0x089D1D50u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_089D17DC;
L_089D1D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1D5C;
      }
      goto L_089D1D58;
    }
L_089D1D58:
    ctx.gpr[21] = (0u | 1u);
    goto L_089D1D5C;
L_089D1D5C:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
        goto L_089D1C1C;
    }
    goto L_089D1D64;
L_089D1D64:
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089D1D6C;
    }
    goto L_089D1D6C;
L_089D1D6C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089D1D80u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1D80u) goto L_089D1D80;
    return;
L_089D1D80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D1D8Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D1D8Cu) goto L_089D1D8C;
    return;
L_089D1D8C:
    ctx.gpr[2] = (0u | 0u);
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
L_089D1DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24336), ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24072)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24068)));
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[9] = (4u << 16u);
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-24328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1E10u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1028));
    goto L_089D0D2C;
L_089D1E10:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24336)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089D1E58;
      }
      goto L_089D1E3C;
    }
L_089D1E3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24336));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1E58:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24336));
        goto L_089D1EA8;
    }
    goto L_089D1E9C;
L_089D1E9C:
    ctx.gpr[31] = (0x089D1EA4u);
    // nop
    goto L_089D0DFC;
L_089D1EA4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24336));
    goto L_089D1EA8;
L_089D1EA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1ECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1EF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 383u, 0x0899F5B4u>(ctx, &aot_mem) && ctx.pc == 0x089D1EF0u) goto L_089D1EF0;
    return;
L_089D1EF0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1F18;
      }
      goto L_089D1EFC;
    }
L_089D1EFC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
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
L_089D1F18:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1F30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1F80;
      }
      goto L_089D1F60;
    }
L_089D1F60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1FC4;
      }
      goto L_089D1F68;
    }
L_089D1F68:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1F78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 316u, 0x0899F0A4u>(ctx, &aot_mem) && ctx.pc == 0x089D1F78u) goto L_089D1F78;
    return;
L_089D1F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D1FE4;
      }
      goto L_089D1F80;
    }
L_089D1F80:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D1FAC;
      }
      goto L_089D1F8C;
    }
L_089D1F8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1FC4;
      }
      goto L_089D1F94;
    }
L_089D1F94:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1FA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29960));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 316u, 0x0899F0A4u>(ctx, &aot_mem) && ctx.pc == 0x089D1FA4u) goto L_089D1FA4;
    return;
L_089D1FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D1FE4;
      }
      goto L_089D1FAC;
    }
L_089D1FAC:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1FBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29956));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 316u, 0x0899F0A4u>(ctx, &aot_mem) && ctx.pc == 0x089D1FBCu) goto L_089D1FBC;
    return;
L_089D1FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D1FE4;
      }
      goto L_089D1FC4;
    }
L_089D1FC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D1FD4u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1FD4u) goto L_089D1FD4;
    return;
L_089D1FD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D1FE0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D1FE0u) goto L_089D1FE0;
    return;
L_089D1FE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089D1FE4;
L_089D1FE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1FF8;
      }
      goto L_089D1FEC;
    }
L_089D1FEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089D2018;
      }
      goto L_089D1FF8;
    }
L_089D1FF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D200Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D200Cu) goto L_089D200C;
    return;
L_089D200C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D2018u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D2018u) goto L_089D2018;
    return;
L_089D2018:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D2074;
      }
      goto L_089D2048;
    }
L_089D2048:
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089D20C8;
    }
    goto L_089D2050;
L_089D2050:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2074:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D20AC;
      }
      goto L_089D2080;
    }
L_089D2080:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089D20C8;
    }
    goto L_089D2088;
L_089D2088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D20AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D20C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D20D8u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D20D8u) goto L_089D20D8;
    return;
L_089D20D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D20E4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D20E4u) goto L_089D20E4;
    return;
L_089D20E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D20F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D2110u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089D2110u) goto L_089D2110;
    return;
L_089D2110:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089D2164;
      }
      goto L_089D2140;
    }
L_089D2140:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
      if (branch_taken) {
          goto L_089D2174;
      }
      goto L_089D215C;
    }
L_089D215C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D219C;
      }
      goto L_089D2164;
    }
L_089D2164:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2174:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D21F4;
      }
      goto L_089D217C;
    }
L_089D217C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D21C4;
      }
      goto L_089D2184;
    }
L_089D2184:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089D2190u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    goto L_089D1ECC;
L_089D2190:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D219C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D21DC;
      }
      goto L_089D21A4;
    }
L_089D21A4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D21F4;
      }
      goto L_089D21B0;
    }
L_089D21B0:
    ctx.gpr[31] = (0x089D21B8u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    goto L_089D20F4;
L_089D21B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D21C4:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x089D21D0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_089D1F30;
L_089D21D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D21DC:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x089D21E8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_089D2034;
L_089D21E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D21F4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2208u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2208u) goto L_089D2208;
    return;
L_089D2208:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D2214u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D2214u) goto L_089D2214;
    return;
L_089D2214:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D22C0;
      }
      goto L_089D2254;
    }
L_089D2254:
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089D228C;
    }
    goto L_089D225C;
L_089D225C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D2274u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 339u, 0x0899F1ECu>(ctx, &aot_mem) && ctx.pc == 0x089D2274u) goto L_089D2274;
    return;
L_089D2274:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D22FC;
      }
      goto L_089D2280;
    }
L_089D2280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2348;
      }
      goto L_089D2288;
    }
L_089D2288:
    ctx.gpr[4] = (0u | 1u);
    goto L_089D228C;
L_089D228C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2298u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2298u) goto L_089D2298;
    return;
L_089D2298:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D22A4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D22A4u) goto L_089D22A4;
    return;
L_089D22A4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D22C0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D2364;
      }
      goto L_089D22CC;
    }
L_089D22CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D2288;
      }
      goto L_089D22D4;
    }
L_089D22D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D22E4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D22E4u) goto L_089D22E4;
    return;
L_089D22E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D22FC:
    ctx.gpr[31] = (0x089D2304u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 376u, 0x0899F540u>(ctx, &aot_mem) && ctx.pc == 0x089D2304u) goto L_089D2304;
    return;
L_089D2304:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089D232C;
      }
      goto L_089D230C;
    }
L_089D230C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[31] = (0x089D2318u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2318u) goto L_089D2318;
    return;
L_089D2318:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D2324u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D2324u) goto L_089D2324;
    return;
L_089D2324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2348;
      }
      goto L_089D232C;
    }
L_089D232C:
    ctx.gpr[4] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[31] = (0x089D233Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D233Cu) goto L_089D233C;
    return;
L_089D233C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D2348u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D2348u) goto L_089D2348;
    return;
L_089D2348:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2364:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_089D23B0;
    }
    goto L_089D2380;
L_089D2380:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089D2398u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2398u) goto L_089D2398;
    return;
L_089D2398:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D23A4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D23A4u) goto L_089D23A4;
    return;
L_089D23A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_089D23B0;
L_089D23B0:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089D23BCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089D23BCu) goto L_089D23BC;
    return;
L_089D23BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D23E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D243C;
      }
      goto L_089D2400;
    }
L_089D2400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D2454;
      }
      goto L_089D2410;
    }
L_089D2410:
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089D24B0;
    }
    goto L_089D2418;
L_089D2418:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D242Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 343u, 0x0899F27Cu>(ctx, &aot_mem) && ctx.pc == 0x089D242Cu) goto L_089D242C;
    return;
L_089D242C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D24E0;
      }
      goto L_089D2434;
    }
L_089D2434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089D2510;
      }
      goto L_089D243C;
    }
L_089D243C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2454:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D2524;
      }
      goto L_089D245C;
    }
L_089D245C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D24AC;
      }
      goto L_089D2468;
    }
L_089D2468:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D2474u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2474u) goto L_089D2474;
    return;
L_089D2474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2494;
      }
      goto L_089D247C;
    }
L_089D247C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2494:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D24AC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089D24B0;
L_089D24B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D24BCu);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D24BCu) goto L_089D24BC;
    return;
L_089D24BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D24C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D24C8u) goto L_089D24C8;
    return;
L_089D24C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D24E0:
    ctx.gpr[31] = (0x089D24E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 376u, 0x0899F540u>(ctx, &aot_mem) && ctx.pc == 0x089D24E8u) goto L_089D24E8;
    return;
L_089D24E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D2508;
      }
      goto L_089D24F0;
    }
L_089D24F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D24FCu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D24FCu) goto L_089D24FC;
    return;
L_089D24FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D2508u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D2508u) goto L_089D2508;
    return;
L_089D2508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D2510;
      }
      goto L_089D2510;
    }
L_089D2510:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2524:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_089D2574;
    }
    goto L_089D253C;
L_089D253C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2550u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2550u) goto L_089D2550;
    return;
L_089D2550:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D255Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D255Cu) goto L_089D255C;
    return;
L_089D255C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2574:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D258C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D25C8;
      }
      goto L_089D25B0;
    }
L_089D25B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D25EC;
      }
      goto L_089D25B8;
    }
L_089D25B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089D2620;
      }
      goto L_089D25C0;
    }
L_089D25C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089D2678;
      }
      goto L_089D25C8;
    }
L_089D25C8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D2634;
      }
      goto L_089D25D0;
    }
L_089D25D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D25F0;
      }
      goto L_089D25D8;
    }
L_089D25D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D2668;
      }
      goto L_089D25E4;
    }
L_089D25E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089D2674;
      }
      goto L_089D25EC;
    }
L_089D25EC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089D25F0;
L_089D25F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D25FCu);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D25FCu) goto L_089D25FC;
    return;
L_089D25FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D2608u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D2608u) goto L_089D2608;
    return;
L_089D2608:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2620:
    ctx.gpr[31] = (0x089D2628u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 337u, 0x0899F1B8u>(ctx, &aot_mem) && ctx.pc == 0x089D2628u) goto L_089D2628;
    return;
L_089D2628:
    ctx.gpr[17] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089D2678;
      }
      goto L_089D2634;
    }
L_089D2634:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D265C;
      }
      goto L_089D2644;
    }
L_089D2644:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089D2660;
      }
      goto L_089D264C;
    }
L_089D264C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089D265C;
L_089D265C:
    ctx.gpr[17] = (0u | 1u);
    goto L_089D2660;
L_089D2660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089D2678;
      }
      goto L_089D2668;
    }
L_089D2668:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D2670u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2670u) goto L_089D2670;
    return;
L_089D2670:
    ctx.gpr[17] = (0u | 1u);
    goto L_089D2674;
L_089D2674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_089D2678;
L_089D2678:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D26A0;
      }
      goto L_089D2680;
    }
L_089D2680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D26A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D26A0u) goto L_089D26A0;
    return;
L_089D26A0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D26B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D270Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1028));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D270Cu) goto L_089D270C;
    return;
L_089D270C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D2728u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    goto L_089D2124;
L_089D2728:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2750;
      }
      goto L_089D2730;
    }
L_089D2730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D274Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D274Cu) goto L_089D274C;
    return;
L_089D274C:
    ctx.gpr[16] = (0u | 0u);
    goto L_089D2750;
L_089D2750:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D2818;
      }
      goto L_089D27B0;
    }
L_089D27B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D2874;
      }
      goto L_089D27B8;
    }
L_089D27B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089D27CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 341u, 0x0899F234u>(ctx, &aot_mem) && ctx.pc == 0x089D27CCu) goto L_089D27CC;
    return;
L_089D27CC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D28B4;
      }
      goto L_089D27D4;
    }
L_089D27D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089D27E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D27E4u) goto L_089D27E4;
    return;
L_089D27E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D27F0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D27F0u) goto L_089D27F0;
    return;
L_089D27F0:
    ctx.gpr[2] = (0u | 0u);
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
L_089D2818:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D28DC;
      }
      goto L_089D2824;
    }
L_089D2824:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D2874;
      }
      goto L_089D2830;
    }
L_089D2830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D2844u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2844u) goto L_089D2844;
    return;
L_089D2844:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D28B4;
      }
      goto L_089D284C;
    }
L_089D284C:
    ctx.gpr[2] = (0u | 0u);
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
L_089D2874:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2880u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2880u) goto L_089D2880;
    return;
L_089D2880:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D288Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D288Cu) goto L_089D288C;
    return;
L_089D288C:
    ctx.gpr[2] = (0u | 0u);
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
L_089D28B4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089D28DC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D2960;
      }
      goto L_089D28E8;
    }
L_089D28E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 512u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (3u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D2900u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1028));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2900u) goto L_089D2900;
    return;
L_089D2900:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089D2954;
      }
      goto L_089D2908;
    }
L_089D2908:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[31] = (0x089D2920u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2920u) goto L_089D2920;
    return;
L_089D2920:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D292Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D292Cu) goto L_089D292C;
    return;
L_089D292C:
    ctx.gpr[2] = (0u | 0u);
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
L_089D2954:
    ctx.gpr[4] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_089D2960;
L_089D2960:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(512) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D2A10;
      }
      goto L_089D2978;
    }
L_089D2978:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[20]);
        goto L_089D2988;
    }
    goto L_089D2980;
L_089D2980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_089D2988;
      }
      goto L_089D2988;
    }
L_089D2988:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (259u << 16u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D29ACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1028));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D29ACu) goto L_089D29AC;
    return;
L_089D29AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
        goto L_089D2A08;
    }
    goto L_089D29B8;
L_089D29B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x089D29D4u);
    ctx.gpr[5] = (ctx.gpr[20] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D29D4u) goto L_089D29D4;
    return;
L_089D29D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D29E0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D29E0u) goto L_089D29E0;
    return;
L_089D29E0:
    ctx.gpr[2] = (0u | 0u);
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
L_089D2A08:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_089D2A10;
L_089D2A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2A24u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089D2A24u) goto L_089D2A24;
    return;
L_089D2A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_089D2A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2A7C;
      }
      goto L_089D2A64;
    }
L_089D2A64:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089D2A68;
L_089D2A68:
    if (ctx.gpr[9] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
        goto L_089D2A84;
    }
    goto L_089D2A70;
L_089D2A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089D2A68;
    }
    goto L_089D2A7C;
L_089D2A7C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2A84:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2AB8;
      }
      goto L_089D2AA0;
    }
L_089D2AA0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089D2AA4;
L_089D2AA4:
    if (ctx.gpr[7] == ctx.gpr[5]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089D2AC0;
    }
    goto L_089D2AAC;
L_089D2AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089D2AA4;
    }
    goto L_089D2AB8;
L_089D2AB8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2AC0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2AEC;
      }
      goto L_089D2AD4;
    }
L_089D2AD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089D2AD8;
L_089D2AD8:
    if (ctx.gpr[7] == ctx.gpr[5]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089D2AF4;
    }
    goto L_089D2AE0;
L_089D2AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089D2AD8;
    }
    goto L_089D2AEC;
L_089D2AEC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2AF4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2AFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D2B38u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 288u, 0x089CD600u>(ctx, &aot_mem) && ctx.pc == 0x089D2B38u) goto L_089D2B38;
    return;
L_089D2B38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CBC;
      }
      goto L_089D2B40;
    }
L_089D2B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20480));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (3u << 16u);
      if (branch_taken) {
          goto L_089D2B7C;
      }
      goto L_089D2B58;
    }
L_089D2B58:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28674));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D2B80;
      }
      goto L_089D2B68;
    }
L_089D2B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089D2BA4;
      }
      goto L_089D2B74;
    }
L_089D2B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D2C60;
      }
      goto L_089D2B7C;
    }
L_089D2B7C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089D2B80;
L_089D2B80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089D2B90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2B90u) goto L_089D2B90;
    return;
L_089D2B90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D2B9Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D2B9Cu) goto L_089D2B9C;
    return;
L_089D2B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CBC;
      }
      goto L_089D2BA4;
    }
L_089D2BA4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_089D2BA8;
L_089D2BA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089D2BC0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 268u, 0x089CD454u>(ctx, &aot_mem) && ctx.pc == 0x089D2BC0u) goto L_089D2BC0;
    return;
L_089D2BC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CBC;
      }
      goto L_089D2BC8;
    }
L_089D2BC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089D2C44;
      }
      goto L_089D2BD4;
    }
L_089D2BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_089D2BDC;
L_089D2BDC:
    if (ctx.gpr[7] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_089D2BFC;
    }
    goto L_089D2BE4;
L_089D2BE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_089D2BDC;
    }
    goto L_089D2BF0;
L_089D2BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C44;
      }
      goto L_089D2BF8;
    }
L_089D2BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_089D2BFC;
L_089D2BFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C44;
      }
      goto L_089D2C04;
    }
L_089D2C04:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x089D2C1Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2C1Cu) goto L_089D2C1C;
    return;
L_089D2C1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CBC;
      }
      goto L_089D2C24;
    }
L_089D2C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089D2C28;
L_089D2C28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D2BA8;
      }
      goto L_089D2C3C;
    }
L_089D2C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D2C60;
      }
      goto L_089D2C44;
    }
L_089D2C44:
    ctx.gpr[31] = (0x089D2C4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D23E4;
L_089D2C4C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_089D2C28;
    }
    goto L_089D2C54;
L_089D2C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CBC;
      }
      goto L_089D2C5C;
    }
L_089D2C5C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089D2C60;
L_089D2C60:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C98;
      }
      goto L_089D2C68;
    }
L_089D2C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_089D2C6C;
L_089D2C6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D2C8C;
      }
      goto L_089D2C74;
    }
L_089D2C74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D2C84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2C84u) goto L_089D2C84;
    return;
L_089D2C84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CBC;
      }
      goto L_089D2C8C;
    }
L_089D2C8C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_089D2C6C;
    }
    goto L_089D2C98;
L_089D2C98:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2CBC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2CE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089D2D18;
      }
      goto L_089D2D00;
    }
L_089D2D00:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    goto L_089D2D04;
L_089D2D04:
    if (ctx.gpr[8] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
        goto L_089D2D2C;
    }
    goto L_089D2D0C;
L_089D2D0C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
        goto L_089D2D04;
    }
    goto L_089D2D18;
L_089D2D18:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2D2C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D2D18;
      }
      goto L_089D2D34;
    }
L_089D2D34:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089D2D4Cu);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2D4Cu) goto L_089D2D4C;
    return;
L_089D2D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2D18;
      }
      goto L_089D2D54;
    }
L_089D2D54:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D2DC8;
      }
      goto L_089D2D8C;
    }
L_089D2D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_089D2D90;
L_089D2D90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D2DBC;
      }
      goto L_089D2D98;
    }
L_089D2D98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D2DA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2DA8u) goto L_089D2DA8;
    return;
L_089D2DA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_089D2DC0;
    }
    goto L_089D2DB4;
L_089D2DB4:
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_089D2DBC;
L_089D2DBC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_089D2DC0;
L_089D2DC0:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_089D2D90;
    }
    goto L_089D2DC8;
L_089D2DC8:
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
L_089D2DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D2E18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D2D68;
L_089D2E18:
    ctx.gpr[21] = (3u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28674));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D2E38u);
    ctx.gpr[8] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 286u, 0x089CD5A8u>(ctx, &aot_mem) && ctx.pc == 0x089D2E38u) goto L_089D2E38;
    return;
L_089D2E38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2EF8;
      }
      goto L_089D2E40;
    }
L_089D2E40:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2ED0;
      }
      goto L_089D2E4C;
    }
L_089D2E4C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    goto L_089D2E50;
L_089D2E50:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
        goto L_089D2EC8;
    }
    goto L_089D2E58;
L_089D2E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
        goto L_089D2EC8;
    }
    goto L_089D2E64;
L_089D2E64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[19];
    ctx.gpr[31] = (0x089D2E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2E74u) goto L_089D2E74;
    return;
L_089D2E74:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[19]) <= 0) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
        goto L_089D2EC8;
    }
    goto L_089D2E80;
L_089D2E80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D2E98u);
    ctx.gpr[8] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 286u, 0x089CD5A8u>(ctx, &aot_mem) && ctx.pc == 0x089D2E98u) goto L_089D2E98;
    return;
L_089D2E98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2EF8;
      }
      goto L_089D2EA0;
    }
L_089D2EA0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x089D2EBCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2EBCu) goto L_089D2EBC;
    return;
L_089D2EBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2EF8;
      }
      goto L_089D2EC4;
    }
L_089D2EC4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    goto L_089D2EC8;
L_089D2EC8:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
        goto L_089D2E50;
    }
    goto L_089D2ED0;
L_089D2ED0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2EF8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D2F50u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 288u, 0x089CD600u>(ctx, &aot_mem) && ctx.pc == 0x089D2F50u) goto L_089D2F50;
    return;
L_089D2F50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2FCC;
      }
      goto L_089D2F58;
    }
L_089D2F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089D2FB0;
      }
      goto L_089D2F64;
    }
L_089D2F64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089D2F7Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 268u, 0x089CD454u>(ctx, &aot_mem) && ctx.pc == 0x089D2F7Cu) goto L_089D2F7C;
    return;
L_089D2F7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2FCC;
      }
      goto L_089D2F84;
    }
L_089D2F84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089D2F90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D23E4;
L_089D2F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2FCC;
      }
      goto L_089D2F98;
    }
L_089D2F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D2F64;
      }
      goto L_089D2FB0;
    }
L_089D2FB0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2FCC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24056)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24052)));
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[4] = (0u | 60u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-24288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D3018u);
    ctx.gpr[9] = (4u << 16u);
    goto L_089D0D2C;
L_089D3018:
    ctx.gpr[4] = (2223u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24292), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089D303C;
      }
      goto L_089D3024;
    }
L_089D3024:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24060), 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D303C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D304C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (2222u << 16u);
        goto L_089D3088;
    }
    goto L_089D306C;
L_089D306C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (2222u << 16u);
    goto L_089D3088;
L_089D3088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D3098u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3098u) goto L_089D3098;
    return;
L_089D3098:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D30A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (2205u << 16u);
      if (branch_taken) {
          goto L_089D31C8;
      }
      goto L_089D30DC;
    }
L_089D30DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D30ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12364));
    goto L_089D1070;
L_089D30EC:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5080));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D31BC;
      }
      goto L_089D3108;
    }
L_089D3108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24060)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24064)));
      if (branch_taken) {
          goto L_089D319C;
      }
      goto L_089D3120;
    }
L_089D3120:
    ctx.gpr[20] = (0u | 0u);
    goto L_089D3124;
L_089D3124:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_089D3168;
      }
      goto L_089D3138;
    }
L_089D3138:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    goto L_089D3140;
L_089D3140:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (0u | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D3154u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3154u) goto L_089D3154;
    return;
L_089D3154:
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
        goto L_089D3140;
    }
    goto L_089D3160;
L_089D3160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24060)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24064)));
    goto L_089D3168;
L_089D3168:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089D3190;
    }
    goto L_089D3170;
L_089D3170:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089D3190;
    }
    goto L_089D317C;
L_089D317C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089D3190;
L_089D3190:
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D3124;
      }
      goto L_089D319C;
    }
L_089D319C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D31BC;
      }
      goto L_089D31A4;
    }
L_089D31A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D31B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D31B8u) goto L_089D31B8;
    return;
L_089D31B8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-24064), 0u);
    goto L_089D31BC;
L_089D31BC:
    ctx.gpr[31] = (0x089D31C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24292)));
    goto L_089D0DFC;
L_089D31C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24292), 0u);
    goto L_089D31C8;
L_089D31C8:
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
L_089D31F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3200:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3208:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3210:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089D325C;
      }
      goto L_089D3220;
    }
L_089D3220:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D3248;
      }
      goto L_089D322C;
    }
L_089D322C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D3254;
      }
      goto L_089D3234;
    }
L_089D3234:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3248:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089D3254;
L_089D3254:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D325C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3288;
      }
      goto L_089D3270;
    }
L_089D3270:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089D3274;
L_089D3274:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D3290;
      }
      goto L_089D327C;
    }
L_089D327C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089D3274;
    }
    goto L_089D3288;
L_089D3288:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3290:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D3328;
      }
      goto L_089D32BC;
    }
L_089D32BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089D32C0;
L_089D32C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D32D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D32D0u) goto L_089D32D0;
    return;
L_089D32D0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
        goto L_089D3320;
    }
    goto L_089D32D8;
L_089D32D8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3304;
      }
      goto L_089D32E4;
    }
L_089D32E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089D32E8;
L_089D32E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D32F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D32F8u) goto L_089D32F8;
    return;
L_089D32F8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089D32E8;
    }
    goto L_089D3304;
L_089D3304:
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
L_089D3320:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089D32C0;
    }
    goto L_089D3328;
L_089D3328:
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
L_089D3344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D3388;
      }
      goto L_089D3368;
    }
L_089D3368:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089D336C;
L_089D336C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D337Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D337Cu) goto L_089D337C;
    return;
L_089D337C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089D336C;
    }
    goto L_089D3388;
L_089D3388:
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
L_089D33A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D33F4;
      }
      goto L_089D33D0;
    }
L_089D33D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089D33D4;
L_089D33D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089D33E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D33E8u) goto L_089D33E8;
    return;
L_089D33E8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089D33D4;
    }
    goto L_089D33F4;
L_089D33F4:
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
L_089D3428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
      if (branch_taken) {
          goto L_089D3500;
      }
      goto L_089D3478;
    }
L_089D3478:
    ctx.gpr[31] = (0x089D3480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 44u, 0x089D8390u>(ctx, &aot_mem) && ctx.pc == 0x089D3480u) goto L_089D3480;
    return;
L_089D3480:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D34B0;
      }
      goto L_089D3488;
    }
L_089D3488:
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2205u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5080));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D3534;
      }
      goto L_089D34A4;
    }
L_089D34A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D3600;
      }
      goto L_089D34AC;
    }
L_089D34AC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089D34B0;
L_089D34B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089D34C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D34C0u) goto L_089D34C0;
    return;
L_089D34C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D34CCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D34CCu) goto L_089D34CC;
    return;
L_089D34CC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3500:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24060)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D3568;
      }
      goto L_089D3548;
    }
L_089D3548:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24064)));
    goto L_089D354C;
L_089D354C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089D3568;
      }
      goto L_089D3558;
    }
L_089D3558:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D354C;
      }
      goto L_089D3568;
    }
L_089D3568:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_089D35FC;
      }
      goto L_089D3570;
    }
L_089D3570:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D3580u);
    ctx.gpr[5] = (4u << 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3580u) goto L_089D3580;
    return;
L_089D3580:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24064)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089D35E8;
      }
      goto L_089D359C;
    }
L_089D359C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24060)));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
        goto L_089D35D8;
    }
    goto L_089D35AC;
L_089D35AC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24060)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24064)));
      if (branch_taken) {
          goto L_089D35AC;
      }
      goto L_089D35D4;
    }
L_089D35D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    goto L_089D35D8;
L_089D35D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D35E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D35E4u) goto L_089D35E4;
    return;
L_089D35E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-24064), 0u);
    goto L_089D35E8;
L_089D35E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24060)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-24064), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-24060), ctx.gpr[4]);
    goto L_089D35FC;
L_089D35FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089D3600;
L_089D3600:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_089D3684;
    }
    goto L_089D3608;
L_089D3608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089D360C;
L_089D360C:
    if (ctx.gpr[5] == ctx.gpr[21]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
        goto L_089D362C;
    }
    goto L_089D3614;
L_089D3614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089D360C;
    }
    goto L_089D3620;
L_089D3620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089D3684;
      }
      goto L_089D3628;
    }
L_089D3628:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_089D362C;
L_089D362C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x089D3640u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3640u) goto L_089D3640;
    return;
L_089D3640:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D364Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D364Cu) goto L_089D364C;
    return;
L_089D364C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3684:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D36AC;
      }
      goto L_089D36A0;
    }
L_089D36A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D373C;
      }
      goto L_089D36AC;
    }
L_089D36AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24292)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D36C0u);
    ctx.gpr[5] = (4u << 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D36C0u) goto L_089D36C0;
    return;
L_089D36C0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3708;
      }
      goto L_089D36CC;
    }
L_089D36CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(28), 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[21] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_089D3770;
      }
      goto L_089D3700;
    }
L_089D3700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D377C;
      }
      goto L_089D3708;
    }
L_089D3708:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D373C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3770:
    ctx.gpr[21] = (2205u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12792));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089D377C;
L_089D377C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D3790;
      }
      goto L_089D3788;
    }
L_089D3788:
    ctx.gpr[21] = (2205u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12800));
    goto L_089D3790;
L_089D3790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D37A8;
      }
      goto L_089D37A0;
    }
L_089D37A0:
    ctx.gpr[21] = (2205u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12808));
    goto L_089D37A8;
L_089D37A8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_089D37D8;
    }
    goto L_089D37C8;
L_089D37C8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D37EC;
      }
      goto L_089D37D8;
    }
L_089D37D8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_089D37EC;
L_089D37EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D381C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D38C8;
      }
      goto L_089D3828;
    }
L_089D3828:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[1];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[3];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D3828;
      }
      goto L_089D38C8;
    }
L_089D38C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D38D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[1];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[3];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3968:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D39FC;
      }
      goto L_089D3974;
    }
L_089D3974:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[0];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D3974;
      }
      goto L_089D39FC;
    }
L_089D39FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3A04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[0];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3A84:
    ctx.gpr[10] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[9] = (2223u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-24252)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089D3AA4;
      }
      goto L_089D3A9C;
    }
L_089D3A9C:
    ctx.gpr[4] = (2205u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14544));
    goto L_089D3AA4;
L_089D3AA4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089D3ABC;
      }
      goto L_089D3AB4;
    }
L_089D3AB4:
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14364));
    goto L_089D3ABC;
L_089D3ABC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089D3AD4;
      }
      goto L_089D3ACC;
    }
L_089D3ACC:
    ctx.gpr[6] = (2205u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14852));
    goto L_089D3AD4;
L_089D3AD4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089D3AEC;
      }
      goto L_089D3AE4;
    }
L_089D3AE4:
    ctx.gpr[7] = (2205u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14696));
    goto L_089D3AEC;
L_089D3AEC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3AF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (16256u << 16u);
      if (branch_taken) {
          goto L_089D3B38;
      }
      goto L_089D3B30;
    }
L_089D3B30:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = ctx.fpr[13] / ctx.fpr[0];
    goto L_089D3B38;
L_089D3B38:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089D3BA8;
      }
      goto L_089D3B9C;
    }
L_089D3B9C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[0];
    goto L_089D3BA8;
L_089D3BA8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D3BF4;
      }
      goto L_089D3BD0;
    }
L_089D3BD0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D3BE4u);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3BE4u) goto L_089D3BE4;
    return;
L_089D3BE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D3BF0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D3BF0u) goto L_089D3BF0;
    return;
L_089D3BF0:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D3BF4;
L_089D3BF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3C00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3C2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3C4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089D3C8C;
      }
      goto L_089D3C80;
    }
L_089D3C80:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[0];
    goto L_089D3C8C;
L_089D3C8C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D3CCC;
      }
      goto L_089D3CA8;
    }
L_089D3CA8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D3CBCu);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3CBCu) goto L_089D3CBC;
    return;
L_089D3CBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D3CC8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D3CC8u) goto L_089D3CC8;
    return;
L_089D3CC8:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D3CCC;
L_089D3CCC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24252)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D3D08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3D08u) goto L_089D3D08;
    return;
L_089D3D08:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24252)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089D3D4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3D4Cu) goto L_089D3D4C;
    return;
L_089D3D4C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3D60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24252)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D3D90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3D90u) goto L_089D3D90;
    return;
L_089D3D90:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3DA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24252)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089D3DD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3DD4u) goto L_089D3DD4;
    return;
L_089D3DD4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3DE8:
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24252));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-24252), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D3E34u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089D3A84;
L_089D3E34:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24252));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3E5C:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089D3EA0;
      }
      goto L_089D3E6C;
    }
L_089D3E6C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
        goto L_089D3EA4;
    }
    goto L_089D3E7C;
L_089D3E7C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089D3EB4;
      }
      goto L_089D3EA0;
    }
L_089D3EA0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_089D3EA4;
L_089D3EA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_089D3EB4;
L_089D3EB4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
        goto L_089D3ECC;
    }
    goto L_089D3ECC;
L_089D3ECC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3EDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(39));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3F2C;
      }
      goto L_089D3F08;
    }
L_089D3F08:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3F2C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3F34:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3F3C:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D3F64;
      }
      goto L_089D3F58;
    }
L_089D3F58:
    ctx.gpr[4] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3F68;
      }
      goto L_089D3F64;
    }
L_089D3F64:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_089D3F68;
L_089D3F68:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3FA4;
      }
      goto L_089D3F70;
    }
L_089D3F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3FA4;
      }
      goto L_089D3F80;
    }
L_089D3F80:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
        goto L_089D3F8C;
    }
    goto L_089D3F8C;
L_089D3F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_089D3FA4;
L_089D3FA4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3FE4;
      }
      goto L_089D3FAC;
    }
L_089D3FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3FE4;
      }
      goto L_089D3FBC;
    }
L_089D3FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D3FD0;
      }
      goto L_089D3FC8;
    }
L_089D3FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    goto L_089D3FD0;
L_089D3FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_089D3FE4;
L_089D3FE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3FEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(31));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32));
    ctx.pc = 0x089D4000u; return;
}

void recomp_unit_0115(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0115_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_115(Runtime &runtime) {
    runtime.register_generated_unit(115u, 0x089D0000u, 16384u, &recomp_unit_0115, &recomp_unit_0115_entry);
    runtime.register_function(0x089D0000u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0008u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0014u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0040u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0050u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0058u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0118u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D022Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D030Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0390u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0398u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0434u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0444u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0504u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D051Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0524u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0694u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0740u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0744u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D075Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0768u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0790u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0830u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D083Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0844u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0890u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0954u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0958u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0970u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D097Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0ED4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1004u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1014u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D101Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1030u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D103Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1070u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1100u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1114u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D111Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1150u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D115Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D116Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1174u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1184u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1200u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1310u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1318u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1320u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1348u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D135Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1398u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1410u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1418u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1420u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1430u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1438u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1444u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1448u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1450u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1458u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1468u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D150Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1518u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1524u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1560u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D157Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D159Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1604u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1618u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1624u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1640u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1658u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1664u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1680u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1688u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1700u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1708u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D172Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1744u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1760u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1780u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1788u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1804u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1810u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D181Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1828u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1860u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1868u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1874u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1890u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1914u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ADCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BCCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ECCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D200Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2018u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2034u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2048u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2050u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2074u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2080u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2088u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2110u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2124u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2140u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D215Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2164u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2174u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D217Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2184u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2190u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D219Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2208u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2214u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2224u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2254u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D225Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2274u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2280u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2288u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D228Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2298u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D230Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2318u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2324u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D232Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D233Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2348u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2364u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2380u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2398u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2400u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2410u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2418u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D242Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2434u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D243Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2454u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D245Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2468u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2474u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D247Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2494u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2508u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2510u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2524u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D253Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2550u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D255Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2574u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D258Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2608u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2620u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2628u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2634u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2644u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D264Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D265Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2660u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2668u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2670u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2674u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2678u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2680u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D270Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2728u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2730u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D274Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2750u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2778u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2818u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2824u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2830u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2844u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D284Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2874u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2880u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D288Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2900u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2908u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2920u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D292Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2954u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2960u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2978u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2980u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2988u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2ED0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FCCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3018u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3024u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D303Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D304Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D306Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3088u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3098u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3108u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3120u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3124u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3138u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3140u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3154u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3160u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3168u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3170u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D317Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3190u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D319Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3200u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3208u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3210u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3220u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D322Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3234u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3248u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3254u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D325Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3264u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3270u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3274u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D327Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3288u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3290u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3298u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3320u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3328u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3344u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3368u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D336Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D337Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3388u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3428u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3478u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3480u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3488u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3500u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3534u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3548u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D354Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3558u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3568u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3570u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3580u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D359Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3600u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3608u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D360Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3614u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3620u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3628u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D362Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3640u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D364Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3684u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3700u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3708u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D373Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3770u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D377Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3788u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3790u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D381Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3828u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3968u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3974u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D39FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3ABCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3ACCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CCCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3DA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3DD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3DE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3ECCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FECu, &recomp_unit_0115, "recomp_unit_0115");
}
} // namespace psprecomp

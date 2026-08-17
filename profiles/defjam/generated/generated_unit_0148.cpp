#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0148[4092] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0,
    0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 201,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0,
    0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0,
    0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0,
    0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0,
    0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0,
    0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 368, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0,
    0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    387, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0,
    0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0,
    0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 453, 0,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483,
    0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
    0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495,
    0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0,
    500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0,
    0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0,
    515, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0,
    0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0,
    527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0,
    0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0,
    542, 0, 543, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548,
    0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0,
    0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 570,
    0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0,
    0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0,
    0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0,
    592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597,
    0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609,
    0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0,
    0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622,
    0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0,
    0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 636,
    0, 637, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644,
    0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650,
    0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657,
    0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0,
    661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0,
    0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669,
};
void recomp_unit_0148_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A54000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0148[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A54000;
    case 2u: goto L_08A5401C;
    case 3u: goto L_08A54030;
    case 4u: goto L_08A5403C;
    case 5u: goto L_08A54074;
    case 6u: goto L_08A54080;
    case 7u: goto L_08A5409C;
    case 8u: goto L_08A540B4;
    case 9u: goto L_08A540C8;
    case 10u: goto L_08A540D4;
    case 11u: goto L_08A540E4;
    case 12u: goto L_08A54124;
    case 13u: goto L_08A54130;
    case 14u: goto L_08A54148;
    case 15u: goto L_08A54160;
    case 16u: goto L_08A54174;
    case 17u: goto L_08A54180;
    case 18u: goto L_08A54190;
    case 19u: goto L_08A541A4;
    case 20u: goto L_08A541BC;
    case 21u: goto L_08A541CC;
    case 22u: goto L_08A541D4;
    case 23u: goto L_08A541E8;
    case 24u: goto L_08A54244;
    case 25u: goto L_08A5426C;
    case 26u: goto L_08A54280;
    case 27u: goto L_08A54294;
    case 28u: goto L_08A542A8;
    case 29u: goto L_08A542BC;
    case 30u: goto L_08A542EC;
    case 31u: goto L_08A5430C;
    case 32u: goto L_08A54320;
    case 33u: goto L_08A54334;
    case 34u: goto L_08A54364;
    case 35u: goto L_08A54384;
    case 36u: goto L_08A5439C;
    case 37u: goto L_08A543B0;
    case 38u: goto L_08A543C8;
    case 39u: goto L_08A543DC;
    case 40u: goto L_08A543F0;
    case 41u: goto L_08A5440C;
    case 42u: goto L_08A54420;
    case 43u: goto L_08A54448;
    case 44u: goto L_08A54454;
    case 45u: goto L_08A5445C;
    case 46u: goto L_08A5446C;
    case 47u: goto L_08A54474;
    case 48u: goto L_08A544AC;
    case 49u: goto L_08A544C0;
    case 50u: goto L_08A544D4;
    case 51u: goto L_08A544F0;
    case 52u: goto L_08A54504;
    case 53u: goto L_08A54518;
    case 54u: goto L_08A54530;
    case 55u: goto L_08A54550;
    case 56u: goto L_08A5455C;
    case 57u: goto L_08A54568;
    case 58u: goto L_08A5457C;
    case 59u: goto L_08A5459C;
    case 60u: goto L_08A545C4;
    case 61u: goto L_08A545D0;
    case 62u: goto L_08A545F0;
    case 63u: goto L_08A54604;
    case 64u: goto L_08A54628;
    case 65u: goto L_08A54634;
    case 66u: goto L_08A54640;
    case 67u: goto L_08A54654;
    case 68u: goto L_08A54684;
    case 69u: goto L_08A54690;
    case 70u: goto L_08A54698;
    case 71u: goto L_08A546A8;
    case 72u: goto L_08A546B0;
    case 73u: goto L_08A546D0;
    case 74u: goto L_08A546F8;
    case 75u: goto L_08A54738;
    case 76u: goto L_08A5479C;
    case 77u: goto L_08A547B8;
    case 78u: goto L_08A547DC;
    case 79u: goto L_08A54818;
    case 80u: goto L_08A54848;
    case 81u: goto L_08A5486C;
    case 82u: goto L_08A54884;
    case 83u: goto L_08A548A0;
    case 84u: goto L_08A548B4;
    case 85u: goto L_08A548C8;
    case 86u: goto L_08A548F4;
    case 87u: goto L_08A54910;
    case 88u: goto L_08A54920;
    case 89u: goto L_08A5492C;
    case 90u: goto L_08A54934;
    case 91u: goto L_08A54944;
    case 92u: goto L_08A5494C;
    case 93u: goto L_08A54964;
    case 94u: goto L_08A54974;
    case 95u: goto L_08A54988;
    case 96u: goto L_08A5499C;
    case 97u: goto L_08A549A8;
    case 98u: goto L_08A549C0;
    case 99u: goto L_08A549E4;
    case 100u: goto L_08A549FC;
    case 101u: goto L_08A54A0C;
    case 102u: goto L_08A54A3C;
    case 103u: goto L_08A54A48;
    case 104u: goto L_08A54A50;
    case 105u: goto L_08A54A60;
    case 106u: goto L_08A54A68;
    case 107u: goto L_08A54A84;
    case 108u: goto L_08A54A98;
    case 109u: goto L_08A54AB8;
    case 110u: goto L_08A54ACC;
    case 111u: goto L_08A54AE4;
    case 112u: goto L_08A54AF8;
    case 113u: goto L_08A54B24;
    case 114u: goto L_08A54B40;
    case 115u: goto L_08A54B54;
    case 116u: goto L_08A54B6C;
    case 117u: goto L_08A54B88;
    case 118u: goto L_08A54B9C;
    case 119u: goto L_08A54BB4;
    case 120u: goto L_08A54BC8;
    case 121u: goto L_08A54BE0;
    case 122u: goto L_08A54BF8;
    case 123u: goto L_08A54C0C;
    case 124u: goto L_08A54C20;
    case 125u: goto L_08A54C34;
    case 126u: goto L_08A54C4C;
    case 127u: goto L_08A54C60;
    case 128u: goto L_08A54C78;
    case 129u: goto L_08A54C90;
    case 130u: goto L_08A54CA4;
    case 131u: goto L_08A54CBC;
    case 132u: goto L_08A54CD0;
    case 133u: goto L_08A54CE8;
    case 134u: goto L_08A54CFC;
    case 135u: goto L_08A54D14;
    case 136u: goto L_08A54D24;
    case 137u: goto L_08A54D3C;
    case 138u: goto L_08A54D50;
    case 139u: goto L_08A54D60;
    case 140u: goto L_08A54D70;
    case 141u: goto L_08A54D84;
    case 142u: goto L_08A54D98;
    case 143u: goto L_08A54DB0;
    case 144u: goto L_08A54DB8;
    case 145u: goto L_08A54DCC;
    case 146u: goto L_08A54DE0;
    case 147u: goto L_08A54DF8;
    case 148u: goto L_08A54E04;
    case 149u: goto L_08A54E18;
    case 150u: goto L_08A54E38;
    case 151u: goto L_08A54E50;
    case 152u: goto L_08A54E58;
    case 153u: goto L_08A54E78;
    case 154u: goto L_08A54EA0;
    case 155u: goto L_08A54EC0;
    case 156u: goto L_08A54EE4;
    case 157u: goto L_08A54EF8;
    case 158u: goto L_08A54F18;
    case 159u: goto L_08A54F2C;
    case 160u: goto L_08A54F38;
    case 161u: goto L_08A54F54;
    case 162u: goto L_08A54F68;
    case 163u: goto L_08A54F90;
    case 164u: goto L_08A54F9C;
    case 165u: goto L_08A54FA4;
    case 166u: goto L_08A54FB4;
    case 167u: goto L_08A54FBC;
    case 168u: goto L_08A54FDC;
    case 169u: goto L_08A54FEC;
    case 170u: goto L_08A55000;
    case 171u: goto L_08A55018;
    case 172u: goto L_08A5502C;
    case 173u: goto L_08A55040;
    case 174u: goto L_08A55058;
    case 175u: goto L_08A55068;
    case 176u: goto L_08A55074;
    case 177u: goto L_08A55084;
    case 178u: goto L_08A55090;
    case 179u: goto L_08A550B4;
    case 180u: goto L_08A550C8;
    case 181u: goto L_08A550EC;
    case 182u: goto L_08A5510C;
    case 183u: goto L_08A55134;
    case 184u: goto L_08A55144;
    case 185u: goto L_08A5515C;
    case 186u: goto L_08A55164;
    case 187u: goto L_08A55180;
    case 188u: goto L_08A55190;
    case 189u: goto L_08A551A0;
    case 190u: goto L_08A551AC;
    case 191u: goto L_08A551BC;
    case 192u: goto L_08A551C8;
    case 193u: goto L_08A551E8;
    case 194u: goto L_08A551F8;
    case 195u: goto L_08A5520C;
    case 196u: goto L_08A55220;
    case 197u: goto L_08A55234;
    case 198u: goto L_08A55258;
    case 199u: goto L_08A55264;
    case 200u: goto L_08A5526C;
    case 201u: goto L_08A5527C;
    case 202u: goto L_08A55284;
    case 203u: goto L_08A552AC;
    case 204u: goto L_08A552C0;
    case 205u: goto L_08A552D8;
    case 206u: goto L_08A552EC;
    case 207u: goto L_08A55300;
    case 208u: goto L_08A5531C;
    case 209u: goto L_08A55330;
    case 210u: goto L_08A55348;
    case 211u: goto L_08A55368;
    case 212u: goto L_08A553A4;
    case 213u: goto L_08A553B4;
    case 214u: goto L_08A553C8;
    case 215u: goto L_08A553D4;
    case 216u: goto L_08A553F0;
    case 217u: goto L_08A55400;
    case 218u: goto L_08A55430;
    case 219u: goto L_08A5543C;
    case 220u: goto L_08A55444;
    case 221u: goto L_08A55454;
    case 222u: goto L_08A5545C;
    case 223u: goto L_08A5547C;
    case 224u: goto L_08A554A4;
    case 225u: goto L_08A554E4;
    case 226u: goto L_08A55548;
    case 227u: goto L_08A55564;
    case 228u: goto L_08A55580;
    case 229u: goto L_08A555A0;
    case 230u: goto L_08A555B0;
    case 231u: goto L_08A555C4;
    case 232u: goto L_08A555D8;
    case 233u: goto L_08A555EC;
    case 234u: goto L_08A55640;
    case 235u: goto L_08A55654;
    case 236u: goto L_08A5565C;
    case 237u: goto L_08A55664;
    case 238u: goto L_08A5566C;
    case 239u: goto L_08A55674;
    case 240u: goto L_08A55688;
    case 241u: goto L_08A5569C;
    case 242u: goto L_08A556C8;
    case 243u: goto L_08A556DC;
    case 244u: goto L_08A556F0;
    case 245u: goto L_08A5571C;
    case 246u: goto L_08A55730;
    case 247u: goto L_08A55744;
    case 248u: goto L_08A55770;
    case 249u: goto L_08A55784;
    case 250u: goto L_08A557A0;
    case 251u: goto L_08A557BC;
    case 252u: goto L_08A557D8;
    case 253u: goto L_08A557F4;
    case 254u: goto L_08A55814;
    case 255u: goto L_08A55828;
    case 256u: goto L_08A5584C;
    case 257u: goto L_08A5586C;
    case 258u: goto L_08A55894;
    case 259u: goto L_08A558BC;
    case 260u: goto L_08A558E4;
    case 261u: goto L_08A5590C;
    case 262u: goto L_08A55934;
    case 263u: goto L_08A5595C;
    case 264u: goto L_08A55984;
    case 265u: goto L_08A559AC;
    case 266u: goto L_08A559D4;
    case 267u: goto L_08A559FC;
    case 268u: goto L_08A55A24;
    case 269u: goto L_08A55A44;
    case 270u: goto L_08A55A54;
    case 271u: goto L_08A55A68;
    case 272u: goto L_08A55A74;
    case 273u: goto L_08A55A84;
    case 274u: goto L_08A55A98;
    case 275u: goto L_08A55AA8;
    case 276u: goto L_08A55AC0;
    case 277u: goto L_08A55ADC;
    case 278u: goto L_08A55AF4;
    case 279u: goto L_08A55B04;
    case 280u: goto L_08A55B10;
    case 281u: goto L_08A55B2C;
    case 282u: goto L_08A55B54;
    case 283u: goto L_08A55B68;
    case 284u: goto L_08A55BA4;
    case 285u: goto L_08A55BB0;
    case 286u: goto L_08A55BBC;
    case 287u: goto L_08A55BE0;
    case 288u: goto L_08A55C1C;
    case 289u: goto L_08A55C44;
    case 290u: goto L_08A55C70;
    case 291u: goto L_08A55C9C;
    case 292u: goto L_08A55CB4;
    case 293u: goto L_08A55CC4;
    case 294u: goto L_08A55CC8;
    case 295u: goto L_08A55CD8;
    case 296u: goto L_08A55CF4;
    case 297u: goto L_08A55D04;
    case 298u: goto L_08A55D14;
    case 299u: goto L_08A55D24;
    case 300u: goto L_08A55D34;
    case 301u: goto L_08A55D44;
    case 302u: goto L_08A55D54;
    case 303u: goto L_08A55D64;
    case 304u: goto L_08A55D74;
    case 305u: goto L_08A55D84;
    case 306u: goto L_08A55D94;
    case 307u: goto L_08A55DA4;
    case 308u: goto L_08A55DB4;
    case 309u: goto L_08A55DC4;
    case 310u: goto L_08A55DE8;
    case 311u: goto L_08A55DF8;
    case 312u: goto L_08A55E08;
    case 313u: goto L_08A55E14;
    case 314u: goto L_08A55E30;
    case 315u: goto L_08A55E3C;
    case 316u: goto L_08A55EB4;
    case 317u: goto L_08A55EC8;
    case 318u: goto L_08A55EDC;
    case 319u: goto L_08A55EF4;
    case 320u: goto L_08A55F08;
    case 321u: goto L_08A55F14;
    case 322u: goto L_08A55F28;
    case 323u: goto L_08A55F3C;
    case 324u: goto L_08A55F48;
    case 325u: goto L_08A55F5C;
    case 326u: goto L_08A55F88;
    case 327u: goto L_08A55F9C;
    case 328u: goto L_08A55FB4;
    case 329u: goto L_08A55FD8;
    case 330u: goto L_08A55FF0;
    case 331u: goto L_08A56000;
    case 332u: goto L_08A5600C;
    case 333u: goto L_08A5601C;
    case 334u: goto L_08A56028;
    case 335u: goto L_08A56038;
    case 336u: goto L_08A56068;
    case 337u: goto L_08A5608C;
    case 338u: goto L_08A56094;
    case 339u: goto L_08A560AC;
    case 340u: goto L_08A560D0;
    case 341u: goto L_08A560E8;
    case 342u: goto L_08A56100;
    case 343u: goto L_08A56114;
    case 344u: goto L_08A56140;
    case 345u: goto L_08A56150;
    case 346u: goto L_08A56160;
    case 347u: goto L_08A56174;
    case 348u: goto L_08A5618C;
    case 349u: goto L_08A561C0;
    case 350u: goto L_08A561E4;
    case 351u: goto L_08A561F8;
    case 352u: goto L_08A56208;
    case 353u: goto L_08A56220;
    case 354u: goto L_08A56230;
    case 355u: goto L_08A56248;
    case 356u: goto L_08A5628C;
    case 357u: goto L_08A56298;
    case 358u: goto L_08A562A0;
    case 359u: goto L_08A562AC;
    case 360u: goto L_08A562B8;
    case 361u: goto L_08A562D8;
    case 362u: goto L_08A562F0;
    case 363u: goto L_08A56300;
    case 364u: goto L_08A56320;
    case 365u: goto L_08A56330;
    case 366u: goto L_08A56348;
    case 367u: goto L_08A56374;
    case 368u: goto L_08A56384;
    case 369u: goto L_08A5638C;
    case 370u: goto L_08A563A4;
    case 371u: goto L_08A563B8;
    case 372u: goto L_08A563CC;
    case 373u: goto L_08A563EC;
    case 374u: goto L_08A56404;
    case 375u: goto L_08A56410;
    case 376u: goto L_08A56420;
    case 377u: goto L_08A56450;
    case 378u: goto L_08A56464;
    case 379u: goto L_08A56470;
    case 380u: goto L_08A56484;
    case 381u: goto L_08A56498;
    case 382u: goto L_08A564A4;
    case 383u: goto L_08A564B4;
    case 384u: goto L_08A564C8;
    case 385u: goto L_08A564E0;
    case 386u: goto L_08A564F0;
    case 387u: goto L_08A56500;
    case 388u: goto L_08A56510;
    case 389u: goto L_08A56524;
    case 390u: goto L_08A56564;
    case 391u: goto L_08A5656C;
    case 392u: goto L_08A56578;
    case 393u: goto L_08A5659C;
    case 394u: goto L_08A565B0;
    case 395u: goto L_08A565C4;
    case 396u: goto L_08A565D0;
    case 397u: goto L_08A565E4;
    case 398u: goto L_08A565F0;
    case 399u: goto L_08A56604;
    case 400u: goto L_08A56618;
    case 401u: goto L_08A56624;
    case 402u: goto L_08A56638;
    case 403u: goto L_08A56644;
    case 404u: goto L_08A56658;
    case 405u: goto L_08A5666C;
    case 406u: goto L_08A56678;
    case 407u: goto L_08A5668C;
    case 408u: goto L_08A5669C;
    case 409u: goto L_08A566AC;
    case 410u: goto L_08A566BC;
    case 411u: goto L_08A566D4;
    case 412u: goto L_08A566E4;
    case 413u: goto L_08A566EC;
    case 414u: goto L_08A566F8;
    case 415u: goto L_08A5670C;
    case 416u: goto L_08A56714;
    case 417u: goto L_08A5672C;
    case 418u: goto L_08A56738;
    case 419u: goto L_08A56748;
    case 420u: goto L_08A56760;
    case 421u: goto L_08A56768;
    case 422u: goto L_08A567C0;
    case 423u: goto L_08A56800;
    case 424u: goto L_08A5681C;
    case 425u: goto L_08A56834;
    case 426u: goto L_08A56860;
    case 427u: goto L_08A5687C;
    case 428u: goto L_08A568B8;
    case 429u: goto L_08A568CC;
    case 430u: goto L_08A568F0;
    case 431u: goto L_08A56918;
    case 432u: goto L_08A56980;
    case 433u: goto L_08A5699C;
    case 434u: goto L_08A569AC;
    case 435u: goto L_08A569D4;
    case 436u: goto L_08A569E0;
    case 437u: goto L_08A56A00;
    case 438u: goto L_08A56A14;
    case 439u: goto L_08A56A24;
    case 440u: goto L_08A56A2C;
    case 441u: goto L_08A56A44;
    case 442u: goto L_08A56A60;
    case 443u: goto L_08A56A7C;
    case 444u: goto L_08A56AD8;
    case 445u: goto L_08A56AE8;
    case 446u: goto L_08A56AF0;
    case 447u: goto L_08A56B08;
    case 448u: goto L_08A56B1C;
    case 449u: goto L_08A56B28;
    case 450u: goto L_08A56B4C;
    case 451u: goto L_08A56B58;
    case 452u: goto L_08A56B64;
    case 453u: goto L_08A56B78;
    case 454u: goto L_08A56B90;
    case 455u: goto L_08A56BA8;
    case 456u: goto L_08A56BC0;
    case 457u: goto L_08A56BCC;
    case 458u: goto L_08A56BE4;
    case 459u: goto L_08A56BF0;
    case 460u: goto L_08A56C08;
    case 461u: goto L_08A56C34;
    case 462u: goto L_08A56C60;
    case 463u: goto L_08A56C80;
    case 464u: goto L_08A56C98;
    case 465u: goto L_08A56CAC;
    case 466u: goto L_08A56CB4;
    case 467u: goto L_08A56CCC;
    case 468u: goto L_08A56CD8;
    case 469u: goto L_08A56D18;
    case 470u: goto L_08A56D24;
    case 471u: goto L_08A56D44;
    case 472u: goto L_08A56D58;
    case 473u: goto L_08A56D68;
    case 474u: goto L_08A56D70;
    case 475u: goto L_08A56D88;
    case 476u: goto L_08A56D9C;
    case 477u: goto L_08A56DB0;
    case 478u: goto L_08A56E14;
    case 479u: goto L_08A56E34;
    case 480u: goto L_08A56E40;
    case 481u: goto L_08A56E60;
    case 482u: goto L_08A56E6C;
    case 483u: goto L_08A56E7C;
    case 484u: goto L_08A56E84;
    case 485u: goto L_08A56E9C;
    case 486u: goto L_08A56EA8;
    case 487u: goto L_08A56ED0;
    case 488u: goto L_08A56EE4;
    case 489u: goto L_08A56F08;
    case 490u: goto L_08A56F14;
    case 491u: goto L_08A56F30;
    case 492u: goto L_08A56F44;
    case 493u: goto L_08A56F50;
    case 494u: goto L_08A56F6C;
    case 495u: goto L_08A56F7C;
    case 496u: goto L_08A56F8C;
    case 497u: goto L_08A56FB0;
    case 498u: goto L_08A56FD8;
    case 499u: goto L_08A56FE4;
    case 500u: goto L_08A57000;
    case 501u: goto L_08A57018;
    case 502u: goto L_08A57028;
    case 503u: goto L_08A5703C;
    case 504u: goto L_08A57050;
    case 505u: goto L_08A5708C;
    case 506u: goto L_08A570A0;
    case 507u: goto L_08A570B4;
    case 508u: goto L_08A570C8;
    case 509u: goto L_08A570EC;
    case 510u: goto L_08A570F8;
    case 511u: goto L_08A57114;
    case 512u: goto L_08A57134;
    case 513u: goto L_08A57144;
    case 514u: goto L_08A5716C;
    case 515u: goto L_08A57180;
    case 516u: goto L_08A57194;
    case 517u: goto L_08A571A4;
    case 518u: goto L_08A571D4;
    case 519u: goto L_08A571E8;
    case 520u: goto L_08A571F8;
    case 521u: goto L_08A5720C;
    case 522u: goto L_08A57234;
    case 523u: goto L_08A572B0;
    case 524u: goto L_08A572BC;
    case 525u: goto L_08A572D4;
    case 526u: goto L_08A572E4;
    case 527u: goto L_08A57300;
    case 528u: goto L_08A57314;
    case 529u: goto L_08A57334;
    case 530u: goto L_08A5736C;
    case 531u: goto L_08A57394;
    case 532u: goto L_08A573A8;
    case 533u: goto L_08A573CC;
    case 534u: goto L_08A573D8;
    case 535u: goto L_08A573F4;
    case 536u: goto L_08A57414;
    case 537u: goto L_08A57434;
    case 538u: goto L_08A5744C;
    case 539u: goto L_08A57454;
    case 540u: goto L_08A57460;
    case 541u: goto L_08A57474;
    case 542u: goto L_08A57480;
    case 543u: goto L_08A57488;
    case 544u: goto L_08A57498;
    case 545u: goto L_08A574A0;
    case 546u: goto L_08A574B8;
    case 547u: goto L_08A574D0;
    case 548u: goto L_08A574FC;
    case 549u: goto L_08A57510;
    case 550u: goto L_08A57524;
    case 551u: goto L_08A57538;
    case 552u: goto L_08A5754C;
    case 553u: goto L_08A57574;
    case 554u: goto L_08A57588;
    case 555u: goto L_08A575A8;
    case 556u: goto L_08A575BC;
    case 557u: goto L_08A575CC;
    case 558u: goto L_08A575D4;
    case 559u: goto L_08A575E4;
    case 560u: goto L_08A575F0;
    case 561u: goto L_08A575FC;
    case 562u: goto L_08A57634;
    case 563u: goto L_08A57648;
    case 564u: goto L_08A57654;
    case 565u: goto L_08A5768C;
    case 566u: goto L_08A5769C;
    case 567u: goto L_08A576D0;
    case 568u: goto L_08A576DC;
    case 569u: goto L_08A576F0;
    case 570u: goto L_08A576FC;
    case 571u: goto L_08A57704;
    case 572u: goto L_08A57714;
    case 573u: goto L_08A5771C;
    case 574u: goto L_08A57734;
    case 575u: goto L_08A5774C;
    case 576u: goto L_08A57760;
    case 577u: goto L_08A57784;
    case 578u: goto L_08A57790;
    case 579u: goto L_08A577AC;
    case 580u: goto L_08A577BC;
    case 581u: goto L_08A577D0;
    case 582u: goto L_08A577DC;
    case 583u: goto L_08A57814;
    case 584u: goto L_08A57828;
    case 585u: goto L_08A57834;
    case 586u: goto L_08A57878;
    case 587u: goto L_08A57890;
    case 588u: goto L_08A578A4;
    case 589u: goto L_08A578B4;
    case 590u: goto L_08A578C8;
    case 591u: goto L_08A578DC;
    case 592u: goto L_08A57900;
    case 593u: goto L_08A5790C;
    case 594u: goto L_08A57928;
    case 595u: goto L_08A57954;
    case 596u: goto L_08A57968;
    case 597u: goto L_08A5797C;
    case 598u: goto L_08A579A0;
    case 599u: goto L_08A579AC;
    case 600u: goto L_08A579C8;
    case 601u: goto L_08A579E4;
    case 602u: goto L_08A57A18;
    case 603u: goto L_08A57A2C;
    case 604u: goto L_08A57A3C;
    case 605u: goto L_08A57A44;
    case 606u: goto L_08A57A54;
    case 607u: goto L_08A57A64;
    case 608u: goto L_08A57A6C;
    case 609u: goto L_08A57A7C;
    case 610u: goto L_08A57A90;
    case 611u: goto L_08A57AA4;
    case 612u: goto L_08A57AB8;
    case 613u: goto L_08A57AC4;
    case 614u: goto L_08A57AE0;
    case 615u: goto L_08A57AF4;
    case 616u: goto L_08A57B04;
    case 617u: goto L_08A57B0C;
    case 618u: goto L_08A57B1C;
    case 619u: goto L_08A57B28;
    case 620u: goto L_08A57B34;
    case 621u: goto L_08A57B6C;
    case 622u: goto L_08A57B7C;
    case 623u: goto L_08A57B90;
    case 624u: goto L_08A57B9C;
    case 625u: goto L_08A57BD4;
    case 626u: goto L_08A57BE8;
    case 627u: goto L_08A57BF4;
    case 628u: goto L_08A57C38;
    case 629u: goto L_08A57C64;
    case 630u: goto L_08A57C78;
    case 631u: goto L_08A57C98;
    case 632u: goto L_08A57CB0;
    case 633u: goto L_08A57CDC;
    case 634u: goto L_08A57CEC;
    case 635u: goto L_08A57CF4;
    case 636u: goto L_08A57CFC;
    case 637u: goto L_08A57D04;
    case 638u: goto L_08A57D0C;
    case 639u: goto L_08A57D1C;
    case 640u: goto L_08A57D30;
    case 641u: goto L_08A57D3C;
    case 642u: goto L_08A57D44;
    case 643u: goto L_08A57D50;
    case 644u: goto L_08A57D7C;
    case 645u: goto L_08A57D8C;
    case 646u: goto L_08A57D94;
    case 647u: goto L_08A57DA4;
    case 648u: goto L_08A57DB4;
    case 649u: goto L_08A57DDC;
    case 650u: goto L_08A57DFC;
    case 651u: goto L_08A57E18;
    case 652u: goto L_08A57E28;
    case 653u: goto L_08A57E30;
    case 654u: goto L_08A57E40;
    case 655u: goto L_08A57E48;
    case 656u: goto L_08A57E70;
    case 657u: goto L_08A57E7C;
    case 658u: goto L_08A57E9C;
    case 659u: goto L_08A57EB8;
    case 660u: goto L_08A57EE4;
    case 661u: goto L_08A57F00;
    case 662u: goto L_08A57F1C;
    case 663u: goto L_08A57F64;
    case 664u: goto L_08A57F70;
    case 665u: goto L_08A57F8C;
    case 666u: goto L_08A57FB4;
    case 667u: goto L_08A57FD0;
    case 668u: goto L_08A57FDC;
    case 669u: goto L_08A57FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A54000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54030;
      }
      goto L_08A5401C;
    }
L_08A5401C:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5403C;
      }
      goto L_08A54030;
    }
L_08A54030:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5403C;
L_08A5403C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54080;
      }
      goto L_08A54074;
    }
L_08A54074:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A54080;
L_08A54080:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A540E4;
      }
      goto L_08A5409C;
    }
L_08A5409C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A540C8;
      }
      goto L_08A540B4;
    }
L_08A540B4:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A540D4;
      }
      goto L_08A540C8;
    }
L_08A540C8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A540D4;
L_08A540D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54190;
      }
      goto L_08A540E4;
    }
L_08A540E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54130;
      }
      goto L_08A54124;
    }
L_08A54124:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A54130;
L_08A54130:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54190;
      }
      goto L_08A54148;
    }
L_08A54148:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54174;
      }
      goto L_08A54160;
    }
L_08A54160:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54180;
      }
      goto L_08A54174;
    }
L_08A54174:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A54180;
L_08A54180:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A54190;
L_08A54190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A541A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A541A4u) goto L_08A541A4;
    return;
L_08A541A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A541BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A541BCu) goto L_08A541BC;
    return;
L_08A541BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A541CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 235u, 0x08A41494u>(ctx, &aot_mem) && ctx.pc == 0x08A541CCu) goto L_08A541CC;
    return;
L_08A541CC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A541D4;
L_08A541D4:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A541E8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A54320;
      }
      goto L_08A5426C;
    }
L_08A5426C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54320;
      }
      goto L_08A54280;
    }
L_08A54280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54320;
      }
      goto L_08A54294;
    }
L_08A54294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54320;
      }
      goto L_08A542A8;
    }
L_08A542A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A542BCu);
    // nop
    goto L_08A55828;
L_08A542BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(884)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4108)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54320;
      }
      goto L_08A542EC;
    }
L_08A542EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 87u);
    ctx.gpr[31] = (0x08A5430Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A5430Cu) goto L_08A5430C;
    return;
L_08A5430C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54320:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-73));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5440C;
      }
      goto L_08A54364;
    }
L_08A54364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-73));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16880)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 85u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u | 86u);
    ctx.gpr[31] = (0x08A5439Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 469u, 0x08A4E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5439Cu) goto L_08A5439C;
    return;
L_08A5439C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A543B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 88u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u | 89u);
    ctx.gpr[31] = (0x08A543C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 469u, 0x08A4E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A543C8u) goto L_08A543C8;
    return;
L_08A543C8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A543DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A543F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A543F0u) goto L_08A543F0;
    return;
L_08A543F0:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5440C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A5445C;
      }
      goto L_08A54448;
    }
L_08A54448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A54640;
      }
      goto L_08A54454;
    }
L_08A54454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54474;
      }
      goto L_08A5445C;
    }
L_08A5445C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54504;
      }
      goto L_08A5446C;
    }
L_08A5446C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54640;
      }
      goto L_08A54474;
    }
L_08A54474:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5055))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4104), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4848))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10623));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A544ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A544ACu) goto L_08A544AC;
    return;
L_08A544AC:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(10095));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A544C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A544C0u) goto L_08A544C0;
    return;
L_08A544C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A544D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 18u, 0x08A38214u>(ctx, &aot_mem) && ctx.pc == 0x08A544D4u) goto L_08A544D4;
    return;
L_08A544D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A544F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 46u, 0x08A40380u>(ctx, &aot_mem) && ctx.pc == 0x08A544F0u) goto L_08A544F0;
    return;
L_08A544F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54640;
      }
      goto L_08A54504;
    }
L_08A54504:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A54518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 11u, 0x08A38180u>(ctx, &aot_mem) && ctx.pc == 0x08A54518u) goto L_08A54518;
    return;
L_08A54518:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A54530u) goto L_08A54530;
    return;
L_08A54530:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(796)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5459C;
      }
      goto L_08A54550;
    }
L_08A54550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A5455Cu);
    // nop
    goto L_08A555EC;
L_08A5455C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54640;
      }
      goto L_08A54568;
    }
L_08A54568:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5457Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A5457Cu) goto L_08A5457C;
    return;
L_08A5457C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5459C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A545D0;
      }
      goto L_08A545C4;
    }
L_08A545C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A545D0;
L_08A545D0:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54604;
      }
      goto L_08A545F0;
    }
L_08A545F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54640;
      }
      goto L_08A54604;
    }
L_08A54604:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A54628u);
    // nop
    goto L_08A555EC;
L_08A54628:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54640;
      }
      goto L_08A54634;
    }
L_08A54634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A54640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 749u, 0x08A4FF60u>(ctx, &aot_mem) && ctx.pc == 0x08A54640u) goto L_08A54640;
    return;
L_08A54640:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A54698;
      }
      goto L_08A54684;
    }
L_08A54684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A548B4;
      }
      goto L_08A54690;
    }
L_08A54690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A546B0;
      }
      goto L_08A54698;
    }
L_08A54698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A547B8;
      }
      goto L_08A546A8;
    }
L_08A546A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A548B4;
      }
      goto L_08A546B0;
    }
L_08A546B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A546D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A546D0u) goto L_08A546D0;
    return;
L_08A546D0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54738;
      }
      goto L_08A546F8;
    }
L_08A546F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A546F8;
      }
      goto L_08A54738;
    }
L_08A54738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5479Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A5479Cu) goto L_08A5479C;
    return;
L_08A5479C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A548B4;
      }
      goto L_08A547B8;
    }
L_08A547B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54884;
      }
      goto L_08A547DC;
    }
L_08A547DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54884;
      }
      goto L_08A54818;
    }
L_08A54818:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(5100));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A54848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 102u, 0x08A14EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A54848u) goto L_08A54848;
    return;
L_08A54848:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4064)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54884;
      }
      goto L_08A5486C;
    }
L_08A5486C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A54884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 606u, 0x08A27994u>(ctx, &aot_mem) && ctx.pc == 0x08A54884u) goto L_08A54884;
    return;
L_08A54884:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A548A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A548A0u) goto L_08A548A0;
    return;
L_08A548A0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A548B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A548B4u) goto L_08A548B4;
    return;
L_08A548B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A548C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A548F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A548F4u) goto L_08A548F4;
    return;
L_08A548F4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A54910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A54910u) goto L_08A54910;
    return;
L_08A54910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A54934;
      }
      goto L_08A54920;
    }
L_08A54920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A549FC;
      }
      goto L_08A5492C;
    }
L_08A5492C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5494C;
      }
      goto L_08A54934;
    }
L_08A54934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54988;
      }
      goto L_08A54944;
    }
L_08A54944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549FC;
      }
      goto L_08A5494C;
    }
L_08A5494C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10282u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A54964u) goto L_08A54964;
    return;
L_08A54964:
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A54974u) goto L_08A54974;
    return;
L_08A54974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549FC;
      }
      goto L_08A54988;
    }
L_08A54988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A5499Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A5499Cu) goto L_08A5499C;
    return;
L_08A5499C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549FC;
      }
      goto L_08A549A8;
    }
L_08A549A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 10033u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A549C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A549C0u) goto L_08A549C0;
    return;
L_08A549C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4992));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A549E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 101u, 0x08A20D34u>(ctx, &aot_mem) && ctx.pc == 0x08A549E4u) goto L_08A549E4;
    return;
L_08A549E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A549FC;
L_08A549FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54A0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A54A50;
      }
      goto L_08A54A3C;
    }
L_08A54A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A54F54;
      }
      goto L_08A54A48;
    }
L_08A54A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A68;
      }
      goto L_08A54A50;
    }
L_08A54A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D84;
      }
      goto L_08A54A60;
    }
L_08A54A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54F54;
      }
      goto L_08A54A68;
    }
L_08A54A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54AB8;
      }
      goto L_08A54A84;
    }
L_08A54A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4311)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54AB8;
      }
      goto L_08A54A98;
    }
L_08A54A98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A54AB8;
L_08A54AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B40;
      }
      goto L_08A54ACC;
    }
L_08A54ACC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10328u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A54AE4u) goto L_08A54AE4;
    return;
L_08A54AE4:
    ctx.gpr[6] = (0u | 10055u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A54AF8u) goto L_08A54AF8;
    return;
L_08A54AF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4992));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A54B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 102u, 0x08A14EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A54B24u) goto L_08A54B24;
    return;
L_08A54B24:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D60;
      }
      goto L_08A54B40;
    }
L_08A54B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B6C;
      }
      goto L_08A54B54;
    }
L_08A54B54:
    ctx.gpr[4] = (0u | 10709u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10054u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54B6C;
    }
L_08A54B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BF8;
      }
      goto L_08A54B88;
    }
L_08A54B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4311)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BB4;
      }
      goto L_08A54B9C;
    }
L_08A54B9C:
    ctx.gpr[4] = (0u | 10727u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10051u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54BB4;
    }
L_08A54BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4311)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BE0;
      }
      goto L_08A54BC8;
    }
L_08A54BC8:
    ctx.gpr[4] = (0u | 10725u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10053u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54BE0;
    }
L_08A54BE0:
    ctx.gpr[4] = (0u | 10723u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10051u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54BF8;
    }
L_08A54BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 10109u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A54C20;
      }
      goto L_08A54C0C;
    }
L_08A54C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C90;
      }
      goto L_08A54C20;
    }
L_08A54C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4311)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C4C;
      }
      goto L_08A54C34;
    }
L_08A54C34:
    ctx.gpr[4] = (0u | 10711u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10051u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54C4C;
    }
L_08A54C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4311)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C78;
      }
      goto L_08A54C60;
    }
L_08A54C60:
    ctx.gpr[4] = (0u | 10713u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10053u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54C78;
    }
L_08A54C78:
    ctx.gpr[4] = (0u | 10711u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10051u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54C90;
    }
L_08A54C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4311)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CBC;
      }
      goto L_08A54CA4;
    }
L_08A54CA4:
    ctx.gpr[4] = (0u | 10711u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10051u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54CBC;
    }
L_08A54CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4311)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CE8;
      }
      goto L_08A54CD0;
    }
L_08A54CD0:
    ctx.gpr[4] = (0u | 10707u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10053u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54CE8;
    }
L_08A54CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4974)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D14;
      }
      goto L_08A54CFC;
    }
L_08A54CFC:
    ctx.gpr[4] = (0u | 10705u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10052u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D24;
      }
      goto L_08A54D14;
    }
L_08A54D14:
    ctx.gpr[4] = (0u | 10703u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10051u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08A54D24;
L_08A54D24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A54D3Cu) goto L_08A54D3C;
    return;
L_08A54D3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A54D50u) goto L_08A54D50;
    return;
L_08A54D50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A54D60;
L_08A54D60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 46u, 0x08A40380u>(ctx, &aot_mem) && ctx.pc == 0x08A54D70u) goto L_08A54D70;
    return;
L_08A54D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54F54;
      }
      goto L_08A54D84;
    }
L_08A54D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54DB8;
      }
      goto L_08A54D98;
    }
L_08A54D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[31] = (0x08A54DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A54DB0u) goto L_08A54DB0;
    return;
L_08A54DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54F18;
      }
      goto L_08A54DB8;
    }
L_08A54DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E58;
      }
      goto L_08A54DCC;
    }
L_08A54DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E04;
      }
      goto L_08A54DE0;
    }
L_08A54DE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A54DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 18u, 0x08A38214u>(ctx, &aot_mem) && ctx.pc == 0x08A54DF8u) goto L_08A54DF8;
    return;
L_08A54DF8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A54E04;
L_08A54E04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A54E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 11u, 0x08A38180u>(ctx, &aot_mem) && ctx.pc == 0x08A54E18u) goto L_08A54E18;
    return;
L_08A54E18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54EC0;
      }
      goto L_08A54E38;
    }
L_08A54E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[31] = (0x08A54E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A54E50u) goto L_08A54E50;
    return;
L_08A54E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54EC0;
      }
      goto L_08A54E58;
    }
L_08A54E58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A54E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A54E78u) goto L_08A54E78;
    return;
L_08A54E78:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A54EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 4u, 0x08A2C0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A54EA0u) goto L_08A54EA0;
    return;
L_08A54EA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A54EC0u) goto L_08A54EC0;
    return;
L_08A54EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54F18;
      }
      goto L_08A54EE4;
    }
L_08A54EE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A54EF8u) goto L_08A54EF8;
    return;
L_08A54EF8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A54F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A54F2Cu) goto L_08A54F2C;
    return;
L_08A54F2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54F54;
      }
      goto L_08A54F38;
    }
L_08A54F38:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A54F54;
L_08A54F54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A54FA4;
      }
      goto L_08A54F90;
    }
L_08A54F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55220;
      }
      goto L_08A54F9C;
    }
L_08A54F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54FA4;
    }
L_08A54FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55018;
      }
      goto L_08A54FB4;
    }
L_08A54FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55220;
      }
      goto L_08A54FBC;
    }
L_08A54FBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A54FDCu) goto L_08A54FDC;
    return;
L_08A54FDC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55000;
      }
      goto L_08A54FEC;
    }
L_08A54FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A55000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 18u, 0x08A38214u>(ctx, &aot_mem) && ctx.pc == 0x08A55000u) goto L_08A55000;
    return;
L_08A55000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55220;
      }
      goto L_08A55018;
    }
L_08A55018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A550B4;
      }
      goto L_08A5502C;
    }
L_08A5502C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A55040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 11u, 0x08A38180u>(ctx, &aot_mem) && ctx.pc == 0x08A55040u) goto L_08A55040;
    return;
L_08A55040:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A55058u) goto L_08A55058;
    return;
L_08A55058:
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55068u);
    // nop
    goto L_08A571A4;
L_08A55068:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55220;
      }
      goto L_08A55074;
    }
L_08A55074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x08A55084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 27u, 0x08A443B4u>(ctx, &aot_mem) && ctx.pc == 0x08A55084u) goto L_08A55084;
    return;
L_08A55084:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5520C;
      }
      goto L_08A55090;
    }
L_08A55090:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A550B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55164;
      }
      goto L_08A550C8;
    }
L_08A550C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A55144;
      }
      goto L_08A550EC;
    }
L_08A550EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5510Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A5510Cu) goto L_08A5510C;
    return;
L_08A5510C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A55134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 4u, 0x08A2C0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A55134u) goto L_08A55134;
    return;
L_08A55134:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A551C8;
      }
      goto L_08A55144;
    }
L_08A55144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[31] = (0x08A5515Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5515Cu) goto L_08A5515C;
    return;
L_08A5515C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A551C8;
      }
      goto L_08A55164;
    }
L_08A55164:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A55180u) goto L_08A55180;
    return;
L_08A55180:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A55190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 11u, 0x08A38180u>(ctx, &aot_mem) && ctx.pc == 0x08A55190u) goto L_08A55190;
    return;
L_08A55190:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A551A0u);
    // nop
    goto L_08A571A4;
L_08A551A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55220;
      }
      goto L_08A551AC;
    }
L_08A551AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08A551BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 27u, 0x08A443B4u>(ctx, &aot_mem) && ctx.pc == 0x08A551BCu) goto L_08A551BC;
    return;
L_08A551BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55220;
      }
      goto L_08A551C8;
    }
L_08A551C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A551E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 67u, 0x08A149D4u>(ctx, &aot_mem) && ctx.pc == 0x08A551E8u) goto L_08A551E8;
    return;
L_08A551E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5520C;
      }
      goto L_08A551F8;
    }
L_08A551F8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    goto L_08A5520C;
L_08A5520C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A55220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A55220u) goto L_08A55220;
    return;
L_08A55220:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A5526C;
      }
      goto L_08A55258;
    }
L_08A55258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A553F0;
      }
      goto L_08A55264;
    }
L_08A55264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55284;
      }
      goto L_08A5526C;
    }
L_08A5526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5531C;
      }
      goto L_08A5527C;
    }
L_08A5527C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A553F0;
      }
      goto L_08A55284;
    }
L_08A55284:
    ctx.gpr[4] = (0u | 10547u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10008u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A552C0;
      }
      goto L_08A552AC;
    }
L_08A552AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10009u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A552C0;
L_08A552C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A552D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A552D8u) goto L_08A552D8;
    return;
L_08A552D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A552ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A552ECu) goto L_08A552EC;
    return;
L_08A552EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A55300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 18u, 0x08A38214u>(ctx, &aot_mem) && ctx.pc == 0x08A55300u) goto L_08A55300;
    return;
L_08A55300:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A5531C;
L_08A5531C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A55330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 11u, 0x08A38180u>(ctx, &aot_mem) && ctx.pc == 0x08A55330u) goto L_08A55330;
    return;
L_08A55330:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A55348u) goto L_08A55348;
    return;
L_08A55348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(792)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A553B4;
      }
      goto L_08A55368;
    }
L_08A55368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(792)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A553B4;
      }
      goto L_08A553A4;
    }
L_08A553A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A553B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 394u, 0x08A46678u>(ctx, &aot_mem) && ctx.pc == 0x08A553B4u) goto L_08A553B4;
    return;
L_08A553B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A553C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A553C8u) goto L_08A553C8;
    return;
L_08A553C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A553F0;
      }
      goto L_08A553D4;
    }
L_08A553D4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A553F0;
L_08A553F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A55444;
      }
      goto L_08A55430;
    }
L_08A55430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A555D8;
      }
      goto L_08A5543C;
    }
L_08A5543C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5545C;
      }
      goto L_08A55444;
    }
L_08A55444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55564;
      }
      goto L_08A55454;
    }
L_08A55454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A555D8;
      }
      goto L_08A5545C;
    }
L_08A5545C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5547Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A5547Cu) goto L_08A5547C;
    return;
L_08A5547C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A554E4;
      }
      goto L_08A554A4;
    }
L_08A554A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A554A4;
      }
      goto L_08A554E4;
    }
L_08A554E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A55548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A55548u) goto L_08A55548;
    return;
L_08A55548:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A555D8;
      }
      goto L_08A55564;
    }
L_08A55564:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A55580u) goto L_08A55580;
    return;
L_08A55580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A555A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 67u, 0x08A149D4u>(ctx, &aot_mem) && ctx.pc == 0x08A555A0u) goto L_08A555A0;
    return;
L_08A555A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A555C4;
      }
      goto L_08A555B0;
    }
L_08A555B0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    goto L_08A555C4;
L_08A555C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A555D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A555D8u) goto L_08A555D8;
    return;
L_08A555D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A555EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4104)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3344));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55814;
      }
      goto L_08A55640;
    }
L_08A55640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A556C8;
      }
      goto L_08A55654;
    }
L_08A55654:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A5571C;
      }
      goto L_08A5565C;
    }
L_08A5565C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55770;
      }
      goto L_08A55664;
    }
L_08A55664:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A557A0;
      }
      goto L_08A5566C;
    }
L_08A5566C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A557D8;
      }
      goto L_08A55674;
    }
L_08A55674:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A55688u) goto L_08A55688;
    return;
L_08A55688:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08A5569Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 96u, 0x08A2D33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5569Cu) goto L_08A5569C;
    return;
L_08A5569C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(89));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A556C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A556DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A556DCu) goto L_08A556DC;
    return;
L_08A556DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08A556F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 96u, 0x08A2D33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A556F0u) goto L_08A556F0;
    return;
L_08A556F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5571C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A55730u) goto L_08A55730;
    return;
L_08A55730:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08A55744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 96u, 0x08A2D33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55744u) goto L_08A55744;
    return;
L_08A55744:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(89));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55770:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A55784u) goto L_08A55784;
    return;
L_08A55784:
    ctx.gpr[4] = (0u | 264u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A557A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A557BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 469u, 0x08A4E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A557BCu) goto L_08A557BC;
    return;
L_08A557BC:
    ctx.gpr[4] = (0u | 768u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A557D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 53u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A557F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 469u, 0x08A4E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A557F4u) goto L_08A557F4;
    return;
L_08A557F4:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55814:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5586C;
      }
      goto L_08A5584C;
    }
L_08A5584C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5586C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1316));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A55894;
    }
L_08A55894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A558BC;
    }
L_08A558BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1356));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A558E4;
    }
L_08A558E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A5590C;
    }
L_08A5590C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1436));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A55934;
    }
L_08A55934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1376));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A5595C;
    }
L_08A5595C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A55984;
    }
L_08A55984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1536));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A559AC;
    }
L_08A559AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A559D4;
    }
L_08A559D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1476));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A559FC;
    }
L_08A559FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1496));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A44;
      }
      goto L_08A55A24;
    }
L_08A55A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1516));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A55A44;
L_08A55A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4064)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A55A68;
      }
      goto L_08A55A54;
    }
L_08A55A54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A55A68;
L_08A55A68:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08A55A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08A55A74u) goto L_08A55A74;
    return;
L_08A55A74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55A98;
      }
      goto L_08A55A84;
    }
L_08A55A84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A55A98;
L_08A55A98:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55AA8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3336)));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3340), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55AC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55B04;
      }
      goto L_08A55ADC;
    }
L_08A55ADC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10904));
    ctx.gpr[6] = (0u | 10400u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A55AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A55AF4u) goto L_08A55AF4;
    return;
L_08A55AF4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21304), 0u);
    ctx.gpr[31] = (0x08A55B04u);
    // nop
    goto L_08A55E3C;
L_08A55B04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55B54;
      }
      goto L_08A55B2C;
    }
L_08A55B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3456), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55B2C;
      }
      goto L_08A55B54;
    }
L_08A55B54:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3452)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A55BB0;
      }
      goto L_08A55BA4;
    }
L_08A55BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A55BB0u);
    // nop
    goto L_08A55B10;
L_08A55BB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55BBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A55BE0u);
    // nop
    goto L_08A55CD8;
L_08A55BE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10904));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55CB4;
      }
      goto L_08A55C1C;
    }
L_08A55C1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55C9C;
      }
      goto L_08A55C44;
    }
L_08A55C44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55CB4;
      }
      goto L_08A55C70;
    }
L_08A55C70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55CB4;
      }
      goto L_08A55C9C;
    }
L_08A55C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55C1C;
      }
      goto L_08A55CB4;
    }
L_08A55CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55CC8;
      }
      goto L_08A55CC4;
    }
L_08A55CC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A55CC8;
L_08A55CC8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55DE8;
      }
      goto L_08A55CF4;
    }
L_08A55CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10059u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55D14;
      }
      goto L_08A55D04;
    }
L_08A55D04:
    ctx.gpr[4] = (0u | 1023u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55D14;
    }
L_08A55D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10018 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D44;
      }
      goto L_08A55D24;
    }
L_08A55D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10028 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D44;
      }
      goto L_08A55D34;
    }
L_08A55D34:
    ctx.gpr[4] = (0u | 1027u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55D44;
    }
L_08A55D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D74;
      }
      goto L_08A55D54;
    }
L_08A55D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10006 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D74;
      }
      goto L_08A55D64;
    }
L_08A55D64:
    ctx.gpr[4] = (0u | 1029u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55D74;
    }
L_08A55D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10095 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55DA4;
      }
      goto L_08A55D84;
    }
L_08A55D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10142 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55DA4;
      }
      goto L_08A55D94;
    }
L_08A55D94:
    ctx.gpr[4] = (0u | 1030u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55DA4;
    }
L_08A55DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10073 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55DB4;
    }
L_08A55DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10095 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55DC4;
    }
L_08A55DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-20146))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55DE8;
    }
L_08A55DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E08;
      }
      goto L_08A55DF8;
    }
L_08A55DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 139 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E14;
      }
      goto L_08A55E08;
    }
L_08A55E08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55E14;
    }
L_08A55E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3564));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A55E30;
L_08A55E30:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55E3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19848));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16656));
    ctx.gpr[31] = (0x08A55EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 162u, 0x0893D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55EB4u) goto L_08A55EB4;
    return;
L_08A55EB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x08A55EC8u) goto L_08A55EC8;
    return;
L_08A55EC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55F9C;
      }
      goto L_08A55EDC;
    }
L_08A55EDC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16644));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A55EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A55EF4u) goto L_08A55EF4;
    return;
L_08A55EF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16640));
    ctx.gpr[31] = (0x08A55F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A55F08u) goto L_08A55F08;
    return;
L_08A55F08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55F9C;
      }
      goto L_08A55F14;
    }
L_08A55F14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A55F28u) goto L_08A55F28;
    return;
L_08A55F28:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16628));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A55F3Cu) goto L_08A55F3C;
    return;
L_08A55F3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55EF4;
      }
      goto L_08A55F48;
    }
L_08A55F48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21304)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55EF4;
      }
      goto L_08A55F5C;
    }
L_08A55F5C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21304)));
    ctx.gpr[5] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10904));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A55F88u);
    // nop
    goto L_08A56420;
L_08A55F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21304)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21304), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55EF4;
      }
      goto L_08A55F9C;
    }
L_08A55F9C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56028;
      }
      goto L_08A55FB4;
    }
L_08A55FB4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19864));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5600C;
      }
      goto L_08A55FD8;
    }
L_08A55FD8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19848));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A55FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08A55FF0u) goto L_08A55FF0;
    return;
L_08A55FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5600C;
      }
      goto L_08A56000;
    }
L_08A56000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (0x08A5600Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 97u, 0x08AA8780u>(ctx, &aot_mem) && ctx.pc == 0x08A5600Cu) goto L_08A5600C;
    return;
L_08A5600C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56028;
      }
      goto L_08A5601C;
    }
L_08A5601C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (0x08A56028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 97u, 0x08AA8780u>(ctx, &aot_mem) && ctx.pc == 0x08A56028u) goto L_08A56028;
    return;
L_08A56028:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56410;
      }
      goto L_08A56068;
    }
L_08A56068:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56094;
      }
      goto L_08A5608C;
    }
L_08A5608C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A56094;
L_08A56094:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56100;
      }
      goto L_08A560AC;
    }
L_08A560AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3456)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A560E8;
      }
      goto L_08A560D0;
    }
L_08A560D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A560E8;
L_08A560E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A560AC;
      }
      goto L_08A56100;
    }
L_08A56100:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A563A4;
      }
      goto L_08A56114;
    }
L_08A56114:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A56140u);
    // nop
    goto L_08A55BBC;
L_08A56140:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56384;
      }
      goto L_08A56150;
    }
L_08A56150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56174;
      }
      goto L_08A56160;
    }
L_08A56160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56384;
      }
      goto L_08A56174;
    }
L_08A56174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56384;
      }
      goto L_08A5618C;
    }
L_08A5618C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3352), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3448), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56208;
      }
      goto L_08A561C0;
    }
L_08A561C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(3336)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(3336), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56208;
      }
      goto L_08A561E4;
    }
L_08A561E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 89 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56208;
      }
      goto L_08A561F8;
    }
L_08A561F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(3336)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(3336), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A56208;
L_08A56208:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56230;
      }
      goto L_08A56220;
    }
L_08A56220:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A56230;
    }
L_08A56230:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5628C;
      }
      goto L_08A56248;
    }
L_08A56248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56248;
      }
      goto L_08A5628C;
    }
L_08A5628C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A56298;
    }
L_08A56298:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A562A0;
L_08A562A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5638C;
      }
      goto L_08A562AC;
    }
L_08A562AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56374;
      }
      goto L_08A562B8;
    }
L_08A562B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3336)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3336), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3336)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A562F0;
      }
      goto L_08A562D8;
    }
L_08A562D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(3336)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(3336), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56300;
      }
      goto L_08A562F0;
    }
L_08A562F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A56300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A56300u) goto L_08A56300;
    return;
L_08A56300:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3360), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56330;
      }
      goto L_08A56320;
    }
L_08A56320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3360)));
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3360), ctx.gpr[4]);
    goto L_08A56330;
L_08A56330:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3360)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 302u, 0x08A3A168u>(ctx, &aot_mem) && ctx.pc == 0x08A56348u) goto L_08A56348;
    return;
L_08A56348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3356), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3364), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A56374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 165u, 0x08A21680u>(ctx, &aot_mem) && ctx.pc == 0x08A56374u) goto L_08A56374;
    return;
L_08A56374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5638C;
      }
      goto L_08A56384;
    }
L_08A56384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A5638C;
L_08A5638C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56114;
      }
      goto L_08A563A4;
    }
L_08A563A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A563EC;
      }
      goto L_08A563B8;
    }
L_08A563B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 89 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A563EC;
      }
      goto L_08A563CC;
    }
L_08A563CC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1608)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56404;
      }
      goto L_08A563EC;
    }
L_08A563EC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1612)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A56404;
L_08A56404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A56410;
L_08A56410:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16644));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A56450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A56450u) goto L_08A56450;
    return;
L_08A56450:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16624));
    ctx.gpr[31] = (0x08A56464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A56464u) goto L_08A56464;
    return;
L_08A56464:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56768;
      }
      goto L_08A56470;
    }
L_08A56470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A56484u) goto L_08A56484;
    return;
L_08A56484:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16620));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A56498u) goto L_08A56498;
    return;
L_08A56498:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A565B0;
      }
      goto L_08A564A4;
    }
L_08A564A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56450;
      }
      goto L_08A564B4;
    }
L_08A564B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A564C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A564C8u) goto L_08A564C8;
    return;
L_08A564C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5659C;
      }
      goto L_08A564E0;
    }
L_08A564E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5659C;
      }
      goto L_08A564F0;
    }
L_08A564F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[31] = (0x08A56500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x08A56500u) goto L_08A56500;
    return;
L_08A56500:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5656C;
      }
      goto L_08A56510;
    }
L_08A56510:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (0x08A56524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A56524u) goto L_08A56524;
    return;
L_08A56524:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A564E0;
      }
      goto L_08A56564;
    }
L_08A56564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5659C;
      }
      goto L_08A5656C;
    }
L_08A5656C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (0x08A56578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A56578u) goto L_08A56578;
    return;
L_08A56578:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A5659C;
L_08A5659C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56450;
      }
      goto L_08A565B0;
    }
L_08A565B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16616));
    ctx.gpr[31] = (0x08A565C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A565C4u) goto L_08A565C4;
    return;
L_08A565C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56604;
      }
      goto L_08A565D0;
    }
L_08A565D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A565E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A565E4u) goto L_08A565E4;
    return;
L_08A565E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A565F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A565F0u) goto L_08A565F0;
    return;
L_08A565F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56450;
      }
      goto L_08A56604;
    }
L_08A56604:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16612));
    ctx.gpr[31] = (0x08A56618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A56618u) goto L_08A56618;
    return;
L_08A56618:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56658;
      }
      goto L_08A56624;
    }
L_08A56624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A56638u) goto L_08A56638;
    return;
L_08A56638:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A56644u) goto L_08A56644;
    return;
L_08A56644:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56450;
      }
      goto L_08A56658;
    }
L_08A56658:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16608));
    ctx.gpr[31] = (0x08A5666Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A5666Cu) goto L_08A5666C;
    return;
L_08A5666C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56450;
      }
      goto L_08A56678;
    }
L_08A56678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5668Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A5668Cu) goto L_08A5668C;
    return;
L_08A5668C:
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5669Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x08A5669Cu) goto L_08A5669C;
    return;
L_08A5669C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A566BC;
      }
      goto L_08A566AC;
    }
L_08A566AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A566EC;
      }
      goto L_08A566BC;
    }
L_08A566BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[31] = (0x08A566D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x08A566D4u) goto L_08A566D4;
    return;
L_08A566D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A566EC;
      }
      goto L_08A566E4;
    }
L_08A566E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08A566EC;
L_08A566EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x08A566F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A566F8u) goto L_08A566F8;
    return;
L_08A566F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56714;
      }
      goto L_08A5670C;
    }
L_08A5670C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    goto L_08A56714;
L_08A56714:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5672Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5672Cu) goto L_08A5672C;
    return;
L_08A5672C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A56738u) goto L_08A56738;
    return;
L_08A56738:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56450;
      }
      goto L_08A56748;
    }
L_08A56748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16604));
    ctx.gpr[31] = (0x08A56760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A56760u) goto L_08A56760;
    return;
L_08A56760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56450;
      }
      goto L_08A56768;
    }
L_08A56768:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A567C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56800;
    }
L_08A56800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16584)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5681C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 10045u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A56834u) goto L_08A56834;
    return;
L_08A56834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4992));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A56860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 102u, 0x08A14EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A56860u) goto L_08A56860;
    return;
L_08A56860:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A5687Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 165u, 0x08A28F18u>(ctx, &aot_mem) && ctx.pc == 0x08A5687Cu) goto L_08A5687C;
    return;
L_08A5687C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 10260u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A568B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A568B8u) goto L_08A568B8;
    return;
L_08A568B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A568CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 18u, 0x08A141B4u>(ctx, &aot_mem) && ctx.pc == 0x08A568CCu) goto L_08A568CC;
    return;
L_08A568CC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3028), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3016), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A568F0;
    }
L_08A568F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A56918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 165u, 0x08A28F18u>(ctx, &aot_mem) && ctx.pc == 0x08A56918u) goto L_08A56918;
    return;
L_08A56918:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5104));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A56980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A56980u) goto L_08A56980;
    return;
L_08A56980:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A569AC;
      }
      goto L_08A5699C;
    }
L_08A5699C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4310)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4310), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A569AC;
L_08A569AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A569E0;
      }
      goto L_08A569D4;
    }
L_08A569D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A569E0;
L_08A569E0:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56A14;
      }
      goto L_08A56A00;
    }
L_08A56A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56A14;
    }
L_08A56A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A56A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 476u, 0x08A4E270u>(ctx, &aot_mem) && ctx.pc == 0x08A56A24u) goto L_08A56A24;
    return;
L_08A56A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56A2C;
    }
L_08A56A2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A56A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 18u, 0x08A141B4u>(ctx, &aot_mem) && ctx.pc == 0x08A56A44u) goto L_08A56A44;
    return;
L_08A56A44:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3028), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3016), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A56A60;
L_08A56A60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A56A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 165u, 0x08A28F18u>(ctx, &aot_mem) && ctx.pc == 0x08A56A7Cu) goto L_08A56A7C;
    return;
L_08A56A7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5104));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56AE8;
      }
      goto L_08A56AD8;
    }
L_08A56AD8:
    ctx.gpr[4] = (0u | 10262u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56AF0;
      }
      goto L_08A56AE8;
    }
L_08A56AE8:
    ctx.gpr[4] = (0u | 10261u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A56AF0;
L_08A56AF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A56B08u) goto L_08A56B08;
    return;
L_08A56B08:
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A56B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A35E80u>(ctx, &aot_mem) && ctx.pc == 0x08A56B1Cu) goto L_08A56B1C;
    return;
L_08A56B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A56B28;
L_08A56B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4310)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4310), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 1040u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A56B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 538u, 0x08A3FE24u>(ctx, &aot_mem) && ctx.pc == 0x08A56B4Cu) goto L_08A56B4C;
    return;
L_08A56B4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56B58;
    }
L_08A56B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A56B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 341u, 0x08A35EC8u>(ctx, &aot_mem) && ctx.pc == 0x08A56B64u) goto L_08A56B64;
    return;
L_08A56B64:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56BA8;
      }
      goto L_08A56B78;
    }
L_08A56B78:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56B90;
    }
L_08A56B90:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56BA8;
    }
L_08A56BA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BCC;
      }
      goto L_08A56BC0;
    }
L_08A56BC0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A56BCC;
L_08A56BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3024));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A56BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 335u, 0x08A35DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A56BE4u) goto L_08A56BE4;
    return;
L_08A56BE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56BF0;
    }
L_08A56BF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10597u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A56C08u) goto L_08A56C08;
    return;
L_08A56C08:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56C34;
    }
L_08A56C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56C98;
      }
      goto L_08A56C60;
    }
L_08A56C60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A56C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A56C80u) goto L_08A56C80;
    return;
L_08A56C80:
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A56C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A56C98u) goto L_08A56C98;
    return;
L_08A56C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A56CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A56CACu) goto L_08A56CAC;
    return;
L_08A56CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56CB4;
    }
L_08A56CB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10264u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A56CCCu) goto L_08A56CCC;
    return;
L_08A56CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A56CD8;
L_08A56CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4310)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4310), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 1024u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56D24;
      }
      goto L_08A56D18;
    }
L_08A56D18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A56D24;
L_08A56D24:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56D58;
      }
      goto L_08A56D44;
    }
L_08A56D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56D58;
    }
L_08A56D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08A56D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 476u, 0x08A4E270u>(ctx, &aot_mem) && ctx.pc == 0x08A56D68u) goto L_08A56D68;
    return;
L_08A56D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56D70;
    }
L_08A56D70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10265u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A56D88u) goto L_08A56D88;
    return;
L_08A56D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DB0;
      }
      goto L_08A56D9C;
    }
L_08A56D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A56DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A56DB0u) goto L_08A56DB0;
    return;
L_08A56DB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56E14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A56E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A56E34u) goto L_08A56E34;
    return;
L_08A56E34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A56E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56E60u) goto L_08A56E60;
    return;
L_08A56E60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56E7C;
      }
      goto L_08A56E6C;
    }
L_08A56E6C:
    ctx.gpr[4] = (0u | 34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56E84;
      }
      goto L_08A56E7C;
    }
L_08A56E7C:
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A56E84;
L_08A56E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A56E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 484u, 0x0893F254u>(ctx, &aot_mem) && ctx.pc == 0x08A56E9Cu) goto L_08A56E9C;
    return;
L_08A56E9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4148));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08A56ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A56ED0u) goto L_08A56ED0;
    return;
L_08A56ED0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4172)));
    ctx.gpr[31] = (0x08A56EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A56EE4u) goto L_08A56EE4;
    return;
L_08A56EE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56F14;
      }
      goto L_08A56F08;
    }
L_08A56F08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A56F14;
L_08A56F14:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56F44;
      }
      goto L_08A56F30;
    }
L_08A56F30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56F50;
      }
      goto L_08A56F44;
    }
L_08A56F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4172)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A56F50;
L_08A56F50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4180)));
    ctx.gpr[31] = (0x08A56F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 485u, 0x0893F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56F6Cu) goto L_08A56F6C;
    return;
L_08A56F6C:
    ctx.gpr[5] = (0u | 97u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A56F7Cu) goto L_08A56F7C;
    return;
L_08A56F7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4172)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08A56FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A56FB0u) goto L_08A56FB0;
    return;
L_08A56FB0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56FE4;
      }
      goto L_08A56FD8;
    }
L_08A56FD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A56FE4;
L_08A56FE4:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5703C;
      }
      goto L_08A57000;
    }
L_08A57000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A57018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 484u, 0x0893F254u>(ctx, &aot_mem) && ctx.pc == 0x08A57018u) goto L_08A57018;
    return;
L_08A57018:
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A57028u) goto L_08A57028;
    return;
L_08A57028:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5703C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57180;
      }
      goto L_08A5708C;
    }
L_08A5708C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5716C;
      }
      goto L_08A570A0;
    }
L_08A570A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4148));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08A570B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A570B4u) goto L_08A570B4;
    return;
L_08A570B4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4172)));
    ctx.gpr[31] = (0x08A570C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A570C8u) goto L_08A570C8;
    return;
L_08A570C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A570F8;
      }
      goto L_08A570EC;
    }
L_08A570EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A570F8;
L_08A570F8:
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57180;
      }
      goto L_08A57114;
    }
L_08A57114:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A57134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 485u, 0x0893F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57134u) goto L_08A57134;
    return;
L_08A57134:
    ctx.gpr[5] = (0u | 103u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A57144u) goto L_08A57144;
    return;
L_08A57144:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5716C:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57180:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A571A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A571D4;
    }
L_08A571D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A571E8u);
    // nop
    goto L_08A57CB0;
L_08A571E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A571F8;
    }
L_08A571F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A572D4;
      }
      goto L_08A5720C;
    }
L_08A5720C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4140), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A572BC;
      }
      goto L_08A57234;
    }
L_08A57234:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4148));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[7] = (ctx.gpr[7] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A572B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 455u, 0x08A2BCD4u>(ctx, &aot_mem) && ctx.pc == 0x08A572B0u) goto L_08A572B0;
    return;
L_08A572B0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A572BC;
L_08A572BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5720C;
      }
      goto L_08A572D4;
    }
L_08A572D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A572E4;
    }
L_08A572E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16536)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57300:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57314;
    }
L_08A57314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57434;
      }
      goto L_08A57334;
    }
L_08A57334:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57434;
      }
      goto L_08A5736C;
    }
L_08A5736C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4148));
    ctx.gpr[31] = (0x08A57394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A57394u) goto L_08A57394;
    return;
L_08A57394:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A573A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A573A8u) goto L_08A573A8;
    return;
L_08A573A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A573D8;
      }
      goto L_08A573CC;
    }
L_08A573CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A573D8;
L_08A573D8:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57434;
      }
      goto L_08A573F4;
    }
L_08A573F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57414u);
    // nop
    goto L_08A56E40;
L_08A57414:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    goto L_08A57434;
L_08A57434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57314;
      }
      goto L_08A5744C;
    }
L_08A5744C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57454;
    }
L_08A57454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A57460u);
    // nop
    goto L_08A57050;
L_08A57460:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57488;
      }
      goto L_08A57474;
    }
L_08A57474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A574B8;
      }
      goto L_08A57480;
    }
L_08A57480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A574A0;
      }
      goto L_08A57488;
    }
L_08A57488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57498;
    }
L_08A57498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A574B8;
      }
      goto L_08A574A0;
    }
L_08A574A0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A574B8:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A574D0;
    }
L_08A574D0:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57510;
      }
      goto L_08A574FC;
    }
L_08A574FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57510;
    }
L_08A57510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4204)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57538;
      }
      goto L_08A57524;
    }
L_08A57524:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57574;
      }
      goto L_08A57538;
    }
L_08A57538:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5754Cu);
    // nop
    goto L_08A56E40;
L_08A5754C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57574;
    }
L_08A57574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57588;
    }
L_08A57588:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3848));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4196)));
    ctx.gpr[31] = (0x08A575A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 103u, 0x08A2D410u>(ctx, &aot_mem) && ctx.pc == 0x08A575A8u) goto L_08A575A8;
    return;
L_08A575A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A575D4;
      }
      goto L_08A575BC;
    }
L_08A575BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5768C;
      }
      goto L_08A575CC;
    }
L_08A575CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57634;
      }
      goto L_08A575D4;
    }
L_08A575D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5768C;
      }
      goto L_08A575E4;
    }
L_08A575E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A575F0u);
    // nop
    goto L_08A56F8C;
L_08A575F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57634;
      }
      goto L_08A575FC;
    }
L_08A575FC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A57648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 21u, 0x08A58218u>(ctx, &aot_mem) && ctx.pc == 0x08A57648u) goto L_08A57648;
    return;
L_08A57648:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5768C;
      }
      goto L_08A57654;
    }
L_08A57654:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5768C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5769Cu);
    // nop
    goto L_08A56EA8;
L_08A5769C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A576D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A576DCu);
    // nop
    goto L_08A57050;
L_08A576DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57704;
      }
      goto L_08A576F0;
    }
L_08A576F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A57734;
      }
      goto L_08A576FC;
    }
L_08A576FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5771C;
      }
      goto L_08A57704;
    }
L_08A57704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57714;
    }
L_08A57714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57734;
      }
      goto L_08A5771C;
    }
L_08A5771C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57734:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A5774C;
    }
L_08A5774C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4172)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[31] = (0x08A57760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A57760u) goto L_08A57760;
    return;
L_08A57760:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57790;
      }
      goto L_08A57784;
    }
L_08A57784:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A57790;
L_08A57790:
    ctx.gpr[4] = (17159u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A577AC;
    }
L_08A577AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57814;
      }
      goto L_08A577BC;
    }
L_08A577BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A577D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 21u, 0x08A58218u>(ctx, &aot_mem) && ctx.pc == 0x08A577D0u) goto L_08A577D0;
    return;
L_08A577D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A577DC;
    }
L_08A577DC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A57828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 21u, 0x08A58218u>(ctx, &aot_mem) && ctx.pc == 0x08A57828u) goto L_08A57828;
    return;
L_08A57828:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57834;
    }
L_08A57834:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57878:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57890;
    }
L_08A57890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57928;
      }
      goto L_08A578A4;
    }
L_08A578A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57928;
      }
      goto L_08A578B4;
    }
L_08A578B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08A578C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A578C8u) goto L_08A578C8;
    return;
L_08A578C8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4172)));
    ctx.gpr[31] = (0x08A578DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A578DCu) goto L_08A578DC;
    return;
L_08A578DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5790C;
      }
      goto L_08A57900;
    }
L_08A57900:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5790C;
L_08A5790C:
    ctx.gpr[4] = (17159u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57928;
    }
L_08A57928:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57A18;
      }
      goto L_08A57954;
    }
L_08A57954:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4148));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08A57968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A57968u) goto L_08A57968;
    return;
L_08A57968:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4172)));
    ctx.gpr[31] = (0x08A5797Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A5797Cu) goto L_08A5797C;
    return;
L_08A5797C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A579AC;
      }
      goto L_08A579A0;
    }
L_08A579A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A579AC;
L_08A579AC:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57A18;
      }
      goto L_08A579C8;
    }
L_08A579C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 104u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A579E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A579E4u) goto L_08A579E4;
    return;
L_08A579E4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A44;
      }
      goto L_08A57A2C;
    }
L_08A57A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A7C;
      }
      goto L_08A57A3C;
    }
L_08A57A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A90;
      }
      goto L_08A57A44;
    }
L_08A57A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A6C;
      }
      goto L_08A57A54;
    }
L_08A57A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AB8;
      }
      goto L_08A57A64;
    }
L_08A57A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AA4;
      }
      goto L_08A57A6C;
    }
L_08A57A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AB8;
      }
      goto L_08A57A7C;
    }
L_08A57A7C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3928));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AC4;
      }
      goto L_08A57A90;
    }
L_08A57A90:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AC4;
      }
      goto L_08A57AA4;
    }
L_08A57AA4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AC4;
      }
      goto L_08A57AB8;
    }
L_08A57AB8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_08A57AC4;
L_08A57AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4196)));
    ctx.gpr[31] = (0x08A57AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 103u, 0x08A2D410u>(ctx, &aot_mem) && ctx.pc == 0x08A57AE0u) goto L_08A57AE0;
    return;
L_08A57AE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B0C;
      }
      goto L_08A57AF4;
    }
L_08A57AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C38;
      }
      goto L_08A57B04;
    }
L_08A57B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B6C;
      }
      goto L_08A57B0C;
    }
L_08A57B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C38;
      }
      goto L_08A57B1C;
    }
L_08A57B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A57B28u);
    // nop
    goto L_08A56F8C;
L_08A57B28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B6C;
      }
      goto L_08A57B34;
    }
L_08A57B34:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57BD4;
      }
      goto L_08A57B7C;
    }
L_08A57B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A57B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 21u, 0x08A58218u>(ctx, &aot_mem) && ctx.pc == 0x08A57B90u) goto L_08A57B90;
    return;
L_08A57B90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C38;
      }
      goto L_08A57B9C;
    }
L_08A57B9C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A57BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 21u, 0x08A58218u>(ctx, &aot_mem) && ctx.pc == 0x08A57BE8u) goto L_08A57BE8;
    return;
L_08A57BE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C38;
      }
      goto L_08A57BF4;
    }
L_08A57BF4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57C38:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57C64;
    }
L_08A57C64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57C78u);
    // nop
    goto L_08A56E40;
L_08A57C78:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4140)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4204), ctx.gpr[4]);
    goto L_08A57C98;
L_08A57C98:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D0C;
      }
      goto L_08A57CDC;
    }
L_08A57CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A57D1C;
      }
      goto L_08A57CEC;
    }
L_08A57CEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A57D1C;
      }
      goto L_08A57CF4;
    }
L_08A57CF4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A57D1C;
      }
      goto L_08A57CFC;
    }
L_08A57CFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A57D1C;
      }
      goto L_08A57D04;
    }
L_08A57D04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A57D1C;
      }
      goto L_08A57D0C;
    }
L_08A57D0C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D44;
      }
      goto L_08A57D1C;
    }
L_08A57D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.gpr[31] = (0x08A57D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 508u, 0x08A4E5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A57D30u) goto L_08A57D30;
    return;
L_08A57D30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D44;
      }
      goto L_08A57D3C;
    }
L_08A57D3C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A57D44;
L_08A57D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 20u, 0x08A581FCu>(ctx, &aot_mem); return;
      }
      goto L_08A57D50;
    }
L_08A57D50:
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D94;
      }
      goto L_08A57D7C;
    }
L_08A57D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57DFC;
      }
      goto L_08A57D8C;
    }
L_08A57D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57DDC;
      }
      goto L_08A57D94;
    }
L_08A57D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57DFC;
      }
      goto L_08A57DA4;
    }
L_08A57DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57DFC;
      }
      goto L_08A57DB4;
    }
L_08A57DB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57DFC;
      }
      goto L_08A57DDC;
    }
L_08A57DDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A57DFC;
L_08A57DFC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E30;
      }
      goto L_08A57E18;
    }
L_08A57E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E7C;
      }
      goto L_08A57E28;
    }
L_08A57E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E48;
      }
      goto L_08A57E30;
    }
L_08A57E30:
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57E70;
      }
      goto L_08A57E40;
    }
L_08A57E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E7C;
      }
      goto L_08A57E48;
    }
L_08A57E48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E7C;
      }
      goto L_08A57E70;
    }
L_08A57E70:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A57E7C;
L_08A57E7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), 0u);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58030u>(ctx, &aot_mem); return;
      }
      goto L_08A57E9C;
    }
L_08A57E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15416));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A58010u>(ctx, &aot_mem); return;
      }
      goto L_08A57EB8;
    }
L_08A57EB8:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A58010u>(ctx, &aot_mem); return;
      }
      goto L_08A57EE4;
    }
L_08A57EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16496)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57F00:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A57F1C;
L_08A57F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57F70;
      }
      goto L_08A57F64;
    }
L_08A57F64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A57F70;
L_08A57F70:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A58010u>(ctx, &aot_mem); return;
      }
      goto L_08A57F8C;
    }
L_08A57F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A57FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 55u, 0x08A2CB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57FB4u) goto L_08A57FB4;
    return;
L_08A57FB4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A58010u>(ctx, &aot_mem); return;
      }
      goto L_08A57FD0;
    }
L_08A57FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (0x08A57FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 486u, 0x0893F2B8u>(ctx, &aot_mem) && ctx.pc == 0x08A57FDCu) goto L_08A57FDC;
    return;
L_08A57FDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A58010u>(ctx, &aot_mem); return;
      }
      goto L_08A57FEC;
    }
L_08A57FEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.pc = 0x08A58000u; return;
}

void recomp_unit_0148(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0148_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_148(Runtime &runtime) {
    runtime.register_generated_unit(148u, 0x08A54000u, 16384u, &recomp_unit_0148, &recomp_unit_0148_entry);
    runtime.register_function(0x08A54000u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5401Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54030u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5403Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54074u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54080u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5409Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54124u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54130u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54148u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54160u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54174u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54180u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54190u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54244u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5426Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54280u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54294u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5430Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54320u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54334u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54364u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54384u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5439Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5440Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54420u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54448u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54454u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5445Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5446Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54474u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54504u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54518u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54530u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54550u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5455Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54568u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5457Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5459Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54604u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54628u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54634u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54640u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54654u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54684u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54690u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54698u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54738u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5479Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54818u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54848u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5486Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54884u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54910u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54920u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5492Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54934u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54944u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5494Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54964u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54974u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54988u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5499Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54ACCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55000u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55018u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5502Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55040u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55058u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55068u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55074u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55084u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55090u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5510Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55134u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55144u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5515Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55164u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55180u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55190u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5520Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55220u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55234u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55258u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55264u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5526Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5527Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55284u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55300u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5531Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55330u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55348u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55368u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55400u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55430u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5543Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55444u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55454u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5545Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5547Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55548u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55564u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55580u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55640u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55654u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5565Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55664u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5566Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55674u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55688u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5569Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5571Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55730u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55744u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55770u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55784u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55814u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55828u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5584Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5586Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55894u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5590Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55934u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5595Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55984u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ADCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56000u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5600Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5601Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56028u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56038u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56068u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5608Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56094u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56100u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56114u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56140u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56150u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56160u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56174u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5618Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56208u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56220u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56230u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56248u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5628Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56298u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56300u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56320u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56330u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56348u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56374u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56384u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5638Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56404u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56410u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56420u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56450u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56464u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56470u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56484u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56498u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56500u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56510u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56524u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56564u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5656Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56578u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5659Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56604u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56618u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56624u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56638u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56644u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56658u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5666Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56678u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5668Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5669Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5670Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56714u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5672Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56738u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56748u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56760u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56768u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56800u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5681Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56834u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56860u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5687Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56918u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56980u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5699Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56ED0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57000u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57018u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57028u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5703Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57050u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5708Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57114u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57134u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57144u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5716Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57180u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57194u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5720Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57234u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57300u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57314u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57334u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5736Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57394u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57414u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57434u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5744Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57454u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57460u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57474u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57480u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57488u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57498u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57510u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57524u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57538u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5754Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57574u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57588u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57634u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57648u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57654u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5768Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5769Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57704u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57714u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5771Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57734u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5774Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57760u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57784u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57790u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57814u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57828u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57834u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57878u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57890u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57900u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5790Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57928u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57954u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57968u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5797Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FECu, &recomp_unit_0148, "recomp_unit_0148");
}
} // namespace psprecomp

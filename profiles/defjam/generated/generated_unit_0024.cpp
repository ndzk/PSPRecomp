#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0024[4095] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 68, 69, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88,
    0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97,
    0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 107, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114,
    0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133,
    0, 134, 0, 135, 136, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 162,
    0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0,
    0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 182, 0, 0, 183, 0, 184, 0, 185,
    0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211,
    0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0,
    236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258,
    0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0,
    0, 272, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 348, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0,
    0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0,
    0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460,
    0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0,
    467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 486,
    0, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0,
    501, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514,
    0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 531,
    0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 538, 0, 0, 539,
    0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0,
    0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0,
    561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0,
    0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0,
    0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0,
    577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584,
    0, 585, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 592, 593, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 604, 605, 0, 0, 0, 0, 606, 0, 607,
    0, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 612, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616,
    0, 0, 0, 0, 0, 617, 0, 618, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 624,
    0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0,
    635, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 643, 0, 0, 0, 0, 644, 0, 0,
    0, 0, 645, 0, 646, 647, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 651, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 656,
    0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0,
    661, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 664, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0,
    0, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 676,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 681,
};
void recomp_unit_0024_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08864000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0024[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08864000;
    case 2u: goto L_08864008;
    case 3u: goto L_08864094;
    case 4u: goto L_088640AC;
    case 5u: goto L_088640C0;
    case 6u: goto L_088640D0;
    case 7u: goto L_088640D8;
    case 8u: goto L_088640EC;
    case 9u: goto L_088640FC;
    case 10u: goto L_08864108;
    case 11u: goto L_088641A8;
    case 12u: goto L_088641F8;
    case 13u: goto L_08864228;
    case 14u: goto L_08864260;
    case 15u: goto L_08864274;
    case 16u: goto L_088642A4;
    case 17u: goto L_088642BC;
    case 18u: goto L_088642D0;
    case 19u: goto L_088642E8;
    case 20u: goto L_088642FC;
    case 21u: goto L_08864310;
    case 22u: goto L_08864328;
    case 23u: goto L_08864330;
    case 24u: goto L_08864340;
    case 25u: goto L_08864354;
    case 26u: goto L_0886436C;
    case 27u: goto L_08864378;
    case 28u: goto L_0886438C;
    case 29u: goto L_088643A4;
    case 30u: goto L_088643B0;
    case 31u: goto L_088643C4;
    case 32u: goto L_088643DC;
    case 33u: goto L_088643E4;
    case 34u: goto L_088643F4;
    case 35u: goto L_08864404;
    case 36u: goto L_08864418;
    case 37u: goto L_08864430;
    case 38u: goto L_08864440;
    case 39u: goto L_08864448;
    case 40u: goto L_08864450;
    case 41u: goto L_08864460;
    case 42u: goto L_08864470;
    case 43u: goto L_08864480;
    case 44u: goto L_0886449C;
    case 45u: goto L_088644BC;
    case 46u: goto L_088644CC;
    case 47u: goto L_088644E4;
    case 48u: goto L_088644FC;
    case 49u: goto L_08864514;
    case 50u: goto L_0886452C;
    case 51u: goto L_0886453C;
    case 52u: goto L_0886454C;
    case 53u: goto L_08864554;
    case 54u: goto L_0886456C;
    case 55u: goto L_0886457C;
    case 56u: goto L_08864594;
    case 57u: goto L_088645AC;
    case 58u: goto L_088645C8;
    case 59u: goto L_088645FC;
    case 60u: goto L_08864604;
    case 61u: goto L_0886460C;
    case 62u: goto L_08864614;
    case 63u: goto L_088646B4;
    case 64u: goto L_088646BC;
    case 65u: goto L_088646C4;
    case 66u: goto L_088646CC;
    case 67u: goto L_088646D4;
    case 68u: goto L_088646E4;
    case 69u: goto L_088646E8;
    case 70u: goto L_088646F4;
    case 71u: goto L_08864704;
    case 72u: goto L_08864710;
    case 73u: goto L_08864718;
    case 74u: goto L_08864724;
    case 75u: goto L_08864740;
    case 76u: goto L_08864754;
    case 77u: goto L_08864760;
    case 78u: goto L_08864770;
    case 79u: goto L_08864780;
    case 80u: goto L_08864788;
    case 81u: goto L_08864790;
    case 82u: goto L_08864798;
    case 83u: goto L_088647A4;
    case 84u: goto L_088647B4;
    case 85u: goto L_088647D0;
    case 86u: goto L_088647D8;
    case 87u: goto L_088647F4;
    case 88u: goto L_088647FC;
    case 89u: goto L_08864804;
    case 90u: goto L_0886480C;
    case 91u: goto L_0886481C;
    case 92u: goto L_08864824;
    case 93u: goto L_08864840;
    case 94u: goto L_08864848;
    case 95u: goto L_08864864;
    case 96u: goto L_0886486C;
    case 97u: goto L_0886487C;
    case 98u: goto L_08864888;
    case 99u: goto L_088648A0;
    case 100u: goto L_08864938;
    case 101u: goto L_0886494C;
    case 102u: goto L_08864954;
    case 103u: goto L_08864984;
    case 104u: goto L_0886498C;
    case 105u: goto L_0886499C;
    case 106u: goto L_088649A4;
    case 107u: goto L_088649B0;
    case 108u: goto L_088649B4;
    case 109u: goto L_088649C4;
    case 110u: goto L_088649D4;
    case 111u: goto L_088649E8;
    case 112u: goto L_08864A4C;
    case 113u: goto L_08864A60;
    case 114u: goto L_08864A7C;
    case 115u: goto L_08864A84;
    case 116u: goto L_08864A94;
    case 117u: goto L_08864AA0;
    case 118u: goto L_08864AB4;
    case 119u: goto L_08864AC0;
    case 120u: goto L_08864ACC;
    case 121u: goto L_08864AD4;
    case 122u: goto L_08864ADC;
    case 123u: goto L_08864B2C;
    case 124u: goto L_08864B30;
    case 125u: goto L_08864B38;
    case 126u: goto L_08864B40;
    case 127u: goto L_08864B48;
    case 128u: goto L_08864B54;
    case 129u: goto L_08864B5C;
    case 130u: goto L_08864B64;
    case 131u: goto L_08864B6C;
    case 132u: goto L_08864B74;
    case 133u: goto L_08864B7C;
    case 134u: goto L_08864B84;
    case 135u: goto L_08864B8C;
    case 136u: goto L_08864B90;
    case 137u: goto L_08864B94;
    case 138u: goto L_08864B9C;
    case 139u: goto L_08864BA4;
    case 140u: goto L_08864BC4;
    case 141u: goto L_08864BCC;
    case 142u: goto L_08864BD8;
    case 143u: goto L_08864BE0;
    case 144u: goto L_08864BE8;
    case 145u: goto L_08864BF0;
    case 146u: goto L_08864BF8;
    case 147u: goto L_08864C14;
    case 148u: goto L_08864CA4;
    case 149u: goto L_08864CC8;
    case 150u: goto L_08864CF0;
    case 151u: goto L_08864D00;
    case 152u: goto L_08864D10;
    case 153u: goto L_08864D18;
    case 154u: goto L_08864D20;
    case 155u: goto L_08864D28;
    case 156u: goto L_08864D30;
    case 157u: goto L_08864D38;
    case 158u: goto L_08864D40;
    case 159u: goto L_08864D58;
    case 160u: goto L_08864D60;
    case 161u: goto L_08864D6C;
    case 162u: goto L_08864D7C;
    case 163u: goto L_08864D8C;
    case 164u: goto L_08864D94;
    case 165u: goto L_08864DA0;
    case 166u: goto L_08864DE8;
    case 167u: goto L_08864DF8;
    case 168u: goto L_08864E10;
    case 169u: goto L_08864E28;
    case 170u: goto L_08864E30;
    case 171u: goto L_08864E48;
    case 172u: goto L_08864E50;
    case 173u: goto L_08864E68;
    case 174u: goto L_08864E70;
    case 175u: goto L_08864E88;
    case 176u: goto L_08864E90;
    case 177u: goto L_08864EA8;
    case 178u: goto L_08864EB0;
    case 179u: goto L_08864EB8;
    case 180u: goto L_08864EC4;
    case 181u: goto L_08864EDC;
    case 182u: goto L_08864EE0;
    case 183u: goto L_08864EEC;
    case 184u: goto L_08864EF4;
    case 185u: goto L_08864EFC;
    case 186u: goto L_08864F04;
    case 187u: goto L_08864F14;
    case 188u: goto L_08864F24;
    case 189u: goto L_08864F38;
    case 190u: goto L_08864F50;
    case 191u: goto L_08864F60;
    case 192u: goto L_08864F68;
    case 193u: goto L_08864FAC;
    case 194u: goto L_08864FB4;
    case 195u: goto L_08864FBC;
    case 196u: goto L_08864FC4;
    case 197u: goto L_08865008;
    case 198u: goto L_08865010;
    case 199u: goto L_08865054;
    case 200u: goto L_0886505C;
    case 201u: goto L_08865094;
    case 202u: goto L_0886509C;
    case 203u: goto L_088650A8;
    case 204u: goto L_088650B0;
    case 205u: goto L_088650C0;
    case 206u: goto L_088650C8;
    case 207u: goto L_088650D0;
    case 208u: goto L_088650DC;
    case 209u: goto L_088650EC;
    case 210u: goto L_088650F4;
    case 211u: goto L_088650FC;
    case 212u: goto L_08865104;
    case 213u: goto L_0886510C;
    case 214u: goto L_08865114;
    case 215u: goto L_08865120;
    case 216u: goto L_08865130;
    case 217u: goto L_08865138;
    case 218u: goto L_08865140;
    case 219u: goto L_08865148;
    case 220u: goto L_08865150;
    case 221u: goto L_08865158;
    case 222u: goto L_08865164;
    case 223u: goto L_08865180;
    case 224u: goto L_08865188;
    case 225u: goto L_08865190;
    case 226u: goto L_08865198;
    case 227u: goto L_088651A0;
    case 228u: goto L_088651A8;
    case 229u: goto L_088651B4;
    case 230u: goto L_088651D0;
    case 231u: goto L_088651D8;
    case 232u: goto L_088651E0;
    case 233u: goto L_088651E8;
    case 234u: goto L_088651F0;
    case 235u: goto L_088651F8;
    case 236u: goto L_08865200;
    case 237u: goto L_0886520C;
    case 238u: goto L_08865230;
    case 239u: goto L_0886524C;
    case 240u: goto L_08865314;
    case 241u: goto L_08865340;
    case 242u: goto L_08865350;
    case 243u: goto L_08865380;
    case 244u: goto L_088653D0;
    case 245u: goto L_088653E4;
    case 246u: goto L_08865404;
    case 247u: goto L_08865434;
    case 248u: goto L_0886543C;
    case 249u: goto L_08865444;
    case 250u: goto L_0886545C;
    case 251u: goto L_08865470;
    case 252u: goto L_08865490;
    case 253u: goto L_088654B0;
    case 254u: goto L_088654BC;
    case 255u: goto L_088654CC;
    case 256u: goto L_08865548;
    case 257u: goto L_08865568;
    case 258u: goto L_0886557C;
    case 259u: goto L_08865584;
    case 260u: goto L_08865594;
    case 261u: goto L_088655A8;
    case 262u: goto L_088655CC;
    case 263u: goto L_088655EC;
    case 264u: goto L_0886561C;
    case 265u: goto L_08865624;
    case 266u: goto L_08865630;
    case 267u: goto L_0886563C;
    case 268u: goto L_08865650;
    case 269u: goto L_08865658;
    case 270u: goto L_08865664;
    case 271u: goto L_08865670;
    case 272u: goto L_08865684;
    case 273u: goto L_08865688;
    case 274u: goto L_0886569C;
    case 275u: goto L_088656B4;
    case 276u: goto L_088656CC;
    case 277u: goto L_088656E4;
    case 278u: goto L_08865704;
    case 279u: goto L_08865720;
    case 280u: goto L_08865778;
    case 281u: goto L_088657D0;
    case 282u: goto L_088657E0;
    case 283u: goto L_08865804;
    case 284u: goto L_08865810;
    case 285u: goto L_0886581C;
    case 286u: goto L_08865830;
    case 287u: goto L_08865838;
    case 288u: goto L_08865840;
    case 289u: goto L_08865850;
    case 290u: goto L_08865860;
    case 291u: goto L_08865878;
    case 292u: goto L_088658AC;
    case 293u: goto L_088658C8;
    case 294u: goto L_08865944;
    case 295u: goto L_08865958;
    case 296u: goto L_08865968;
    case 297u: goto L_0886597C;
    case 298u: goto L_08865994;
    case 299u: goto L_088659A4;
    case 300u: goto L_088659CC;
    case 301u: goto L_088659E0;
    case 302u: goto L_08865A00;
    case 303u: goto L_08865A30;
    case 304u: goto L_08865A38;
    case 305u: goto L_08865A40;
    case 306u: goto L_08865A58;
    case 307u: goto L_08865A6C;
    case 308u: goto L_08865A84;
    case 309u: goto L_08865A8C;
    case 310u: goto L_08865AA4;
    case 311u: goto L_08865AD4;
    case 312u: goto L_08865ADC;
    case 313u: goto L_08865AF4;
    case 314u: goto L_08865C0C;
    case 315u: goto L_08865C18;
    case 316u: goto L_08865C20;
    case 317u: goto L_08865C34;
    case 318u: goto L_08865C44;
    case 319u: goto L_08865C64;
    case 320u: goto L_08865C8C;
    case 321u: goto L_08865C90;
    case 322u: goto L_08865CA0;
    case 323u: goto L_08865CB0;
    case 324u: goto L_08865CC8;
    case 325u: goto L_08865CF0;
    case 326u: goto L_08865D0C;
    case 327u: goto L_08865D20;
    case 328u: goto L_08865D38;
    case 329u: goto L_08865D4C;
    case 330u: goto L_08865D80;
    case 331u: goto L_08865D8C;
    case 332u: goto L_08865D94;
    case 333u: goto L_08865DA4;
    case 334u: goto L_08865DC0;
    case 335u: goto L_08865DD4;
    case 336u: goto L_08865DEC;
    case 337u: goto L_08865DF8;
    case 338u: goto L_08865E14;
    case 339u: goto L_08865E3C;
    case 340u: goto L_08865E54;
    case 341u: goto L_08865E84;
    case 342u: goto L_08865E90;
    case 343u: goto L_08865E9C;
    case 344u: goto L_08865EA8;
    case 345u: goto L_08865EB0;
    case 346u: goto L_08865EC4;
    case 347u: goto L_08865ED0;
    case 348u: goto L_08865ED4;
    case 349u: goto L_08865ED8;
    case 350u: goto L_08865EE0;
    case 351u: goto L_08865F1C;
    case 352u: goto L_08865F40;
    case 353u: goto L_08865F64;
    case 354u: goto L_08865F80;
    case 355u: goto L_08865FE0;
    case 356u: goto L_08865FF0;
    case 357u: goto L_08866018;
    case 358u: goto L_08866020;
    case 359u: goto L_08866038;
    case 360u: goto L_08866040;
    case 361u: goto L_08866050;
    case 362u: goto L_088660A4;
    case 363u: goto L_088660B4;
    case 364u: goto L_088660C0;
    case 365u: goto L_088660D0;
    case 366u: goto L_088660DC;
    case 367u: goto L_088660F4;
    case 368u: goto L_08866100;
    case 369u: goto L_08866124;
    case 370u: goto L_08866144;
    case 371u: goto L_088661C0;
    case 372u: goto L_088661CC;
    case 373u: goto L_088661E4;
    case 374u: goto L_08866234;
    case 375u: goto L_08866244;
    case 376u: goto L_0886626C;
    case 377u: goto L_08866274;
    case 378u: goto L_0886628C;
    case 379u: goto L_08866294;
    case 380u: goto L_088662A4;
    case 381u: goto L_088662CC;
    case 382u: goto L_088662F8;
    case 383u: goto L_0886632C;
    case 384u: goto L_08866340;
    case 385u: goto L_08866350;
    case 386u: goto L_08866358;
    case 387u: goto L_08866368;
    case 388u: goto L_08866380;
    case 389u: goto L_0886638C;
    case 390u: goto L_088663C4;
    case 391u: goto L_088663CC;
    case 392u: goto L_088663F4;
    case 393u: goto L_0886640C;
    case 394u: goto L_08866420;
    case 395u: goto L_0886642C;
    case 396u: goto L_08866434;
    case 397u: goto L_0886643C;
    case 398u: goto L_08866444;
    case 399u: goto L_08866450;
    case 400u: goto L_08866460;
    case 401u: goto L_08866494;
    case 402u: goto L_088664A4;
    case 403u: goto L_088664B8;
    case 404u: goto L_088664C8;
    case 405u: goto L_088664D0;
    case 406u: goto L_088664D8;
    case 407u: goto L_0886657C;
    case 408u: goto L_08866590;
    case 409u: goto L_088665B8;
    case 410u: goto L_088665E4;
    case 411u: goto L_08866600;
    case 412u: goto L_0886660C;
    case 413u: goto L_088666D4;
    case 414u: goto L_08866700;
    case 415u: goto L_08866714;
    case 416u: goto L_0886672C;
    case 417u: goto L_088667C8;
    case 418u: goto L_088667E0;
    case 419u: goto L_0886683C;
    case 420u: goto L_0886685C;
    case 421u: goto L_08866984;
    case 422u: goto L_088669B4;
    case 423u: goto L_088669BC;
    case 424u: goto L_08866A7C;
    case 425u: goto L_08866A98;
    case 426u: goto L_08866AA0;
    case 427u: goto L_08866AA8;
    case 428u: goto L_08866AD0;
    case 429u: goto L_08866AD8;
    case 430u: goto L_08866AE0;
    case 431u: goto L_08866AEC;
    case 432u: goto L_08866AF4;
    case 433u: goto L_08866B04;
    case 434u: goto L_08866B24;
    case 435u: goto L_08866B2C;
    case 436u: goto L_08866B3C;
    case 437u: goto L_08866B44;
    case 438u: goto L_08866B64;
    case 439u: goto L_08866B80;
    case 440u: goto L_08866BB4;
    case 441u: goto L_08866BC8;
    case 442u: goto L_08866BD8;
    case 443u: goto L_08866BE4;
    case 444u: goto L_08866C6C;
    case 445u: goto L_08866C84;
    case 446u: goto L_08866CCC;
    case 447u: goto L_08866D88;
    case 448u: goto L_08866DA8;
    case 449u: goto L_08866E4C;
    case 450u: goto L_08866E68;
    case 451u: goto L_08866E70;
    case 452u: goto L_08866E78;
    case 453u: goto L_08866EA0;
    case 454u: goto L_08866EA8;
    case 455u: goto L_08866EB0;
    case 456u: goto L_08866EBC;
    case 457u: goto L_08866EC4;
    case 458u: goto L_08866ED4;
    case 459u: goto L_08866EF4;
    case 460u: goto L_08866EFC;
    case 461u: goto L_08866F0C;
    case 462u: goto L_08866F14;
    case 463u: goto L_08866F34;
    case 464u: goto L_08866F50;
    case 465u: goto L_08866F5C;
    case 466u: goto L_08866F70;
    case 467u: goto L_08866F80;
    case 468u: goto L_08866F8C;
    case 469u: goto L_0886702C;
    case 470u: goto L_0886707C;
    case 471u: goto L_088670AC;
    case 472u: goto L_088670E8;
    case 473u: goto L_088670FC;
    case 474u: goto L_08867124;
    case 475u: goto L_0886713C;
    case 476u: goto L_08867150;
    case 477u: goto L_08867168;
    case 478u: goto L_0886717C;
    case 479u: goto L_088671A0;
    case 480u: goto L_088671A8;
    case 481u: goto L_088671B0;
    case 482u: goto L_088671B8;
    case 483u: goto L_088671C8;
    case 484u: goto L_088671D8;
    case 485u: goto L_088671E8;
    case 486u: goto L_088671FC;
    case 487u: goto L_08867214;
    case 488u: goto L_0886721C;
    case 489u: goto L_08867224;
    case 490u: goto L_08867240;
    case 491u: goto L_08867258;
    case 492u: goto L_0886726C;
    case 493u: goto L_08867280;
    case 494u: goto L_08867298;
    case 495u: goto L_088672B0;
    case 496u: goto L_088672B8;
    case 497u: goto L_088672E0;
    case 498u: goto L_088672E8;
    case 499u: goto L_088672F0;
    case 500u: goto L_088672F8;
    case 501u: goto L_08867300;
    case 502u: goto L_08867304;
    case 503u: goto L_08867310;
    case 504u: goto L_08867318;
    case 505u: goto L_0886732C;
    case 506u: goto L_08867340;
    case 507u: goto L_08867348;
    case 508u: goto L_08867350;
    case 509u: goto L_08867370;
    case 510u: goto L_0886737C;
    case 511u: goto L_088673A4;
    case 512u: goto L_088673C4;
    case 513u: goto L_088673E0;
    case 514u: goto L_088673FC;
    case 515u: goto L_08867418;
    case 516u: goto L_08867434;
    case 517u: goto L_08867450;
    case 518u: goto L_08867460;
    case 519u: goto L_08867470;
    case 520u: goto L_088674A8;
    case 521u: goto L_088674B0;
    case 522u: goto L_088674BC;
    case 523u: goto L_088674CC;
    case 524u: goto L_088674DC;
    case 525u: goto L_088674EC;
    case 526u: goto L_0886751C;
    case 527u: goto L_08867530;
    case 528u: goto L_08867538;
    case 529u: goto L_08867564;
    case 530u: goto L_0886756C;
    case 531u: goto L_0886757C;
    case 532u: goto L_088675A0;
    case 533u: goto L_088675B8;
    case 534u: goto L_088675CC;
    case 535u: goto L_088675D8;
    case 536u: goto L_088675E0;
    case 537u: goto L_088675E8;
    case 538u: goto L_088675F0;
    case 539u: goto L_088675FC;
    case 540u: goto L_08867604;
    case 541u: goto L_08867624;
    case 542u: goto L_08867630;
    case 543u: goto L_08867638;
    case 544u: goto L_08867640;
    case 545u: goto L_0886764C;
    case 546u: goto L_08867668;
    case 547u: goto L_08867694;
    case 548u: goto L_0886769C;
    case 549u: goto L_088676AC;
    case 550u: goto L_088676BC;
    case 551u: goto L_088676CC;
    case 552u: goto L_088676DC;
    case 553u: goto L_088676EC;
    case 554u: goto L_088676F8;
    case 555u: goto L_0886770C;
    case 556u: goto L_08867720;
    case 557u: goto L_08867734;
    case 558u: goto L_0886774C;
    case 559u: goto L_08867760;
    case 560u: goto L_08867768;
    case 561u: goto L_08867780;
    case 562u: goto L_0886779C;
    case 563u: goto L_088677AC;
    case 564u: goto L_088677BC;
    case 565u: goto L_088677CC;
    case 566u: goto L_088677DC;
    case 567u: goto L_088677EC;
    case 568u: goto L_0886780C;
    case 569u: goto L_08867820;
    case 570u: goto L_08867834;
    case 571u: goto L_08867848;
    case 572u: goto L_0886785C;
    case 573u: goto L_0886786C;
    case 574u: goto L_08867884;
    case 575u: goto L_088678C0;
    case 576u: goto L_088678E0;
    case 577u: goto L_08867900;
    case 578u: goto L_08867910;
    case 579u: goto L_08867920;
    case 580u: goto L_08867930;
    case 581u: goto L_0886793C;
    case 582u: goto L_08867950;
    case 583u: goto L_08867964;
    case 584u: goto L_0886797C;
    case 585u: goto L_08867984;
    case 586u: goto L_0886798C;
    case 587u: goto L_08867994;
    case 588u: goto L_0886799C;
    case 589u: goto L_088679D0;
    case 590u: goto L_088679E0;
    case 591u: goto L_088679E8;
    case 592u: goto L_088679EC;
    case 593u: goto L_088679F0;
    case 594u: goto L_08867A24;
    case 595u: goto L_08867A34;
    case 596u: goto L_08867A38;
    case 597u: goto L_08867A44;
    case 598u: goto L_08867A64;
    case 599u: goto L_08867AA0;
    case 600u: goto L_08867AA8;
    case 601u: goto L_08867AB8;
    case 602u: goto L_08867AC8;
    case 603u: goto L_08867AD0;
    case 604u: goto L_08867ADC;
    case 605u: goto L_08867AE0;
    case 606u: goto L_08867AF4;
    case 607u: goto L_08867AFC;
    case 608u: goto L_08867B04;
    case 609u: goto L_08867B10;
    case 610u: goto L_08867B24;
    case 611u: goto L_08867B38;
    case 612u: goto L_08867B40;
    case 613u: goto L_08867B44;
    case 614u: goto L_08867B4C;
    case 615u: goto L_08867B6C;
    case 616u: goto L_08867B7C;
    case 617u: goto L_08867B94;
    case 618u: goto L_08867B9C;
    case 619u: goto L_08867BA0;
    case 620u: goto L_08867BA8;
    case 621u: goto L_08867BC8;
    case 622u: goto L_08867BD8;
    case 623u: goto L_08867BEC;
    case 624u: goto L_08867BFC;
    case 625u: goto L_08867C10;
    case 626u: goto L_08867C28;
    case 627u: goto L_08867C40;
    case 628u: goto L_08867C70;
    case 629u: goto L_08867C9C;
    case 630u: goto L_08867CAC;
    case 631u: goto L_08867CBC;
    case 632u: goto L_08867CCC;
    case 633u: goto L_08867CD8;
    case 634u: goto L_08867CE8;
    case 635u: goto L_08867D00;
    case 636u: goto L_08867D10;
    case 637u: goto L_08867D24;
    case 638u: goto L_08867D34;
    case 639u: goto L_08867D3C;
    case 640u: goto L_08867D48;
    case 641u: goto L_08867D50;
    case 642u: goto L_08867D58;
    case 643u: goto L_08867D60;
    case 644u: goto L_08867D74;
    case 645u: goto L_08867D88;
    case 646u: goto L_08867D90;
    case 647u: goto L_08867D94;
    case 648u: goto L_08867D98;
    case 649u: goto L_08867DAC;
    case 650u: goto L_08867DC0;
    case 651u: goto L_08867DC4;
    case 652u: goto L_08867DD0;
    case 653u: goto L_08867DDC;
    case 654u: goto L_08867DE8;
    case 655u: goto L_08867DF4;
    case 656u: goto L_08867DFC;
    case 657u: goto L_08867E08;
    case 658u: goto L_08867E28;
    case 659u: goto L_08867E60;
    case 660u: goto L_08867E68;
    case 661u: goto L_08867E80;
    case 662u: goto L_08867E90;
    case 663u: goto L_08867EA4;
    case 664u: goto L_08867EB0;
    case 665u: goto L_08867EB8;
    case 666u: goto L_08867EC0;
    case 667u: goto L_08867EE0;
    case 668u: goto L_08867EF0;
    case 669u: goto L_08867F08;
    case 670u: goto L_08867F10;
    case 671u: goto L_08867F18;
    case 672u: goto L_08867F38;
    case 673u: goto L_08867F48;
    case 674u: goto L_08867F5C;
    case 675u: goto L_08867F6C;
    case 676u: goto L_08867F7C;
    case 677u: goto L_08867FA8;
    case 678u: goto L_08867FD0;
    case 679u: goto L_08867FE0;
    case 680u: goto L_08867FF0;
    case 681u: goto L_08867FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08864000:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    goto L_08864008;
L_08864008:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08864094u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x08864094u) goto L_08864094;
    return;
L_08864094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088640C0;
      }
      goto L_088640AC;
    }
L_088640AC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088640D0;
      }
      goto L_088640C0;
    }
L_088640C0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(576));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088640D0;
L_088640D0:
    ctx.gpr[31] = (0x088640D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088640D8u) goto L_088640D8;
    return;
L_088640D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088640FC;
      }
      goto L_088640EC;
    }
L_088640EC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08864108;
      }
      goto L_088640FC;
    }
L_088640FC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    goto L_08864108;
L_08864108:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x088641A8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 95u, 0x08840888u>(ctx, &aot_mem) && ctx.pc == 0x088641A8u) goto L_088641A8;
    return;
L_088641A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08864008;
      }
      goto L_088641F8;
    }
L_088641F8:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08864228u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 243u, 0x08841568u>(ctx, &aot_mem) && ctx.pc == 0x08864228u) goto L_08864228;
    return;
L_08864228:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864260:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9220)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(9224), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 148u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088642A4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088642A4u) goto L_088642A4;
    return;
L_088642A4:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(22700), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088642BCu);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088642BCu) goto L_088642BC;
    return;
L_088642BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088642D0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088642D0u) goto L_088642D0;
    return;
L_088642D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088642E8u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088642E8u) goto L_088642E8;
    return;
L_088642E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088642FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27344));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x088642FCu) goto L_088642FC;
    return;
L_088642FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 21120u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08864310u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08864310u) goto L_08864310;
    return;
L_08864310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08864328u);
    ctx.gpr[6] = (0u | 21120u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08864328u) goto L_08864328;
    return;
L_08864328:
    ctx.gpr[31] = (0x08864330u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 592u, 0x08847378u>(ctx, &aot_mem) && ctx.pc == 0x08864330u) goto L_08864330;
    return;
L_08864330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08864340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 275u, 0x08841980u>(ctx, &aot_mem) && ctx.pc == 0x08864340u) goto L_08864340;
    return;
L_08864340:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 232u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08864354u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08864354u) goto L_08864354;
    return;
L_08864354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886436Cu);
    ctx.gpr[6] = (0u | 232u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0886436Cu) goto L_0886436C;
    return;
L_0886436C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x08864378u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 336u, 0x08841D40u>(ctx, &aot_mem) && ctx.pc == 0x08864378u) goto L_08864378;
    return;
L_08864378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2800u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886438Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886438Cu) goto L_0886438C;
    return;
L_0886438C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088643A4u);
    ctx.gpr[6] = (0u | 2800u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088643A4u) goto L_088643A4;
    return;
L_088643A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x088643B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x08841EC4u>(ctx, &aot_mem) && ctx.pc == 0x088643B0u) goto L_088643B0;
    return;
L_088643B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 512u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088643C4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088643C4u) goto L_088643C4;
    return;
L_088643C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088643DCu);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088643DCu) goto L_088643DC;
    return;
L_088643DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088643E4;
L_088643E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088643F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x088643F4u) goto L_088643F4;
    return;
L_088643F4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088643E4;
      }
      goto L_08864404;
    }
L_08864404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08864418u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08864418u) goto L_08864418;
    return;
L_08864418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08864430u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08864430u) goto L_08864430;
    return;
L_08864430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08864440u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08864888;
L_08864440:
    ctx.gpr[31] = (0x08864448u);
    // nop
    goto L_088650B0;
L_08864448:
    ctx.gpr[31] = (0x08864450u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x08864450u) goto L_08864450;
    return;
L_08864450:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08864460u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17864));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08864460u) goto L_08864460;
    return;
L_08864460:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08864470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18532));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08864470u) goto L_08864470;
    return;
L_08864470:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08864480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18540));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08864480u) goto L_08864480;
    return;
L_08864480:
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
L_0886449C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088644BCu);
    // nop
    goto L_08865120;
L_088644BC:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x088644CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x088644CCu) goto L_088644CC;
    return;
L_088644CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088644E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088644E4u) goto L_088644E4;
    return;
L_088644E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088644FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088644FCu) goto L_088644FC;
    return;
L_088644FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08864514u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08864514u) goto L_08864514;
    return;
L_08864514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0886452Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886452Cu) goto L_0886452C;
    return;
L_0886452C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0886453Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0886453Cu) goto L_0886453C;
    return;
L_0886453C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0886454C;
L_0886454C:
    ctx.gpr[31] = (0x08864554u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08864554u) goto L_08864554;
    return;
L_08864554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0886454C;
      }
      goto L_0886456C;
    }
L_0886456C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0886457Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886457Cu) goto L_0886457C;
    return;
L_0886457C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08864594u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08864594u) goto L_08864594;
    return;
L_08864594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088645ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088645ACu) goto L_088645AC;
    return;
L_088645AC:
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
L_088645C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(65)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088646E8;
      }
      goto L_088645FC;
    }
L_088645FC:
    ctx.gpr[31] = (0x08864604u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x08864604u) goto L_08864604;
    return;
L_08864604:
    ctx.gpr[31] = (0x0886460Cu);
    // nop
    goto L_0886638C;
L_0886460C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088646CC;
      }
      goto L_08864614;
    }
L_08864614:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-129));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-107));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[31] = (0x088646B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 243u, 0x08841568u>(ctx, &aot_mem) && ctx.pc == 0x088646B4u) goto L_088646B4;
    return;
L_088646B4:
    ctx.gpr[31] = (0x088646BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 247u, 0x088415A0u>(ctx, &aot_mem) && ctx.pc == 0x088646BCu) goto L_088646BC;
    return;
L_088646BC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088646CC;
      }
      goto L_088646C4;
    }
L_088646C4:
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (0u | 2u);
    goto L_088646CC;
L_088646CC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08864848;
      }
      goto L_088646D4;
    }
L_088646D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x088646E4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088646E4u) goto L_088646E4;
    return;
L_088646E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    goto L_088646E8;
L_088646E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08864704;
      }
      goto L_088646F4;
    }
L_088646F4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08864710;
      }
      goto L_08864704;
    }
L_08864704:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08864710;
L_08864710:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08864724;
      }
      goto L_08864718;
    }
L_08864718:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
      if (branch_taken) {
          goto L_08864740;
      }
      goto L_08864724;
    }
L_08864724:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    goto L_08864740;
L_08864740:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864840;
      }
      goto L_08864754;
    }
L_08864754:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(141)));
        goto L_088647F4;
    }
    goto L_08864760;
L_08864760:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08864840;
      }
      goto L_08864770;
    }
L_08864770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 64u);
      if (branch_taken) {
          goto L_088647D0;
      }
      goto L_08864780;
    }
L_08864780:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08864798;
      }
      goto L_08864788;
    }
L_08864788:
    ctx.gpr[31] = (0x08864790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088649E8;
L_08864790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864840;
      }
      goto L_08864798;
    }
L_08864798:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088647A4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 119u, 0x0884C7BCu>(ctx, &aot_mem) && ctx.pc == 0x088647A4u) goto L_088647A4;
    return;
L_088647A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088647B4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088647B4u) goto L_088647B4;
    return;
L_088647B4:
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
L_088647D0:
    ctx.gpr[31] = (0x088647D8u);
    // nop
    goto L_08864DA0;
L_088647D8:
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
L_088647F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886481C;
      }
      goto L_088647FC;
    }
L_088647FC:
    ctx.gpr[31] = (0x08864804u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 141u, 0x0884C934u>(ctx, &aot_mem) && ctx.pc == 0x08864804u) goto L_08864804;
    return;
L_08864804:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08864840;
      }
      goto L_0886480C;
    }
L_0886480C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08864840;
      }
      goto L_0886481C;
    }
L_0886481C:
    ctx.gpr[31] = (0x08864824u);
    // nop
    goto L_08864CF0;
L_08864824:
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
L_08864840:
    ctx.gpr[31] = (0x08864848u);
    // nop
    goto L_08865164;
L_08864848:
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
L_08864864:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886486C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886487Cu);
    // nop
    goto L_088651B4;
L_0886487C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[31]);
    ctx.gpr[31] = (0x088648A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x088648A0u) goto L_088648A0;
    return;
L_088648A0:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (ctx.gpr[2] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(136), 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08864938;
L_08864938:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 29 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08864938;
      }
      goto L_0886494C;
    }
L_0886494C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08864954;
L_08864954:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4224));
      if (branch_taken) {
          goto L_08864954;
      }
      goto L_08864984;
    }
L_08864984:
    ctx.gpr[31] = (0x0886498Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 111u, 0x0893480Cu>(ctx, &aot_mem) && ctx.pc == 0x0886498Cu) goto L_0886498C;
    return;
L_0886498C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_0886499C;
L_0886499C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    goto L_088649A4;
L_088649A4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088649B4;
      }
      goto L_088649B0;
    }
L_088649B0:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088649B4;
L_088649B4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088649A4;
      }
      goto L_088649C4;
    }
L_088649C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0886499C;
      }
      goto L_088649D4;
    }
L_088649D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088649E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 8u);
      if (branch_taken) {
          goto L_08864B2C;
      }
      goto L_08864A4C;
    }
L_08864A4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (0u | 1024u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08864A94;
      }
      goto L_08864A60;
    }
L_08864A60:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08864A84;
      }
      goto L_08864A7C;
    }
L_08864A7C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    goto L_08864A84;
L_08864A84:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08864A94;
L_08864A94:
    ctx.gpr[8] = (0u | 2048u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08864ACC;
      }
      goto L_08864AA0;
    }
L_08864AA0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_08864AC0;
      }
      goto L_08864AB4;
    }
L_08864AB4:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    goto L_08864AC0;
L_08864AC0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08864ACC;
L_08864ACC:
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08864B30;
    }
    goto L_08864AD4;
L_08864AD4:
    ctx.gpr[31] = (0x08864ADCu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08864ADCu) goto L_08864ADC;
    return;
L_08864ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x08864B2Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_08864C14;
L_08864B2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08864B30;
L_08864B30:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08864B48;
      }
      goto L_08864B38;
    }
L_08864B38:
    ctx.gpr[31] = (0x08864B40u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08864F38;
L_08864B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08864B90;
      }
      goto L_08864B48;
    }
L_08864B48:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08864B64;
      }
      goto L_08864B54;
    }
L_08864B54:
    ctx.gpr[31] = (0x08864B5Cu);
    ctx.gpr[4] = (0u | 3u);
    goto L_08864F38;
L_08864B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08864B90;
      }
      goto L_08864B64;
    }
L_08864B64:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08864B7C;
      }
      goto L_08864B6C;
    }
L_08864B6C:
    ctx.gpr[31] = (0x08864B74u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08864F38;
L_08864B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08864B90;
      }
      goto L_08864B7C;
    }
L_08864B7C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08864B94;
      }
      goto L_08864B84;
    }
L_08864B84:
    ctx.gpr[31] = (0x08864B8Cu);
    ctx.gpr[4] = (0u | 2u);
    goto L_08864F38;
L_08864B8C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08864B90;
L_08864B90:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08864B94;
L_08864B94:
    if (ctx.gpr[19] == ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08864BCC;
    }
    goto L_08864B9C;
L_08864B9C:
    ctx.gpr[31] = (0x08864BA4u);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08864BA4u) goto L_08864BA4;
    return;
L_08864BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x08864BC4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_08864C14;
L_08864BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864BF8;
      }
      goto L_08864BCC;
    }
L_08864BCC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08864BF0;
      }
      goto L_08864BD8;
    }
L_08864BD8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08864BF0;
      }
      goto L_08864BE0;
    }
L_08864BE0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08864BF0;
      }
      goto L_08864BE8;
    }
L_08864BE8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08864BF8;
      }
      goto L_08864BF0;
    }
L_08864BF0:
    ctx.gpr[31] = (0x08864BF8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08864BF8u) goto L_08864BF8;
    return;
L_08864BF8:
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
L_08864C14:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_08864CC8;
      }
      goto L_08864CA4;
    }
L_08864CA4:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864CC8:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08864D00u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08864D00u) goto L_08864D00;
    return;
L_08864D00:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08864D10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17564));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08864D10u) goto L_08864D10;
    return;
L_08864D10:
    ctx.gpr[31] = (0x08864D18u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08864D18u) goto L_08864D18;
    return;
L_08864D18:
    ctx.gpr[31] = (0x08864D20u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08864D20u) goto L_08864D20;
    return;
L_08864D20:
    ctx.gpr[31] = (0x08864D28u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08864D28u) goto L_08864D28;
    return;
L_08864D28:
    ctx.gpr[31] = (0x08864D30u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x08864D30u) goto L_08864D30;
    return;
L_08864D30:
    ctx.gpr[31] = (0x08864D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 564u, 0x0889B9A8u>(ctx, &aot_mem) && ctx.pc == 0x08864D38u) goto L_08864D38;
    return;
L_08864D38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2186u << 16u);
      if (branch_taken) {
          goto L_08864D60;
      }
      goto L_08864D40;
    }
L_08864D40:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19272));
    ctx.gpr[31] = (0x08864D58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18980));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08864D58u) goto L_08864D58;
    return;
L_08864D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864D8C;
      }
      goto L_08864D60;
    }
L_08864D60:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08864D6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18764));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08864D6Cu) goto L_08864D6C;
    return;
L_08864D6C:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08864D7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18084));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08864D7Cu) goto L_08864D7C;
    return;
L_08864D7C:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08864D8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18076));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08864D8Cu) goto L_08864D8C;
    return;
L_08864D8C:
    ctx.gpr[31] = (0x08864D94u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08864D94u) goto L_08864D94;
    return;
L_08864D94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08864DE8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08864DE8u) goto L_08864DE8;
    return;
L_08864DE8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864EB0;
      }
      goto L_08864DF8;
    }
L_08864DF8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864E10:
    ctx.gpr[4] = (2189u << 16u);
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28528));
    ctx.gpr[31] = (0x08864E28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28196));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08864E28u) goto L_08864E28;
    return;
L_08864E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2182u << 16u);
      if (branch_taken) {
          goto L_08864EE0;
      }
      goto L_08864E30;
    }
L_08864E30:
    ctx.gpr[4] = (2189u << 16u);
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1808));
    ctx.gpr[31] = (0x08864E48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2136));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08864E48u) goto L_08864E48;
    return;
L_08864E48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2182u << 16u);
      if (branch_taken) {
          goto L_08864EE0;
      }
      goto L_08864E50;
    }
L_08864E50:
    ctx.gpr[4] = (2190u << 16u);
    ctx.gpr[5] = (2190u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24140));
    ctx.gpr[31] = (0x08864E68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24532));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08864E68u) goto L_08864E68;
    return;
L_08864E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2182u << 16u);
      if (branch_taken) {
          goto L_08864EE0;
      }
      goto L_08864E70;
    }
L_08864E70:
    ctx.gpr[4] = (2189u << 16u);
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28344));
    ctx.gpr[31] = (0x08864E88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28692));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08864E88u) goto L_08864E88;
    return;
L_08864E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2182u << 16u);
      if (branch_taken) {
          goto L_08864EE0;
      }
      goto L_08864E90;
    }
L_08864E90:
    ctx.gpr[4] = (2192u << 16u);
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2920));
    ctx.gpr[31] = (0x08864EA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15492));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08864EA8u) goto L_08864EA8;
    return;
L_08864EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2182u << 16u);
      if (branch_taken) {
          goto L_08864EE0;
      }
      goto L_08864EB0;
    }
L_08864EB0:
    ctx.gpr[31] = (0x08864EB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 50u, 0x0893438Cu>(ctx, &aot_mem) && ctx.pc == 0x08864EB8u) goto L_08864EB8;
    return;
L_08864EB8:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08864EC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08864EC4u) goto L_08864EC4;
    return;
L_08864EC4:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27480));
    ctx.gpr[31] = (0x08864EDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26864));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08864EDCu) goto L_08864EDC;
    return;
L_08864EDC:
    ctx.gpr[4] = (2182u << 16u);
    goto L_08864EE0;
L_08864EE0:
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08864EECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17564));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08864EECu) goto L_08864EEC;
    return;
L_08864EEC:
    ctx.gpr[31] = (0x08864EF4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08864EF4u) goto L_08864EF4;
    return;
L_08864EF4:
    ctx.gpr[31] = (0x08864EFCu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08864EFCu) goto L_08864EFC;
    return;
L_08864EFC:
    ctx.gpr[31] = (0x08864F04u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08864F04u) goto L_08864F04;
    return;
L_08864F04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864F14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08864F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08864F24u) goto L_08864F24;
    return;
L_08864F24:
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864F38:
    ctx.gpr[9] = (2222u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(22700)));
    goto L_08864F50;
L_08864F50:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08864FB4;
      }
      goto L_08864F60;
    }
L_08864F60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08865054;
      }
      goto L_08864F68;
    }
L_08864F68:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (ctx.gpr[11] << 4u);
    ctx.gpr[3] = (0u - ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.gpr[11] = (ctx.gpr[11] << 3u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[3] << 4u);
    ctx.gpr[2] = (ctx.gpr[3] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) > 0;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08865008;
      }
      goto L_08864FAC;
    }
L_08864FAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08865054;
      }
      goto L_08864FB4;
    }
L_08864FB4:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08865010;
      }
      goto L_08864FBC;
    }
L_08864FBC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08865054;
      }
      goto L_08864FC4;
    }
L_08864FC4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[2] = (0u - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[3] << 4u);
    ctx.gpr[2] = (ctx.gpr[3] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(420)));
      if (branch_taken) {
          goto L_08865054;
      }
      goto L_08865008;
    }
L_08865008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08865054;
      }
      goto L_08865010;
    }
L_08865010:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[2] = (0u - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[3] << 4u);
    ctx.gpr[2] = (ctx.gpr[3] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(280)));
      if (branch_taken) {
          goto L_08865054;
      }
      goto L_08865054;
    }
L_08865054:
    if (ctx.gpr[2] == ctx.gpr[6]) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
        goto L_0886509C;
    }
    goto L_0886505C;
L_0886505C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[7] << 7u);
    ctx.gpr[3] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[2] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088650A8;
      }
      goto L_08865094;
    }
L_08865094:
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_0886509C;
L_0886509C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08864F50;
      }
      goto L_088650A8;
    }
L_088650A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088650B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088650C0u);
    // nop
    goto L_0886520C;
L_088650C0:
    ctx.gpr[31] = (0x088650C8u);
    // nop
    goto L_088665B8;
L_088650C8:
    ctx.gpr[31] = (0x088650D0u);
    // nop
    goto L_08865CC8;
L_088650D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088650DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088650ECu);
    // nop
    goto L_08865350;
L_088650EC:
    ctx.gpr[31] = (0x088650F4u);
    // nop
    goto L_088654CC;
L_088650F4:
    ctx.gpr[31] = (0x088650FCu);
    // nop
    goto L_08865878;
L_088650FC:
    ctx.gpr[31] = (0x08865104u);
    // nop
    goto L_0886685C;
L_08865104:
    ctx.gpr[31] = (0x0886510Cu);
    // nop
    goto L_08865F40;
L_0886510C:
    ctx.gpr[31] = (0x08865114u);
    // nop
    goto L_08866100;
L_08865114:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08865130u);
    // nop
    goto L_08865404;
L_08865130:
    ctx.gpr[31] = (0x08865138u);
    // nop
    goto L_088655EC;
L_08865138:
    ctx.gpr[31] = (0x08865140u);
    // nop
    goto L_08865A00;
L_08865140:
    ctx.gpr[31] = (0x08865148u);
    // nop
    goto L_08865D4C;
L_08865148:
    ctx.gpr[31] = (0x08865150u);
    // nop
    goto L_08865FF0;
L_08865150:
    ctx.gpr[31] = (0x08865158u);
    // nop
    goto L_08866244;
L_08865158:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(65)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088651A8;
      }
      goto L_08865180;
    }
L_08865180:
    ctx.gpr[31] = (0x08865188u);
    // nop
    goto L_08865704;
L_08865188:
    ctx.gpr[31] = (0x08865190u);
    // nop
    goto L_08865AA4;
L_08865190:
    ctx.gpr[31] = (0x08865198u);
    // nop
    goto L_08866050;
L_08865198:
    ctx.gpr[31] = (0x088651A0u);
    // nop
    goto L_08866CCC;
L_088651A0:
    ctx.gpr[31] = (0x088651A8u);
    // nop
    goto L_088662A4;
L_088651A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088651B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(65)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865200;
      }
      goto L_088651D0;
    }
L_088651D0:
    ctx.gpr[31] = (0x088651D8u);
    // nop
    goto L_08865E14;
L_088651D8:
    ctx.gpr[31] = (0x088651E0u);
    // nop
    goto L_08865490;
L_088651E0:
    ctx.gpr[31] = (0x088651E8u);
    // nop
    goto L_088660DC;
L_088651E8:
    ctx.gpr[31] = (0x088651F0u);
    // nop
    goto L_08865C64;
L_088651F0:
    ctx.gpr[31] = (0x088651F8u);
    // nop
    goto L_088657E0;
L_088651F8:
    ctx.gpr[31] = (0x08865200u);
    // nop
    goto L_08866368;
L_08865200:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886520C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08865230u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865230u) goto L_08865230;
    return;
L_08865230:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886524Cu);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0886524Cu) goto L_0886524C;
    return;
L_0886524C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (17285u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16912u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17210u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (17230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (16920u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (ctx.gpr[5] << 24u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[5] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[11] << 24u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_08865314;
L_08865314:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08865314;
      }
      goto L_08865340;
    }
L_08865340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08865380;
L_08865380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088653D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088653D0u) goto L_088653D0;
    return;
L_088653D0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08865380;
      }
      goto L_088653E4;
    }
L_088653E4:
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
L_08865404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0886545C;
      }
      goto L_08865434;
    }
L_08865434:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0886543C;
L_0886543C:
    ctx.gpr[31] = (0x08865444u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08865444u) goto L_08865444;
    return;
L_08865444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0886543C;
      }
      goto L_0886545C;
    }
L_0886545C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08865470u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865470u) goto L_08865470;
    return;
L_08865470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
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
L_08865490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088654B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088654B0u) goto L_088654B0;
    return;
L_088654B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x088654BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088654BCu) goto L_088654BC;
    return;
L_088654BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088654CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (0u | 92u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08865548;
L_08865548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08865568u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08865568u) goto L_08865568;
    return;
L_08865568:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
      if (branch_taken) {
          goto L_08865548;
      }
      goto L_0886557C;
    }
L_0886557C:
    ctx.gpr[31] = (0x08865584u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08865584u) goto L_08865584;
    return;
L_08865584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08865594u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x08865594u) goto L_08865594;
    return;
L_08865594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x088655A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088655A8u) goto L_088655A8;
    return;
L_088655A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x088655CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x088655CCu) goto L_088655CC;
    return;
L_088655CC:
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
L_088655EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08865688;
      }
      goto L_0886561C;
    }
L_0886561C:
    ctx.gpr[31] = (0x08865624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 60u, 0x08838878u>(ctx, &aot_mem) && ctx.pc == 0x08865624u) goto L_08865624;
    return;
L_08865624:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[17] = (0u | 92u);
    goto L_08865630;
L_08865630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0886563Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0886563Cu) goto L_0886563C;
    return;
L_0886563C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
      if (branch_taken) {
          goto L_08865630;
      }
      goto L_08865650;
    }
L_08865650:
    ctx.gpr[31] = (0x08865658u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08865658u) goto L_08865658;
    return;
L_08865658:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[17] = (0u | 0u);
    goto L_08865664;
L_08865664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08865670u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x08865670u) goto L_08865670;
    return;
L_08865670:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
      if (branch_taken) {
          goto L_08865664;
      }
      goto L_08865684;
    }
L_08865684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    goto L_08865688;
L_08865688:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0886569Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886569Cu) goto L_0886569C;
    return;
L_0886569C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088656B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088656B4u) goto L_088656B4;
    return;
L_088656B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088656CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088656CCu) goto L_088656CC;
    return;
L_088656CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088656E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088656E4u) goto L_088656E4;
    return;
L_088656E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
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
L_08865704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08865720u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x08865720u) goto L_08865720;
    return;
L_08865720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17352u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (17259u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08865778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08865778u) goto L_08865778;
    return;
L_08865778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17354u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (17260u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x088657D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x088657D0u) goto L_088657D0;
    return;
L_088657D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088657E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08865804u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 62u, 0x08838894u>(ctx, &aot_mem) && ctx.pc == 0x08865804u) goto L_08865804;
    return;
L_08865804:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[17] = (0u | 92u);
    goto L_08865810;
L_08865810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0886581Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886581Cu) goto L_0886581C;
    return;
L_0886581C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
      if (branch_taken) {
          goto L_08865810;
      }
      goto L_08865830;
    }
L_08865830:
    ctx.gpr[31] = (0x08865838u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08865838u) goto L_08865838;
    return;
L_08865838:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08865840;
L_08865840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08865850u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x08865850u) goto L_08865850;
    return;
L_08865850:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08865840;
      }
      goto L_08865860;
    }
L_08865860:
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
L_08865878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 368u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088658ACu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088658ACu) goto L_088658AC;
    return;
L_088658AC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088658C8u);
    ctx.gpr[6] = (0u | 368u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088658C8u) goto L_088658C8;
    return;
L_088658C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17064u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17193u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17062u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17138u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17194u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08865944;
L_08865944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x08865958u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 106u, 0x08838C48u>(ctx, &aot_mem) && ctx.pc == 0x08865958u) goto L_08865958;
    return;
L_08865958:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08865944;
      }
      goto L_08865968;
    }
L_08865968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886597Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886597Cu) goto L_0886597C;
    return;
L_0886597C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08865994u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08865994u) goto L_08865994;
    return;
L_08865994:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_088659A4;
L_088659A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x088659CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x088659CCu) goto L_088659CC;
    return;
L_088659CC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088659A4;
      }
      goto L_088659E0;
    }
L_088659E0:
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
L_08865A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08865A8C;
      }
      goto L_08865A30;
    }
L_08865A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (0u | 0u);
    goto L_08865A38;
L_08865A38:
    ctx.gpr[31] = (0x08865A40u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 116u, 0x08838EB4u>(ctx, &aot_mem) && ctx.pc == 0x08865A40u) goto L_08865A40;
    return;
L_08865A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08865A38;
      }
      goto L_08865A58;
    }
L_08865A58:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08865A6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865A6Cu) goto L_08865A6C;
    return;
L_08865A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08865A84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865A84u) goto L_08865A84;
    return;
L_08865A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    goto L_08865A8C;
L_08865A8C:
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
L_08865AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08865AD4;
L_08865AD4:
    ctx.gpr[31] = (0x08865ADCu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x08865ADCu) goto L_08865ADC;
    return;
L_08865ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08865AD4;
      }
      goto L_08865AF4;
    }
L_08865AF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17064u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (17193u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (17062u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (17138u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (17194u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08865C0C;
L_08865C0C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08865C18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08864F38;
L_08865C18:
    if (ctx.gpr[2] != ctx.gpr[18]) {
    ctx.gpr[20] = (0u | 1u);
        goto L_08865C20;
    }
    goto L_08865C20;
L_08865C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x08865C34u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 118u, 0x08838ED0u>(ctx, &aot_mem) && ctx.pc == 0x08865C34u) goto L_08865C34;
    return;
L_08865C34:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08865C0C;
      }
      goto L_08865C44;
    }
L_08865C44:
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
L_08865C64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08865CB0;
      }
      goto L_08865C8C;
    }
L_08865C8C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08865C90;
L_08865C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x08865CA0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 123u, 0x08838F04u>(ctx, &aot_mem) && ctx.pc == 0x08865CA0u) goto L_08865CA0;
    return;
L_08865CA0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08865C90;
      }
      goto L_08865CB0;
    }
L_08865CB0:
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
L_08865CC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 644u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08865CF0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865CF0u) goto L_08865CF0;
    return;
L_08865CF0:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08865D0Cu);
    ctx.gpr[6] = (0u | 644u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08865D0Cu) goto L_08865D0C;
    return;
L_08865D0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 224u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08865D20u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865D20u) goto L_08865D20;
    return;
L_08865D20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08865D38u);
    ctx.gpr[6] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08865D38u) goto L_08865D38;
    return;
L_08865D38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08865DC0;
      }
      goto L_08865D80;
    }
L_08865D80:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08865D8C;
L_08865D8C:
    ctx.gpr[31] = (0x08865D94u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08865D94u) goto L_08865D94;
    return;
L_08865D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08865DA4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 92u, 0x08840848u>(ctx, &aot_mem) && ctx.pc == 0x08865DA4u) goto L_08865DA4;
    return;
L_08865DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08865D8C;
      }
      goto L_08865DC0;
    }
L_08865DC0:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08865DD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865DD4u) goto L_08865DD4;
    return;
L_08865DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08865DECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865DECu) goto L_08865DEC;
    return;
L_08865DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x08865DF8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 238u, 0x0884151Cu>(ctx, &aot_mem) && ctx.pc == 0x08865DF8u) goto L_08865DF8;
    return;
L_08865DF8:
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
L_08865E14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08865E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 245u, 0x08841584u>(ctx, &aot_mem) && ctx.pc == 0x08865E3Cu) goto L_08865E3C;
    return;
L_08865E3C:
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08865F1C;
      }
      goto L_08865E54;
    }
L_08865E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08865F1C;
      }
      goto L_08865E84;
    }
L_08865E84:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08865E90;
L_08865E90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08865EB0;
      }
      goto L_08865E9C;
    }
L_08865E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08865EA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 124u, 0x08840B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08865EA8u) goto L_08865EA8;
    return;
L_08865EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22700)));
      if (branch_taken) {
          goto L_08865ED4;
      }
      goto L_08865EB0;
    }
L_08865EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
        goto L_08865ED8;
    }
    goto L_08865EC4;
L_08865EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08865ED0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 124u, 0x08840B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08865ED0u) goto L_08865ED0;
    return;
L_08865ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22700)));
    goto L_08865ED4;
L_08865ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    goto L_08865ED8;
L_08865ED8:
    ctx.gpr[31] = (0x08865EE0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08865EE0u) goto L_08865EE0;
    return;
L_08865EE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08865E90;
      }
      goto L_08865F1C;
    }
L_08865F1C:
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
L_08865F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08865F64u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08865F64u) goto L_08865F64;
    return;
L_08865F64:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08865F80u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08865F80u) goto L_08865F80;
    return;
L_08865F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08865FE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08865FE0u) goto L_08865FE0;
    return;
L_08865FE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08866040;
      }
      goto L_08866018;
    }
L_08866018:
    ctx.gpr[31] = (0x08866020u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 172u, 0x0884102Cu>(ctx, &aot_mem) && ctx.pc == 0x08866020u) goto L_08866020;
    return;
L_08866020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08866038u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08866038u) goto L_08866038;
    return;
L_08866038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    goto L_08866040;
L_08866040:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_088660B4;
      }
      goto L_088660A4;
    }
L_088660A4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088660C0;
      }
      goto L_088660B4;
    }
L_088660B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    goto L_088660C0;
L_088660C0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088660D0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 180u, 0x088410A4u>(ctx, &aot_mem) && ctx.pc == 0x088660D0u) goto L_088660D0;
    return;
L_088660D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088660DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088660F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 189u, 0x08841134u>(ctx, &aot_mem) && ctx.pc == 0x088660F4u) goto L_088660F4;
    return;
L_088660F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 180u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08866124u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08866124u) goto L_08866124;
    return;
L_08866124:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (0u | 180u);
    ctx.gpr[31] = (0x08866144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08866144u) goto L_08866144;
    return;
L_08866144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (17333u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (17242u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (16768u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088661C0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088661C0u) goto L_088661C0;
    return;
L_088661C0:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x088661CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27332));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088661CCu) goto L_088661CC;
    return;
L_088661CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27316));
    ctx.gpr[31] = (0x088661E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088661E4u) goto L_088661E4;
    return;
L_088661E4:
    ctx.gpr[4] = (0u | 128u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x08866234u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x08866234u) goto L_08866234;
    return;
L_08866234:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08866294;
      }
      goto L_0886626C;
    }
L_0886626C:
    ctx.gpr[31] = (0x08866274u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08866274u) goto L_08866274;
    return;
L_08866274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0886628Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886628Cu) goto L_0886628C;
    return;
L_0886628C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
    goto L_08866294;
L_08866294:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088662A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088662CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088662CCu) goto L_088662CC;
    return;
L_088662CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088662F8u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088662F8u) goto L_088662F8;
    return;
L_088662F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17242u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08866340;
      }
      goto L_0886632C;
    }
L_0886632C:
    ctx.gpr[6] = (17334u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08866350;
      }
      goto L_08866340;
    }
L_08866340:
    ctx.gpr[6] = (17333u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    goto L_08866350;
L_08866350:
    ctx.gpr[31] = (0x08866358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x08866358u) goto L_08866358;
    return;
L_08866358:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08866380u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08866380u) goto L_08866380;
    return;
L_08866380:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886638C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08866420;
      }
      goto L_088663C4;
    }
L_088663C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08866590;
      }
      goto L_088663CC;
    }
L_088663CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9296)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9300)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088663F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27308));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088663F4u) goto L_088663F4;
    return;
L_088663F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x0886640Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0886640Cu) goto L_0886640C;
    return;
L_0886640C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08866590;
      }
      goto L_08866420;
    }
L_08866420:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886643C;
      }
      goto L_0886642C;
    }
L_0886642C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08866590;
    }
    goto L_08866434;
L_08866434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866590;
      }
      goto L_0886643C;
    }
L_0886643C:
    ctx.gpr[31] = (0x08866444u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x08866444u) goto L_08866444;
    return;
L_08866444:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08866590;
      }
      goto L_08866450;
    }
L_08866450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08866460u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08866460u) goto L_08866460;
    return;
L_08866460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(136));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(100));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[18] = (0u | 0u);
    goto L_08866494;
L_08866494:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088664A4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x088664A4u) goto L_088664A4;
    return;
L_088664A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088664B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x088664B8u) goto L_088664B8;
    return;
L_088664B8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08866494;
      }
      goto L_088664C8;
    }
L_088664C8:
    ctx.gpr[31] = (0x088664D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x088664D0u) goto L_088664D0;
    return;
L_088664D0:
    ctx.gpr[31] = (0x088664D8u);
    // nop
    goto L_088650DC;
L_088664D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-129));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-107));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x0886657Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 226u, 0x088413E0u>(ctx, &aot_mem) && ctx.pc == 0x0886657Cu) goto L_0886657C;
    return;
L_0886657C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08866590;
      }
      goto L_08866590;
    }
L_08866590:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088665B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088665E4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088665E4u) goto L_088665E4;
    return;
L_088665E4:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08866600u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08866600u) goto L_08866600;
    return;
L_08866600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[31] = (0x0886660Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 56u, 0x088387C8u>(ctx, &aot_mem) && ctx.pc == 0x0886660Cu) goto L_0886660C;
    return;
L_0886660C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16544u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17197u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16800u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (17332u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17152u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[6] = (16768u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[10] = (ctx.gpr[6] << 24u);
    ctx.gpr[11] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[10] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 24u));
    ctx.gpr[11] = (ctx.gpr[9] << 24u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 24u));
    goto L_088666D4;
L_088666D4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088666D4;
      }
      goto L_08866700;
    }
L_08866700:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08866714u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08866714u) goto L_08866714;
    return;
L_08866714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886672Cu);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0886672Cu) goto L_0886672C;
    return;
L_0886672C:
    ctx.gpr[5] = (17352u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (17259u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17020u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16784u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 184u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088667C8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088667C8u) goto L_088667C8;
    return;
L_088667C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088667E0u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088667E0u) goto L_088667E0;
    return;
L_088667E0:
    ctx.gpr[5] = (17358u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16808u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17354u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17260u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886683Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886683Cu) goto L_0886683C;
    return;
L_0886683C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22700)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886685C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-129));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-107));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (16736u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (16948u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[30] = (ctx.gpr[7] << 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (16940u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    goto L_08866984;
L_08866984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088669BC;
      }
      goto L_088669B4;
    }
L_088669B4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    goto L_088669BC;
L_088669BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08866A98;
      }
      goto L_08866A7C;
    }
L_08866A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(704));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08866B80;
      }
      goto L_08866A98;
    }
L_08866A98:
    ctx.gpr[31] = (0x08866AA0u);
    // nop
    goto L_08864F14;
L_08866AA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866AD0;
      }
      goto L_08866AA8;
    }
L_08866AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08866AD0;
L_08866AD0:
    ctx.gpr[31] = (0x08866AD8u);
    // nop
    goto L_08864F14;
L_08866AD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
      if (branch_taken) {
          goto L_08866B80;
      }
      goto L_08866AE0;
    }
L_08866AE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08866AECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 167u, 0x08834ABCu>(ctx, &aot_mem) && ctx.pc == 0x08866AECu) goto L_08866AEC;
    return;
L_08866AEC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08866B24;
      }
      goto L_08866AF4;
    }
L_08866AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08866B04u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08866B04u) goto L_08866B04;
    return;
L_08866B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08866B80;
      }
      goto L_08866B24;
    }
L_08866B24:
    ctx.gpr[31] = (0x08866B2Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08866B2Cu) goto L_08866B2C;
    return;
L_08866B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08866B64;
      }
      goto L_08866B3C;
    }
L_08866B3C:
    ctx.gpr[31] = (0x08866B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08866B44u) goto L_08866B44;
    return;
L_08866B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08866B80;
      }
      goto L_08866B64;
    }
L_08866B64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08866B80;
L_08866B80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08866BB4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08866BB4u) goto L_08866BB4;
    return;
L_08866BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08866BD8;
      }
      goto L_08866BC8;
    }
L_08866BC8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08866BE4;
      }
      goto L_08866BD8;
    }
L_08866BD8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08866BE4;
L_08866BE4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08866C6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 58u, 0x0884052Cu>(ctx, &aot_mem) && ctx.pc == 0x08866C6Cu) goto L_08866C6C;
    return;
L_08866C6C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08866984;
      }
      goto L_08866C84;
    }
L_08866C84:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_08866CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-129));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-107));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0886707C;
      }
      goto L_08866D88;
    }
L_08866D88:
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (16656u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    goto L_08866DA8;
L_08866DA8:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08866E68;
      }
      goto L_08866E4C;
    }
L_08866E4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(704));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08866F50;
      }
      goto L_08866E68;
    }
L_08866E68:
    ctx.gpr[31] = (0x08866E70u);
    // nop
    goto L_08864F14;
L_08866E70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866EA0;
      }
      goto L_08866E78;
    }
L_08866E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08866EA0;
L_08866EA0:
    ctx.gpr[31] = (0x08866EA8u);
    // nop
    goto L_08864F14;
L_08866EA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
      if (branch_taken) {
          goto L_08866F50;
      }
      goto L_08866EB0;
    }
L_08866EB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08866EBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 167u, 0x08834ABCu>(ctx, &aot_mem) && ctx.pc == 0x08866EBCu) goto L_08866EBC;
    return;
L_08866EBC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08866EF4;
      }
      goto L_08866EC4;
    }
L_08866EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08866ED4u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08866ED4u) goto L_08866ED4;
    return;
L_08866ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08866F50;
      }
      goto L_08866EF4;
    }
L_08866EF4:
    ctx.gpr[31] = (0x08866EFCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08866EFCu) goto L_08866EFC;
    return;
L_08866EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08866F34;
      }
      goto L_08866F0C;
    }
L_08866F0C:
    ctx.gpr[31] = (0x08866F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08866F14u) goto L_08866F14;
    return;
L_08866F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08866F50;
      }
      goto L_08866F34;
    }
L_08866F34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08866F50;
L_08866F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08866F5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08866F5Cu) goto L_08866F5C;
    return;
L_08866F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08866F80;
      }
      goto L_08866F70;
    }
L_08866F70:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08866F8C;
      }
      goto L_08866F80;
    }
L_08866F80:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    goto L_08866F8C;
L_08866F8C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x0886702Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 95u, 0x08840888u>(ctx, &aot_mem) && ctx.pc == 0x0886702Cu) goto L_0886702C;
    return;
L_0886702C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22700)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08866DA8;
      }
      goto L_0886707C;
    }
L_0886707C:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x088670ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 243u, 0x08841568u>(ctx, &aot_mem) && ctx.pc == 0x088670ACu) goto L_088670AC;
    return;
L_088670AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088670E8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9292)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(9296), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088670FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 364u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08867124u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867124u) goto L_08867124;
    return;
L_08867124:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(9416), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0886713Cu);
    ctx.gpr[6] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0886713Cu) goto L_0886713C;
    return;
L_0886713C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08867150u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867150u) goto L_08867150;
    return;
L_08867150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x08867168u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26660));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x08867168u) goto L_08867168;
    return;
L_08867168:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886717Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886717Cu) goto L_0886717C;
    return;
L_0886717C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (0u | 240u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[31] = (0x088671A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x088671A0u) goto L_088671A0;
    return;
L_088671A0:
    ctx.gpr[31] = (0x088671A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 376u, 0x0886B630u>(ctx, &aot_mem) && ctx.pc == 0x088671A8u) goto L_088671A8;
    return;
L_088671A8:
    ctx.gpr[31] = (0x088671B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 179u, 0x088691E0u>(ctx, &aot_mem) && ctx.pc == 0x088671B0u) goto L_088671B0;
    return;
L_088671B0:
    ctx.gpr[31] = (0x088671B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 287u, 0x0886A5C4u>(ctx, &aot_mem) && ctx.pc == 0x088671B8u) goto L_088671B8;
    return;
L_088671B8:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x088671C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31372));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x088671C8u) goto L_088671C8;
    return;
L_088671C8:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088671D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29360));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x088671D8u) goto L_088671D8;
    return;
L_088671D8:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088671E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29368));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x088671E8u) goto L_088671E8;
    return;
L_088671E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088671FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08867214u);
    // nop
    goto L_08867668;
L_08867214:
    ctx.gpr[31] = (0x0886721Cu);
    // nop
    goto L_08867A64;
L_0886721C:
    ctx.gpr[31] = (0x08867224u);
    // nop
    goto L_08867E28;
L_08867224:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867240u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867240u) goto L_08867240;
    return;
L_08867240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(360), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867258u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867258u) goto L_08867258;
    return;
L_08867258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0886726Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x0886726Cu) goto L_0886726C;
    return;
L_0886726C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867280u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867280u) goto L_08867280;
    return;
L_08867280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867298u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867298u) goto L_08867298;
    return;
L_08867298:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9416), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088672B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088672B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
        goto L_08867304;
    }
    goto L_088672E0;
L_088672E0:
    ctx.gpr[31] = (0x088672E8u);
    // nop
    goto L_08867780;
L_088672E8:
    ctx.gpr[31] = (0x088672F0u);
    // nop
    goto L_08867C70;
L_088672F0:
    ctx.gpr[31] = (0x088672F8u);
    // nop
    goto L_088677EC;
L_088672F8:
    ctx.gpr[31] = (0x08867300u);
    // nop
    goto L_08867FA8;
L_08867300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
    goto L_08867304;
L_08867304:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08867318;
      }
      goto L_08867310;
    }
L_08867310:
    ctx.gpr[31] = (0x08867318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 522u, 0x08929A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08867318u) goto L_08867318;
    return;
L_08867318:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886732C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08867340u);
    // nop
    goto L_0886751C;
L_08867340:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867450;
      }
      goto L_08867348;
    }
L_08867348:
    ctx.gpr[31] = (0x08867350u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 509u, 0x088427C0u>(ctx, &aot_mem) && ctx.pc == 0x08867350u) goto L_08867350;
    return;
L_08867350:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08867370u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 710u, 0x08806DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867370u) goto L_08867370;
    return;
L_08867370:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[31] = (0x0886737Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x0886737Cu) goto L_0886737C;
    return;
L_0886737C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 39u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088673A4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x088673A4u) goto L_088673A4;
    return;
L_088673A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (0u | 40u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088673C4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x088673C4u) goto L_088673C4;
    return;
L_088673C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (0u | 41u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088673E0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x088673E0u) goto L_088673E0;
    return;
L_088673E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (0u | 42u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088673FCu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x088673FCu) goto L_088673FC;
    return;
L_088673FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (0u | 43u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08867418u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x08867418u) goto L_08867418;
    return;
L_08867418:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (0u | 44u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08867434u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x08867434u) goto L_08867434;
    return;
L_08867434:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08867450u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x08867450u) goto L_08867450;
    return;
L_08867450:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08867470u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 509u, 0x088427C0u>(ctx, &aot_mem) && ctx.pc == 0x08867470u) goto L_08867470;
    return;
L_08867470:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088674B0;
      }
      goto L_088674A8;
    }
L_088674A8:
    ctx.gpr[31] = (0x088674B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 710u, 0x08806DBCu>(ctx, &aot_mem) && ctx.pc == 0x088674B0u) goto L_088674B0;
    return;
L_088674B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088674BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088674CCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 509u, 0x088427C0u>(ctx, &aot_mem) && ctx.pc == 0x088674CCu) goto L_088674CC;
    return;
L_088674CC:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088674DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088674ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 509u, 0x088427C0u>(ctx, &aot_mem) && ctx.pc == 0x088674ECu) goto L_088674EC;
    return;
L_088674EC:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886751C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (0u | 1u);
        goto L_08867530;
    }
    goto L_08867530;
L_08867530:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088675CC;
      }
      goto L_08867564;
    }
L_08867564:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_0886756C;
    }
L_0886756C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0886757Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0886757Cu) goto L_0886757C;
    return;
L_0886757C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9308)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9312));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9420)));
    ctx.gpr[31] = (0x088675A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x088675A0u) goto L_088675A0;
    return;
L_088675A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x088675B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088675B8u) goto L_088675B8;
    return;
L_088675B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_088675CC;
    }
L_088675CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088675E8;
      }
      goto L_088675D8;
    }
L_088675D8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0886764C;
    }
    goto L_088675E0;
L_088675E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_088675E8;
    }
L_088675E8:
    ctx.gpr[31] = (0x088675F0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088675F0u) goto L_088675F0;
    return;
L_088675F0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_088675FC;
    }
L_088675FC:
    ctx.gpr[31] = (0x08867604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 140u, 0x0886884Cu>(ctx, &aot_mem) && ctx.pc == 0x08867604u) goto L_08867604;
    return;
L_08867604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (0x08867624u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08867624u) goto L_08867624;
    return;
L_08867624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[31] = (0x08867630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08867630u) goto L_08867630;
    return;
L_08867630:
    ctx.gpr[31] = (0x08867638u);
    // nop
    goto L_08867884;
L_08867638:
    ctx.gpr[31] = (0x08867640u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08867640u) goto L_08867640;
    return;
L_08867640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_0886764C;
    }
L_0886764C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08867768;
      }
      goto L_08867694;
    }
L_08867694:
    ctx.gpr[31] = (0x0886769Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 873u, 0x08837B58u>(ctx, &aot_mem) && ctx.pc == 0x0886769Cu) goto L_0886769C;
    return;
L_0886769C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088676ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 881u, 0x08837C40u>(ctx, &aot_mem) && ctx.pc == 0x088676ACu) goto L_088676AC;
    return;
L_088676AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088676BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 60u, 0x08838878u>(ctx, &aot_mem) && ctx.pc == 0x088676BCu) goto L_088676BC;
    return;
L_088676BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088676CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088676CCu) goto L_088676CC;
    return;
L_088676CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088676DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088676DCu) goto L_088676DC;
    return;
L_088676DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088676EC;
L_088676EC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088676F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 18u, 0x0883C378u>(ctx, &aot_mem) && ctx.pc == 0x088676F8u) goto L_088676F8;
    return;
L_088676F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0886770Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 18u, 0x0883C378u>(ctx, &aot_mem) && ctx.pc == 0x0886770Cu) goto L_0886770C;
    return;
L_0886770C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08867720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 9u, 0x0883C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08867720u) goto L_08867720;
    return;
L_08867720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08867734u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 3u, 0x0883C0F4u>(ctx, &aot_mem) && ctx.pc == 0x08867734u) goto L_08867734;
    return;
L_08867734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
      if (branch_taken) {
          goto L_088676EC;
      }
      goto L_0886774C;
    }
L_0886774C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867760u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867760u) goto L_08867760;
    return;
L_08867760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), 0u);
    goto L_08867768;
L_08867768:
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
L_08867780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886779Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 875u, 0x08837B74u>(ctx, &aot_mem) && ctx.pc == 0x0886779Cu) goto L_0886779C;
    return;
L_0886779C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088677ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 883u, 0x08837C5Cu>(ctx, &aot_mem) && ctx.pc == 0x088677ACu) goto L_088677AC;
    return;
L_088677AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088677BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 62u, 0x08838894u>(ctx, &aot_mem) && ctx.pc == 0x088677BCu) goto L_088677BC;
    return;
L_088677BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088677CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088677CCu) goto L_088677CC;
    return;
L_088677CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088677DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088677DCu) goto L_088677DC;
    return;
L_088677DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088677EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0886780C;
L_0886780C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08867820u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 22u, 0x0883C3B0u>(ctx, &aot_mem) && ctx.pc == 0x08867820u) goto L_08867820;
    return;
L_08867820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08867834u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 22u, 0x0883C3B0u>(ctx, &aot_mem) && ctx.pc == 0x08867834u) goto L_08867834;
    return;
L_08867834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08867848u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C110u>(ctx, &aot_mem) && ctx.pc == 0x08867848u) goto L_08867848;
    return;
L_08867848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0886785Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 11u, 0x0883C1F4u>(ctx, &aot_mem) && ctx.pc == 0x0886785Cu) goto L_0886785C;
    return;
L_0886785C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0886780C;
      }
      goto L_0886786C;
    }
L_0886786C:
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
L_08867884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088678C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088678C0u) goto L_088678C0;
    return;
L_088678C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x088678E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088678E0u) goto L_088678E0;
    return;
L_088678E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867900u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08867900u) goto L_08867900;
    return;
L_08867900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867910u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08867910u) goto L_08867910;
    return;
L_08867910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867920u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08867920u) goto L_08867920;
    return;
L_08867920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[18] = (0u | 0u);
    goto L_08867930;
L_08867930:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0886793Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0886793Cu) goto L_0886793C;
    return;
L_0886793C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08867950u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08867950u) goto L_08867950;
    return;
L_08867950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08867964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08867964u) goto L_08867964;
    return;
L_08867964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          goto L_08867930;
      }
      goto L_0886797C;
    }
L_0886797C:
    ctx.gpr[31] = (0x08867984u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08867984u) goto L_08867984;
    return;
L_08867984:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_0886798C;
L_0886798C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088679EC;
      }
      goto L_08867994;
    }
L_08867994:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    goto L_0886799C;
L_0886799C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088679D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088679D0u) goto L_088679D0;
    return;
L_088679D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0886799C;
      }
      goto L_088679E0;
    }
L_088679E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08867A38;
      }
      goto L_088679E8;
    }
L_088679E8:
    ctx.gpr[18] = (0u | 0u);
    goto L_088679EC;
L_088679EC:
    ctx.gpr[20] = (0u | 0u);
    goto L_088679F0;
L_088679F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08867A24u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08867A24u) goto L_08867A24;
    return;
L_08867A24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088679F0;
      }
      goto L_08867A34;
    }
L_08867A34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08867A38;
L_08867A38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886798C;
      }
      goto L_08867A44;
    }
L_08867A44:
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
L_08867A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_08867AE0;
      }
      goto L_08867AA0;
    }
L_08867AA0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    goto L_08867AA8;
L_08867AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867AB8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08867AB8u) goto L_08867AB8;
    return;
L_08867AB8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08867AA8;
      }
      goto L_08867AC8;
    }
L_08867AC8:
    ctx.gpr[31] = (0x08867AD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08867AD0u) goto L_08867AD0;
    return;
L_08867AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[31] = (0x08867ADCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08867ADCu) goto L_08867ADC;
    return;
L_08867ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    goto L_08867AE0;
L_08867AE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
        goto L_08867B04;
    }
    goto L_08867AF4;
L_08867AF4:
    ctx.gpr[31] = (0x08867AFCu);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08867AFCu) goto L_08867AFC;
    return;
L_08867AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    goto L_08867B04;
L_08867B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867B10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867B10u) goto L_08867B10;
    return;
L_08867B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[21] = (0u | 0u);
    goto L_08867B24;
L_08867B24:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08867B94;
      }
      goto L_08867B38;
    }
L_08867B38:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08867B6C;
      }
      goto L_08867B40;
    }
L_08867B40:
    ctx.gpr[22] = (0u | 0u);
    goto L_08867B44;
L_08867B44:
    ctx.gpr[31] = (0x08867B4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08867B4Cu) goto L_08867B4C;
    return;
L_08867B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08867B44;
      }
      goto L_08867B6C;
    }
L_08867B6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867B7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867B7Cu) goto L_08867B7C;
    return;
L_08867B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_08867BEC;
      }
      goto L_08867B94;
    }
L_08867B94:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08867BC8;
      }
      goto L_08867B9C;
    }
L_08867B9C:
    ctx.gpr[22] = (0u | 0u);
    goto L_08867BA0;
L_08867BA0:
    ctx.gpr[31] = (0x08867BA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08867BA8u) goto L_08867BA8;
    return;
L_08867BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08867BA0;
      }
      goto L_08867BC8;
    }
L_08867BC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867BD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867BD8u) goto L_08867BD8;
    return;
L_08867BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    goto L_08867BEC;
L_08867BEC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08867B24;
      }
      goto L_08867BFC;
    }
L_08867BFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867C10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867C10u) goto L_08867C10;
    return;
L_08867C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(348), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867C28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867C28u) goto L_08867C28;
    return;
L_08867C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(328), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867C40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867C40u) goto L_08867C40;
    return;
L_08867C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(324), 0u);
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
L_08867C70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08867C9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867C9Cu) goto L_08867C9C;
    return;
L_08867C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867CACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867CACu) goto L_08867CAC;
    return;
L_08867CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867CBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867CBCu) goto L_08867CBC;
    return;
L_08867CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867CCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867CCCu) goto L_08867CCC;
    return;
L_08867CCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[18] = (0u | 0u);
    goto L_08867CD8;
L_08867CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08867CE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867CE8u) goto L_08867CE8;
    return;
L_08867CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08867D3C;
    }
    goto L_08867D00;
L_08867D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08867D10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867D10u) goto L_08867D10;
    return;
L_08867D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08867D3C;
    }
    goto L_08867D24;
L_08867D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08867D34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867D34u) goto L_08867D34;
    return;
L_08867D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08867D3C;
L_08867D3C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08867CD8;
      }
      goto L_08867D48;
    }
L_08867D48:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08867D50;
L_08867D50:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08867D94;
      }
      goto L_08867D58;
    }
L_08867D58:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    goto L_08867D60;
L_08867D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08867D74u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867D74u) goto L_08867D74;
    return;
L_08867D74:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
      if (branch_taken) {
          goto L_08867D60;
      }
      goto L_08867D88;
    }
L_08867D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08867DC4;
      }
      goto L_08867D90;
    }
L_08867D90:
    ctx.gpr[18] = (0u | 0u);
    goto L_08867D94;
L_08867D94:
    ctx.gpr[20] = (0u | 0u);
    goto L_08867D98;
L_08867D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08867DACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867DACu) goto L_08867DAC;
    return;
L_08867DAC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
      if (branch_taken) {
          goto L_08867D98;
      }
      goto L_08867DC0;
    }
L_08867DC0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08867DC4;
L_08867DC4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08867D50;
      }
      goto L_08867DD0;
    }
L_08867DD0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08867DF4;
      }
      goto L_08867DDC;
    }
L_08867DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867DE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867DE8u) goto L_08867DE8;
    return;
L_08867DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u | 1u);
    goto L_08867DF4;
L_08867DF4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08867E08;
      }
      goto L_08867DFC;
    }
L_08867DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08867E08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867E08u) goto L_08867E08;
    return;
L_08867E08:
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
L_08867E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_08867E60;
L_08867E60:
    ctx.gpr[31] = (0x08867E68u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08867E68u) goto L_08867E68;
    return;
L_08867E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_08867E60;
      }
      goto L_08867E80;
    }
L_08867E80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867E90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867E90u) goto L_08867E90;
    return;
L_08867E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.gpr[20] = (0u | 0u);
    goto L_08867EA4;
L_08867EA4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08867F08;
      }
      goto L_08867EB0;
    }
L_08867EB0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    goto L_08867EB8;
L_08867EB8:
    ctx.gpr[31] = (0x08867EC0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08867EC0u) goto L_08867EC0;
    return;
L_08867EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08867EB8;
      }
      goto L_08867EE0;
    }
L_08867EE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867EF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867EF0u) goto L_08867EF0;
    return;
L_08867EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_08867F5C;
      }
      goto L_08867F08;
    }
L_08867F08:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    goto L_08867F10;
L_08867F10:
    ctx.gpr[31] = (0x08867F18u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08867F18u) goto L_08867F18;
    return;
L_08867F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08867F10;
      }
      goto L_08867F38;
    }
L_08867F38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867F48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867F48u) goto L_08867F48;
    return;
L_08867F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    goto L_08867F5C;
L_08867F5C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08867EA4;
      }
      goto L_08867F6C;
    }
L_08867F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08867F7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867F7Cu) goto L_08867F7C;
    return;
L_08867F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(356), 0u);
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
L_08867FA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08867FD0;
L_08867FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08867FE0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08867FE0u) goto L_08867FE0;
    return;
L_08867FE0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08867FD0;
      }
      goto L_08867FF0;
    }
L_08867FF0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08867FF8;
L_08867FF8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 6u, 0x0886803Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 1u, 0x08868000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0024(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0024_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_24(Runtime &runtime) {
    runtime.register_generated_unit(24u, 0x08864000u, 16384u, &recomp_unit_0024, &recomp_unit_0024_entry);
    runtime.register_function(0x08864000u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864008u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864094u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864108u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088641A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088641F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864228u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864260u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864274u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088642A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088642BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088642D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088642E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088642FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864310u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864328u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864330u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864340u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864354u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886436Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864378u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886438Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864404u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864418u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864430u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864440u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864448u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864450u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864460u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864470u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864480u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886449Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088644BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088644CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088644E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088644FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864514u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886452Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886453Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886454Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864554u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886456Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886457Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864594u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088645ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088645C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088645FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864604u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886460Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864614u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864704u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864710u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864718u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864724u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864740u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864754u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864760u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864770u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864780u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864788u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864790u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864798u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864804u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886480Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886481Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864824u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864840u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864848u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864864u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886486Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886487Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864888u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088648A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864938u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886494Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864954u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864984u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886498Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886499Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864AA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864AB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864AC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864ACCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864AD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864ADCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B2Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B5Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B74u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BCCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C14u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864DA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864DE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864DF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EDCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F14u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F24u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865008u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865010u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865054u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886505Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865094u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886509Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865104u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886510Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865114u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865120u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865130u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865138u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865140u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865148u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865150u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865158u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865164u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865180u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865188u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865190u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865198u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865200u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886520Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865230u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886524Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865314u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865340u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865350u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865380u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865404u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865434u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886543Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865444u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886545Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865470u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865490u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865548u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865568u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886557Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865584u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865594u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886561Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865624u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865630u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886563Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865650u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865658u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865664u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865670u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865684u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865688u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886569Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865704u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865720u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865778u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865804u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865810u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886581Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865830u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865838u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865840u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865850u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865860u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865878u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088658ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088658C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865944u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865958u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865968u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886597Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865994u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088659A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088659CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088659E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865AA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865AD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865ADCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865AF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C34u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E14u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865ED0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865ED4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865ED8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865F1Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865F40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865F64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865F80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866018u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866020u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866038u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866040u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866050u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866100u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866124u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866144u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866234u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866244u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886626Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866274u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886628Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866294u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088662A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088662CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088662F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886632Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866340u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866350u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866358u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866368u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866380u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886638Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088663C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088663CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088663F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886640Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866420u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886642Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866434u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886643Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866444u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866450u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866460u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866494u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886657Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866590u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088665B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088665E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866600u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886660Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088666D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866700u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866714u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886672Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088667C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088667E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886683Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886685Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866984u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088669B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088669BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A98u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AD0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B24u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B2Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866BB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866BC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866BD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866BE4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866CCCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866DA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E78u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866ED4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F14u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F34u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F5Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886702Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886707Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088670ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088670E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088670FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867124u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886713Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867150u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867168u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886717Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867214u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886721Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867224u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867240u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867258u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886726Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867280u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867298u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867300u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867304u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867310u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867318u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886732Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867340u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867348u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867350u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867370u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886737Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867418u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867434u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867450u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867460u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867470u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886751Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867530u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867538u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867564u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886756Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886757Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867604u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867624u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867630u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867638u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867640u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886764Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867668u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867694u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886769Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886770Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867720u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867734u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886774Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867760u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867768u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867780u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886779Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886780Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867820u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867834u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867848u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886785Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886786Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867884u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088678C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088678E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867900u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867910u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867920u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867930u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886793Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867950u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867964u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886797Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867984u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886798Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867994u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886799Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A24u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A34u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AD0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867ADCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B24u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CCCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D24u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D34u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D74u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D98u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DD0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DDCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F5Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FD0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FF8u, &recomp_unit_0024, "recomp_unit_0024");
}
} // namespace psprecomp

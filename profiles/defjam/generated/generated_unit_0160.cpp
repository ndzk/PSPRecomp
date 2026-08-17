#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0160[4059] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0, 0,
    8, 9, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    83, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0,
    91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    101, 0, 0, 0, 102, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0,
    0, 0, 112, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 139, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167,
    0, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0,
    188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200,
    0, 201, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0,
    212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0,
    0, 0, 0, 0, 219, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 229, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    232, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 243, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265,
    0, 266, 0, 267, 0, 268, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0,
    280, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290,
    0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 309, 0, 0,
    310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 319, 0,
    0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0,
    0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 339, 0, 340, 0, 0, 0,
    0, 341, 342, 0, 343, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 349, 0,
    0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 359,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365,
    0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0,
    0, 377, 0, 0, 378, 0, 0, 379, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 400, 401, 0, 0, 0, 402, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407,
    0, 408, 409, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0,
    453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462,
    0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 476, 0,
    0, 477, 0, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 0, 483, 0, 484, 0, 0, 485, 486, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 505, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0,
    518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 524, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0,
    0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 531, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0,
    0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545,
    546, 0, 547, 0, 0, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0,
    0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 570,
    571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0,
    0, 0, 576, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0,
    0, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0,
    0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 597, 598, 0, 0, 0, 599, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    608, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0,
    0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616,
    0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 620, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 624, 0, 625, 626, 0, 627, 0, 0, 628,
    0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638,
};
void recomp_unit_0160_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A84000u;
        entry_id = (entry_delta < 16236u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0160[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A84000;
    case 2u: goto L_08A84034;
    case 3u: goto L_08A8403C;
    case 4u: goto L_08A84040;
    case 5u: goto L_08A84068;
    case 6u: goto L_08A84070;
    case 7u: goto L_08A84074;
    case 8u: goto L_08A84080;
    case 9u: goto L_08A84084;
    case 10u: goto L_08A84094;
    case 11u: goto L_08A840A0;
    case 12u: goto L_08A840A8;
    case 13u: goto L_08A840C4;
    case 14u: goto L_08A840D4;
    case 15u: goto L_08A840D8;
    case 16u: goto L_08A840E0;
    case 17u: goto L_08A840E8;
    case 18u: goto L_08A840F8;
    case 19u: goto L_08A84128;
    case 20u: goto L_08A84138;
    case 21u: goto L_08A84140;
    case 22u: goto L_08A84148;
    case 23u: goto L_08A84150;
    case 24u: goto L_08A84158;
    case 25u: goto L_08A84168;
    case 26u: goto L_08A84208;
    case 27u: goto L_08A84218;
    case 28u: goto L_08A84224;
    case 29u: goto L_08A84240;
    case 30u: goto L_08A84250;
    case 31u: goto L_08A84278;
    case 32u: goto L_08A842B0;
    case 33u: goto L_08A842BC;
    case 34u: goto L_08A842CC;
    case 35u: goto L_08A842DC;
    case 36u: goto L_08A842E8;
    case 37u: goto L_08A84314;
    case 38u: goto L_08A84320;
    case 39u: goto L_08A84330;
    case 40u: goto L_08A8433C;
    case 41u: goto L_08A84340;
    case 42u: goto L_08A8436C;
    case 43u: goto L_08A843A0;
    case 44u: goto L_08A843C0;
    case 45u: goto L_08A843D0;
    case 46u: goto L_08A843F0;
    case 47u: goto L_08A843F8;
    case 48u: goto L_08A84404;
    case 49u: goto L_08A84428;
    case 50u: goto L_08A84450;
    case 51u: goto L_08A8445C;
    case 52u: goto L_08A84484;
    case 53u: goto L_08A844A0;
    case 54u: goto L_08A844B4;
    case 55u: goto L_08A844DC;
    case 56u: goto L_08A844F0;
    case 57u: goto L_08A8451C;
    case 58u: goto L_08A8452C;
    case 59u: goto L_08A8453C;
    case 60u: goto L_08A84554;
    case 61u: goto L_08A84558;
    case 62u: goto L_08A84564;
    case 63u: goto L_08A84570;
    case 64u: goto L_08A84588;
    case 65u: goto L_08A845D8;
    case 66u: goto L_08A845E4;
    case 67u: goto L_08A84610;
    case 68u: goto L_08A84634;
    case 69u: goto L_08A84638;
    case 70u: goto L_08A84648;
    case 71u: goto L_08A84650;
    case 72u: goto L_08A8467C;
    case 73u: goto L_08A846A0;
    case 74u: goto L_08A846B4;
    case 75u: goto L_08A846BC;
    case 76u: goto L_08A846E8;
    case 77u: goto L_08A8470C;
    case 78u: goto L_08A84724;
    case 79u: goto L_08A84730;
    case 80u: goto L_08A84744;
    case 81u: goto L_08A8474C;
    case 82u: goto L_08A8476C;
    case 83u: goto L_08A84780;
    case 84u: goto L_08A84784;
    case 85u: goto L_08A847A4;
    case 86u: goto L_08A847B8;
    case 87u: goto L_08A847BC;
    case 88u: goto L_08A847DC;
    case 89u: goto L_08A847EC;
    case 90u: goto L_08A847F8;
    case 91u: goto L_08A84800;
    case 92u: goto L_08A84808;
    case 93u: goto L_08A84810;
    case 94u: goto L_08A84818;
    case 95u: goto L_08A8488C;
    case 96u: goto L_08A848C4;
    case 97u: goto L_08A848D0;
    case 98u: goto L_08A84900;
    case 99u: goto L_08A84954;
    case 100u: goto L_08A84974;
    case 101u: goto L_08A84980;
    case 102u: goto L_08A84990;
    case 103u: goto L_08A84994;
    case 104u: goto L_08A849A0;
    case 105u: goto L_08A849AC;
    case 106u: goto L_08A849C8;
    case 107u: goto L_08A84A2C;
    case 108u: goto L_08A84A48;
    case 109u: goto L_08A84A50;
    case 110u: goto L_08A84A6C;
    case 111u: goto L_08A84A74;
    case 112u: goto L_08A84A88;
    case 113u: goto L_08A84A8C;
    case 114u: goto L_08A84AEC;
    case 115u: goto L_08A84B08;
    case 116u: goto L_08A84B10;
    case 117u: goto L_08A84B20;
    case 118u: goto L_08A84B28;
    case 119u: goto L_08A84B3C;
    case 120u: goto L_08A84B44;
    case 121u: goto L_08A84B4C;
    case 122u: goto L_08A84B54;
    case 123u: goto L_08A84B5C;
    case 124u: goto L_08A84B64;
    case 125u: goto L_08A84B7C;
    case 126u: goto L_08A84BA0;
    case 127u: goto L_08A84BB0;
    case 128u: goto L_08A84BB8;
    case 129u: goto L_08A84BD4;
    case 130u: goto L_08A84C00;
    case 131u: goto L_08A84C08;
    case 132u: goto L_08A84C10;
    case 133u: goto L_08A84C1C;
    case 134u: goto L_08A84C3C;
    case 135u: goto L_08A84C44;
    case 136u: goto L_08A84C64;
    case 137u: goto L_08A84C80;
    case 138u: goto L_08A84C90;
    case 139u: goto L_08A84C9C;
    case 140u: goto L_08A84CA0;
    case 141u: goto L_08A84CA8;
    case 142u: goto L_08A84CCC;
    case 143u: goto L_08A84CE0;
    case 144u: goto L_08A84CE8;
    case 145u: goto L_08A84CF0;
    case 146u: goto L_08A84D04;
    case 147u: goto L_08A84D28;
    case 148u: goto L_08A84D2C;
    case 149u: goto L_08A84D3C;
    case 150u: goto L_08A84D48;
    case 151u: goto L_08A84D58;
    case 152u: goto L_08A84D68;
    case 153u: goto L_08A84D88;
    case 154u: goto L_08A84D90;
    case 155u: goto L_08A84DB4;
    case 156u: goto L_08A84DD0;
    case 157u: goto L_08A84DEC;
    case 158u: goto L_08A84DF8;
    case 159u: goto L_08A84E00;
    case 160u: goto L_08A84E18;
    case 161u: goto L_08A84E28;
    case 162u: goto L_08A84E38;
    case 163u: goto L_08A84F34;
    case 164u: goto L_08A84F50;
    case 165u: goto L_08A84F58;
    case 166u: goto L_08A84F74;
    case 167u: goto L_08A84F7C;
    case 168u: goto L_08A84F90;
    case 169u: goto L_08A84F94;
    case 170u: goto L_08A84FF4;
    case 171u: goto L_08A85010;
    case 172u: goto L_08A85018;
    case 173u: goto L_08A85028;
    case 174u: goto L_08A85030;
    case 175u: goto L_08A85044;
    case 176u: goto L_08A8504C;
    case 177u: goto L_08A85054;
    case 178u: goto L_08A8505C;
    case 179u: goto L_08A85064;
    case 180u: goto L_08A8506C;
    case 181u: goto L_08A850CC;
    case 182u: goto L_08A850E8;
    case 183u: goto L_08A85148;
    case 184u: goto L_08A8515C;
    case 185u: goto L_08A85168;
    case 186u: goto L_08A85170;
    case 187u: goto L_08A85178;
    case 188u: goto L_08A85180;
    case 189u: goto L_08A8518C;
    case 190u: goto L_08A85198;
    case 191u: goto L_08A851A8;
    case 192u: goto L_08A851C8;
    case 193u: goto L_08A851D8;
    case 194u: goto L_08A85200;
    case 195u: goto L_08A85258;
    case 196u: goto L_08A85274;
    case 197u: goto L_08A852D4;
    case 198u: goto L_08A852E8;
    case 199u: goto L_08A852F4;
    case 200u: goto L_08A852FC;
    case 201u: goto L_08A85304;
    case 202u: goto L_08A8530C;
    case 203u: goto L_08A85318;
    case 204u: goto L_08A85324;
    case 205u: goto L_08A85334;
    case 206u: goto L_08A85354;
    case 207u: goto L_08A85364;
    case 208u: goto L_08A8538C;
    case 209u: goto L_08A853D0;
    case 210u: goto L_08A853EC;
    case 211u: goto L_08A853F8;
    case 212u: goto L_08A85400;
    case 213u: goto L_08A85418;
    case 214u: goto L_08A85438;
    case 215u: goto L_08A85444;
    case 216u: goto L_08A8545C;
    case 217u: goto L_08A8546C;
    case 218u: goto L_08A85474;
    case 219u: goto L_08A85490;
    case 220u: goto L_08A85494;
    case 221u: goto L_08A854A4;
    case 222u: goto L_08A854B0;
    case 223u: goto L_08A85514;
    case 224u: goto L_08A85530;
    case 225u: goto L_08A85538;
    case 226u: goto L_08A85554;
    case 227u: goto L_08A8555C;
    case 228u: goto L_08A85570;
    case 229u: goto L_08A85574;
    case 230u: goto L_08A85584;
    case 231u: goto L_08A855E4;
    case 232u: goto L_08A85600;
    case 233u: goto L_08A85608;
    case 234u: goto L_08A85618;
    case 235u: goto L_08A85620;
    case 236u: goto L_08A85634;
    case 237u: goto L_08A8563C;
    case 238u: goto L_08A85644;
    case 239u: goto L_08A8564C;
    case 240u: goto L_08A85654;
    case 241u: goto L_08A8565C;
    case 242u: goto L_08A85674;
    case 243u: goto L_08A85690;
    case 244u: goto L_08A85694;
    case 245u: goto L_08A856A4;
    case 246u: goto L_08A856B0;
    case 247u: goto L_08A856C4;
    case 248u: goto L_08A856D0;
    case 249u: goto L_08A856E8;
    case 250u: goto L_08A85734;
    case 251u: goto L_08A85748;
    case 252u: goto L_08A85794;
    case 253u: goto L_08A857A0;
    case 254u: goto L_08A857A8;
    case 255u: goto L_08A857B4;
    case 256u: goto L_08A857C0;
    case 257u: goto L_08A8581C;
    case 258u: goto L_08A8582C;
    case 259u: goto L_08A8589C;
    case 260u: goto L_08A858C4;
    case 261u: goto L_08A858DC;
    case 262u: goto L_08A858E4;
    case 263u: goto L_08A858EC;
    case 264u: goto L_08A858F4;
    case 265u: goto L_08A858FC;
    case 266u: goto L_08A85904;
    case 267u: goto L_08A8590C;
    case 268u: goto L_08A85914;
    case 269u: goto L_08A85918;
    case 270u: goto L_08A85930;
    case 271u: goto L_08A8593C;
    case 272u: goto L_08A8595C;
    case 273u: goto L_08A85974;
    case 274u: goto L_08A8598C;
    case 275u: goto L_08A8599C;
    case 276u: goto L_08A85A40;
    case 277u: goto L_08A85A54;
    case 278u: goto L_08A85A5C;
    case 279u: goto L_08A85A78;
    case 280u: goto L_08A85A80;
    case 281u: goto L_08A85A88;
    case 282u: goto L_08A85A90;
    case 283u: goto L_08A85AA0;
    case 284u: goto L_08A85AB4;
    case 285u: goto L_08A85ABC;
    case 286u: goto L_08A85AD4;
    case 287u: goto L_08A85AE0;
    case 288u: goto L_08A85AEC;
    case 289u: goto L_08A85AF0;
    case 290u: goto L_08A85BFC;
    case 291u: goto L_08A85C0C;
    case 292u: goto L_08A85C1C;
    case 293u: goto L_08A85C2C;
    case 294u: goto L_08A85CA0;
    case 295u: goto L_08A85CA8;
    case 296u: goto L_08A85CB0;
    case 297u: goto L_08A85CB8;
    case 298u: goto L_08A85CC0;
    case 299u: goto L_08A85CC8;
    case 300u: goto L_08A85CD0;
    case 301u: goto L_08A85CD8;
    case 302u: goto L_08A85CE0;
    case 303u: goto L_08A85DE4;
    case 304u: goto L_08A85E1C;
    case 305u: goto L_08A85E3C;
    case 306u: goto L_08A85E5C;
    case 307u: goto L_08A85E68;
    case 308u: goto L_08A85E70;
    case 309u: goto L_08A85E74;
    case 310u: goto L_08A85E80;
    case 311u: goto L_08A85E94;
    case 312u: goto L_08A85EA4;
    case 313u: goto L_08A85EB4;
    case 314u: goto L_08A85EC4;
    case 315u: goto L_08A85ED0;
    case 316u: goto L_08A85EDC;
    case 317u: goto L_08A85EE4;
    case 318u: goto L_08A85EF0;
    case 319u: goto L_08A85EF8;
    case 320u: goto L_08A85F04;
    case 321u: goto L_08A85F40;
    case 322u: goto L_08A85F54;
    case 323u: goto L_08A85F60;
    case 324u: goto L_08A85F6C;
    case 325u: goto L_08A85F78;
    case 326u: goto L_08A85F88;
    case 327u: goto L_08A85F90;
    case 328u: goto L_08A85F9C;
    case 329u: goto L_08A85FAC;
    case 330u: goto L_08A85FB4;
    case 331u: goto L_08A85FC0;
    case 332u: goto L_08A85FD0;
    case 333u: goto L_08A85FD8;
    case 334u: goto L_08A85FE8;
    case 335u: goto L_08A86038;
    case 336u: goto L_08A8603C;
    case 337u: goto L_08A86044;
    case 338u: goto L_08A86064;
    case 339u: goto L_08A86068;
    case 340u: goto L_08A86070;
    case 341u: goto L_08A86084;
    case 342u: goto L_08A86088;
    case 343u: goto L_08A86090;
    case 344u: goto L_08A8609C;
    case 345u: goto L_08A860A4;
    case 346u: goto L_08A860AC;
    case 347u: goto L_08A860E0;
    case 348u: goto L_08A860F4;
    case 349u: goto L_08A860F8;
    case 350u: goto L_08A86118;
    case 351u: goto L_08A86120;
    case 352u: goto L_08A8612C;
    case 353u: goto L_08A86130;
    case 354u: goto L_08A86140;
    case 355u: goto L_08A86148;
    case 356u: goto L_08A86158;
    case 357u: goto L_08A86160;
    case 358u: goto L_08A86174;
    case 359u: goto L_08A8617C;
    case 360u: goto L_08A86194;
    case 361u: goto L_08A861B4;
    case 362u: goto L_08A861D0;
    case 363u: goto L_08A861D8;
    case 364u: goto L_08A861F4;
    case 365u: goto L_08A861FC;
    case 366u: goto L_08A86214;
    case 367u: goto L_08A86224;
    case 368u: goto L_08A86244;
    case 369u: goto L_08A86250;
    case 370u: goto L_08A8625C;
    case 371u: goto L_08A86280;
    case 372u: goto L_08A862B0;
    case 373u: goto L_08A862B8;
    case 374u: goto L_08A862D8;
    case 375u: goto L_08A862E8;
    case 376u: goto L_08A862F4;
    case 377u: goto L_08A86304;
    case 378u: goto L_08A86310;
    case 379u: goto L_08A8631C;
    case 380u: goto L_08A86320;
    case 381u: goto L_08A8632C;
    case 382u: goto L_08A86348;
    case 383u: goto L_08A8637C;
    case 384u: goto L_08A86388;
    case 385u: goto L_08A863CC;
    case 386u: goto L_08A863D8;
    case 387u: goto L_08A86410;
    case 388u: goto L_08A86420;
    case 389u: goto L_08A86428;
    case 390u: goto L_08A8642C;
    case 391u: goto L_08A86434;
    case 392u: goto L_08A86508;
    case 393u: goto L_08A8652C;
    case 394u: goto L_08A86534;
    case 395u: goto L_08A86540;
    case 396u: goto L_08A86690;
    case 397u: goto L_08A866A8;
    case 398u: goto L_08A866B0;
    case 399u: goto L_08A866B8;
    case 400u: goto L_08A866BC;
    case 401u: goto L_08A866C0;
    case 402u: goto L_08A866D0;
    case 403u: goto L_08A866DC;
    case 404u: goto L_08A866E4;
    case 405u: goto L_08A866EC;
    case 406u: goto L_08A866F4;
    case 407u: goto L_08A866FC;
    case 408u: goto L_08A86704;
    case 409u: goto L_08A86708;
    case 410u: goto L_08A86714;
    case 411u: goto L_08A8671C;
    case 412u: goto L_08A8673C;
    case 413u: goto L_08A86790;
    case 414u: goto L_08A867CC;
    case 415u: goto L_08A867D8;
    case 416u: goto L_08A867EC;
    case 417u: goto L_08A867F8;
    case 418u: goto L_08A8680C;
    case 419u: goto L_08A86824;
    case 420u: goto L_08A86828;
    case 421u: goto L_08A86834;
    case 422u: goto L_08A868C0;
    case 423u: goto L_08A8698C;
    case 424u: goto L_08A8699C;
    case 425u: goto L_08A86A10;
    case 426u: goto L_08A86A1C;
    case 427u: goto L_08A86A2C;
    case 428u: goto L_08A86A38;
    case 429u: goto L_08A86A70;
    case 430u: goto L_08A86A8C;
    case 431u: goto L_08A86A94;
    case 432u: goto L_08A86A9C;
    case 433u: goto L_08A86AB0;
    case 434u: goto L_08A86AC4;
    case 435u: goto L_08A86AF4;
    case 436u: goto L_08A86B10;
    case 437u: goto L_08A86B18;
    case 438u: goto L_08A86B20;
    case 439u: goto L_08A86B30;
    case 440u: goto L_08A86B40;
    case 441u: goto L_08A86B58;
    case 442u: goto L_08A86B60;
    case 443u: goto L_08A86B70;
    case 444u: goto L_08A86B78;
    case 445u: goto L_08A86BA8;
    case 446u: goto L_08A86BC0;
    case 447u: goto L_08A86BDC;
    case 448u: goto L_08A86BF8;
    case 449u: goto L_08A86C14;
    case 450u: goto L_08A86C34;
    case 451u: goto L_08A86C70;
    case 452u: goto L_08A86C78;
    case 453u: goto L_08A86C80;
    case 454u: goto L_08A86C8C;
    case 455u: goto L_08A86CA4;
    case 456u: goto L_08A86CB8;
    case 457u: goto L_08A86CC8;
    case 458u: goto L_08A86CDC;
    case 459u: goto L_08A86D24;
    case 460u: goto L_08A86D4C;
    case 461u: goto L_08A86D74;
    case 462u: goto L_08A86D7C;
    case 463u: goto L_08A86D84;
    case 464u: goto L_08A86D8C;
    case 465u: goto L_08A86E94;
    case 466u: goto L_08A86EA4;
    case 467u: goto L_08A86EE4;
    case 468u: goto L_08A86EF0;
    case 469u: goto L_08A86F78;
    case 470u: goto L_08A86FB8;
    case 471u: goto L_08A86FCC;
    case 472u: goto L_08A86FD8;
    case 473u: goto L_08A87020;
    case 474u: goto L_08A87058;
    case 475u: goto L_08A87060;
    case 476u: goto L_08A87078;
    case 477u: goto L_08A87084;
    case 478u: goto L_08A87090;
    case 479u: goto L_08A87098;
    case 480u: goto L_08A870A0;
    case 481u: goto L_08A870A8;
    case 482u: goto L_08A870B0;
    case 483u: goto L_08A870BC;
    case 484u: goto L_08A870C4;
    case 485u: goto L_08A870D0;
    case 486u: goto L_08A870D4;
    case 487u: goto L_08A870E0;
    case 488u: goto L_08A870EC;
    case 489u: goto L_08A87104;
    case 490u: goto L_08A87114;
    case 491u: goto L_08A8711C;
    case 492u: goto L_08A87124;
    case 493u: goto L_08A8712C;
    case 494u: goto L_08A87148;
    case 495u: goto L_08A87158;
    case 496u: goto L_08A87198;
    case 497u: goto L_08A871B4;
    case 498u: goto L_08A871BC;
    case 499u: goto L_08A871D8;
    case 500u: goto L_08A871E0;
    case 501u: goto L_08A87224;
    case 502u: goto L_08A87230;
    case 503u: goto L_08A87240;
    case 504u: goto L_08A8724C;
    case 505u: goto L_08A87250;
    case 506u: goto L_08A87254;
    case 507u: goto L_08A8725C;
    case 508u: goto L_08A87294;
    case 509u: goto L_08A872A0;
    case 510u: goto L_08A872A8;
    case 511u: goto L_08A872C8;
    case 512u: goto L_08A872D0;
    case 513u: goto L_08A872D8;
    case 514u: goto L_08A872E0;
    case 515u: goto L_08A872E8;
    case 516u: goto L_08A872F0;
    case 517u: goto L_08A872F8;
    case 518u: goto L_08A87300;
    case 519u: goto L_08A87308;
    case 520u: goto L_08A87310;
    case 521u: goto L_08A87318;
    case 522u: goto L_08A87320;
    case 523u: goto L_08A87328;
    case 524u: goto L_08A8732C;
    case 525u: goto L_08A87334;
    case 526u: goto L_08A87364;
    case 527u: goto L_08A87370;
    case 528u: goto L_08A87390;
    case 529u: goto L_08A873B0;
    case 530u: goto L_08A873D8;
    case 531u: goto L_08A8740C;
    case 532u: goto L_08A87414;
    case 533u: goto L_08A87424;
    case 534u: goto L_08A87438;
    case 535u: goto L_08A87440;
    case 536u: goto L_08A87460;
    case 537u: goto L_08A87490;
    case 538u: goto L_08A874C0;
    case 539u: goto L_08A874C8;
    case 540u: goto L_08A874D8;
    case 541u: goto L_08A874EC;
    case 542u: goto L_08A874F4;
    case 543u: goto L_08A87518;
    case 544u: goto L_08A87540;
    case 545u: goto L_08A8757C;
    case 546u: goto L_08A87580;
    case 547u: goto L_08A87588;
    case 548u: goto L_08A87598;
    case 549u: goto L_08A875A0;
    case 550u: goto L_08A875A8;
    case 551u: goto L_08A875B0;
    case 552u: goto L_08A875D0;
    case 553u: goto L_08A875E4;
    case 554u: goto L_08A87624;
    case 555u: goto L_08A87650;
    case 556u: goto L_08A87660;
    case 557u: goto L_08A87670;
    case 558u: goto L_08A87684;
    case 559u: goto L_08A8768C;
    case 560u: goto L_08A8769C;
    case 561u: goto L_08A876C8;
    case 562u: goto L_08A87708;
    case 563u: goto L_08A87730;
    case 564u: goto L_08A87740;
    case 565u: goto L_08A8775C;
    case 566u: goto L_08A87788;
    case 567u: goto L_08A877AC;
    case 568u: goto L_08A877D8;
    case 569u: goto L_08A877EC;
    case 570u: goto L_08A877FC;
    case 571u: goto L_08A87800;
    case 572u: goto L_08A87888;
    case 573u: goto L_08A878E4;
    case 574u: goto L_08A878EC;
    case 575u: goto L_08A878F4;
    case 576u: goto L_08A87908;
    case 577u: goto L_08A8790C;
    case 578u: goto L_08A87914;
    case 579u: goto L_08A87928;
    case 580u: goto L_08A87938;
    case 581u: goto L_08A87954;
    case 582u: goto L_08A87974;
    case 583u: goto L_08A87988;
    case 584u: goto L_08A87990;
    case 585u: goto L_08A879A4;
    case 586u: goto L_08A879C0;
    case 587u: goto L_08A87A08;
    case 588u: goto L_08A87A14;
    case 589u: goto L_08A87A28;
    case 590u: goto L_08A87A40;
    case 591u: goto L_08A87A58;
    case 592u: goto L_08A87A6C;
    case 593u: goto L_08A87A84;
    case 594u: goto L_08A87AC4;
    case 595u: goto L_08A87AD4;
    case 596u: goto L_08A87AF8;
    case 597u: goto L_08A87B20;
    case 598u: goto L_08A87B24;
    case 599u: goto L_08A87B34;
    case 600u: goto L_08A87B3C;
    case 601u: goto L_08A87B48;
    case 602u: goto L_08A87B64;
    case 603u: goto L_08A87B94;
    case 604u: goto L_08A87BAC;
    case 605u: goto L_08A87BBC;
    case 606u: goto L_08A87BE4;
    case 607u: goto L_08A87BF0;
    case 608u: goto L_08A87D80;
    case 609u: goto L_08A87D94;
    case 610u: goto L_08A87D9C;
    case 611u: goto L_08A87DAC;
    case 612u: goto L_08A87DF8;
    case 613u: goto L_08A87E14;
    case 614u: goto L_08A87E3C;
    case 615u: goto L_08A87E74;
    case 616u: goto L_08A87E7C;
    case 617u: goto L_08A87E88;
    case 618u: goto L_08A87E98;
    case 619u: goto L_08A87EA8;
    case 620u: goto L_08A87EAC;
    case 621u: goto L_08A87EBC;
    case 622u: goto L_08A87EC4;
    case 623u: goto L_08A87ED0;
    case 624u: goto L_08A87EDC;
    case 625u: goto L_08A87EE4;
    case 626u: goto L_08A87EE8;
    case 627u: goto L_08A87EF0;
    case 628u: goto L_08A87EFC;
    case 629u: goto L_08A87F04;
    case 630u: goto L_08A87F10;
    case 631u: goto L_08A87F18;
    case 632u: goto L_08A87F24;
    case 633u: goto L_08A87F2C;
    case 634u: goto L_08A87F34;
    case 635u: goto L_08A87F3C;
    case 636u: goto L_08A87F48;
    case 637u: goto L_08A87F58;
    case 638u: goto L_08A87F68;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A84000:
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(26224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08A84034;
L_08A84034:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A840E0;
      }
      goto L_08A8403C;
    }
L_08A8403C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A84040;
L_08A84040:
    ctx.gpr[21] = (ctx.gpr[22] - ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84074;
      }
      goto L_08A84068;
    }
L_08A84068:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
        goto L_08A840D8;
    }
    goto L_08A84070;
L_08A84070:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A84074;
L_08A84074:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A840D4;
      }
      goto L_08A84080;
    }
L_08A84080:
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    goto L_08A84084;
L_08A84084:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A840C4;
    }
    goto L_08A84094;
L_08A84094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A840A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A840A0u) goto L_08A840A0;
    return;
L_08A840A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A840C4;
      }
      goto L_08A840A8;
    }
L_08A840A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A840F8;
      }
      goto L_08A840C4;
    }
L_08A840C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A84084;
      }
      goto L_08A840D4;
    }
L_08A840D4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    goto L_08A840D8;
L_08A840D8:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08A84040;
    }
    goto L_08A840E0;
L_08A840E0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08A840F8;
      }
      goto L_08A840E8;
    }
L_08A840E8:
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(26224)));
      if (branch_taken) {
          goto L_08A84034;
      }
      goto L_08A840F8;
    }
L_08A840F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84128:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08A84140;
    }
    goto L_08A84138;
L_08A84138:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84140:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08A84150;
    }
    goto L_08A84148;
L_08A84148:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-6));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84150:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84168;
      }
      goto L_08A84158;
    }
L_08A84158:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84168:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84208:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10798)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A84240;
      }
      goto L_08A84218;
    }
L_08A84218:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10788)));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10788), 0u);
        goto L_08A84224;
    }
    goto L_08A84224;
L_08A84224:
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10792), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10784), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84240:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-7));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A842DC;
      }
      goto L_08A84278;
    }
L_08A84278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10788)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12480));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A842B0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A842B0u) goto L_08A842B0;
    return;
L_08A842B0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A842CC;
      }
      goto L_08A842BC;
    }
L_08A842BC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20824));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A842CC;
L_08A842CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(10792), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10797), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08A8433C;
      }
      goto L_08A842DC;
    }
L_08A842DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10788)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A84340;
      }
      goto L_08A842E8;
    }
L_08A842E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (0u | 4u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A84314u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12480));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A84314u) goto L_08A84314;
    return;
L_08A84314:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84330;
      }
      goto L_08A84320;
    }
L_08A84320:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20776));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A84330;
L_08A84330:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(10788), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10796), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08A8433C;
L_08A8433C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A84340;
L_08A84340:
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26236), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26228), 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12468));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 256u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A8436Cu);
    ctx.gpr[7] = (0u | 20u);
    ctx.pc = 0x08AB4554u;
    return;
L_08A8436C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26232), ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26224), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10798), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A843A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A843C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26232)));
    ctx.pc = 0x08AB45A4u;
    return;
L_08A843C0:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(10796)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A843F8;
      }
      goto L_08A843D0;
    }
L_08A843D0:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A843F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A843F0u) goto L_08A843F0;
    return;
L_08A843F0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10796), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(10788), 0u);
    goto L_08A843F8;
L_08A843F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10797)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8445C;
      }
      goto L_08A84404;
    }
L_08A84404:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10792)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A84428u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A84428u) goto L_08A84428;
    return;
L_08A84428:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10792)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A84450u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A84450u) goto L_08A84450;
    return;
L_08A84450:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10797), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(10792), 0u);
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A8445C;
L_08A8445C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10784), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10798), static_cast<std::uint8_t>(0u));
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
L_08A84484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A844A0u);
    // nop
    ctx.pc = 0x08AB45ACu;
    return;
L_08A844A0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26236)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A844DC;
      }
      goto L_08A844B4;
    }
L_08A844B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26228)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26228), ctx.gpr[4]);
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
L_08A844DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26232)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A844F0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB45ECu;
    return;
L_08A844F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(26236), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26228)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26228), ctx.gpr[4]);
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
L_08A8451C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8452Cu);
    // nop
    ctx.pc = 0x08AB45ACu;
    return;
L_08A8452C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26236)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A84558;
      }
      goto L_08A8453C;
    }
L_08A8453C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26228)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26228), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26228)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A84558;
      }
      goto L_08A84554;
    }
L_08A84554:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26236), ctx.gpr[6]);
    goto L_08A84558;
L_08A84558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26228)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A84570;
      }
      goto L_08A84564;
    }
L_08A84564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26232)));
    ctx.gpr[31] = (0x08A84570u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB45CCu;
    return;
L_08A84570:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84588:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A84638;
      }
      goto L_08A845D8;
    }
L_08A845D8:
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (2222u << 16u);
    goto L_08A845E4;
L_08A845E4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10800), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    if (static_cast<std::int32_t>(ctx.gpr[11]) < 0) {
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10800), static_cast<std::uint16_t>(ctx.gpr[8]));
        goto L_08A84610;
    }
    goto L_08A84610;
L_08A84610:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A845E4;
      }
      goto L_08A84634;
    }
L_08A84634:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08A84638;
L_08A84638:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08A846A0;
      }
      goto L_08A84648;
    }
L_08A84648:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (2222u << 16u);
    goto L_08A84650;
L_08A84650:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10800), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    if (static_cast<std::int32_t>(ctx.gpr[11]) < 0) {
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10800), static_cast<std::uint16_t>(ctx.gpr[8]));
        goto L_08A8467C;
    }
    goto L_08A8467C;
L_08A8467C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A84650;
      }
      goto L_08A846A0;
    }
L_08A846A0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8470C;
      }
      goto L_08A846B4;
    }
L_08A846B4:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (2222u << 16u);
    goto L_08A846BC;
L_08A846BC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10800), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    if (static_cast<std::int32_t>(ctx.gpr[11]) < 0) {
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10800), static_cast<std::uint16_t>(ctx.gpr[8]));
        goto L_08A846E8;
    }
    goto L_08A846E8;
L_08A846E8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10800))))));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A846BC;
      }
      goto L_08A8470C;
    }
L_08A8470C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26224)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26224)));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
        goto L_08A84724;
    }
    goto L_08A84724;
L_08A84724:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26224), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84730:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8476C;
      }
      goto L_08A84744;
    }
L_08A84744:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 0u);
    goto L_08A8474C;
L_08A8474C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A8474C;
      }
      goto L_08A8476C;
    }
L_08A8476C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A847A4;
      }
      goto L_08A84780;
    }
L_08A84780:
    ctx.gpr[8] = (0u | 0u);
    goto L_08A84784;
L_08A84784:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A84784;
      }
      goto L_08A847A4;
    }
L_08A847A4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A847DC;
      }
      goto L_08A847B8;
    }
L_08A847B8:
    ctx.gpr[8] = (0u | 0u);
    goto L_08A847BC;
L_08A847BC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A847BC;
      }
      goto L_08A847DC;
    }
L_08A847DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26224)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
        goto L_08A847F8;
    }
    goto L_08A847EC;
L_08A847EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26224), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_08A847F8;
L_08A847F8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A84808;
      }
      goto L_08A84800;
    }
L_08A84800:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08A84808;
L_08A84808:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84818;
      }
      goto L_08A84810;
    }
L_08A84810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A84818;
L_08A84818:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8488C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10792)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A848C4u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A848C4u) goto L_08A848C4;
    return;
L_08A848C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A848D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10792)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A84900u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A84900u) goto L_08A84900;
    return;
L_08A84900:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84954:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84974u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 651u, 0x08A83CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A84974u) goto L_08A84974;
    return;
L_08A84974:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A849AC;
      }
      goto L_08A84980;
    }
L_08A84980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A849C8;
      }
      goto L_08A84990;
    }
L_08A84990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A84994;
L_08A84994:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A849A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A849A0u) goto L_08A849A0;
    return;
L_08A849A0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08A84994;
    }
    goto L_08A849AC;
L_08A849AC:
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
L_08A849C8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-4));
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
L_08A84A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84A48u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 651u, 0x08A83CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A84A48u) goto L_08A84A48;
    return;
L_08A84A48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A84A74;
      }
      goto L_08A84A50;
    }
L_08A84A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_08A84A88;
    }
    goto L_08A84A6C;
L_08A84A6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A84A8C;
      }
      goto L_08A84A74;
    }
L_08A84A74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84A88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A84A8C;
L_08A84A8C:
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
L_08A84AEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84B08u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 651u, 0x08A83CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A84B08u) goto L_08A84B08;
    return;
L_08A84B08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A84B28;
      }
      goto L_08A84B10;
    }
L_08A84B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] == ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A84B3C;
    }
    goto L_08A84B20;
L_08A84B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A84B44;
      }
      goto L_08A84B28;
    }
L_08A84B28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84B3C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A84B44;
L_08A84B44:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A84B54;
      }
      goto L_08A84B4C;
    }
L_08A84B4C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A84B54;
L_08A84B54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84B64;
      }
      goto L_08A84B5C;
    }
L_08A84B5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A84B64;
L_08A84B64:
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
L_08A84B7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84BA0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A84484;
L_08A84BA0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A84BB0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A84BD4;
L_08A84BB0:
    ctx.gpr[31] = (0x08A84BB8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A8451C;
L_08A84BB8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A84BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84C00u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 681u, 0x08A83F00u>(ctx, &aot_mem) && ctx.pc == 0x08A84C00u) goto L_08A84C00;
    return;
L_08A84C00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A84C64;
      }
      goto L_08A84C08;
    }
L_08A84C08:
    ctx.gpr[31] = (0x08A84C10u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08A8488C;
L_08A84C10:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A84C44;
      }
      goto L_08A84C1C;
    }
L_08A84C1C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08A84C80;
    }
    goto L_08A84C3C;
L_08A84C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A84CA0;
      }
      goto L_08A84C44;
    }
L_08A84C44:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08A84C64:
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
L_08A84C80:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A84C90u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A84C90u) goto L_08A84C90;
    return;
L_08A84C90:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08A84C80;
    }
    goto L_08A84C9C;
L_08A84C9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A84CA0;
L_08A84CA0:
    ctx.gpr[31] = (0x08A84CA8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A85674;
L_08A84CA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
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
L_08A84CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84CE0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A84484;
L_08A84CE0:
    ctx.gpr[31] = (0x08A84CE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A84D04;
L_08A84CE8:
    ctx.gpr[31] = (0x08A84CF0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A8451C;
L_08A84CF0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A84D48;
      }
      goto L_08A84D28;
    }
L_08A84D28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08A84D2C;
L_08A84D2C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A84D3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A84D3Cu) goto L_08A84D3C;
    return;
L_08A84D3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08A84D2C;
    }
    goto L_08A84D48;
L_08A84D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A84DB4;
      }
      goto L_08A84D58;
    }
L_08A84D58:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10792)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2222u << 16u);
        goto L_08A84D90;
    }
    goto L_08A84D68;
L_08A84D68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A84D88u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A84D88u) goto L_08A84D88;
    return;
L_08A84D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84DB4;
      }
      goto L_08A84D90;
    }
L_08A84D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10788)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A84DB4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A84DB4u) goto L_08A84DB4;
    return;
L_08A84DB4:
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
L_08A84DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84DECu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08A84484;
L_08A84DEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A84DF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A84E18;
L_08A84DF8:
    ctx.gpr[31] = (0x08A84E00u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A8451C;
L_08A84E00:
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
L_08A84E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84E28u);
    // nop
    goto L_08A85674;
L_08A84E28:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84F50u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 681u, 0x08A83F00u>(ctx, &aot_mem) && ctx.pc == 0x08A84F50u) goto L_08A84F50;
    return;
L_08A84F50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A84F7C;
      }
      goto L_08A84F58;
    }
L_08A84F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_08A84F90;
    }
    goto L_08A84F74;
L_08A84F74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A84F94;
      }
      goto L_08A84F7C;
    }
L_08A84F7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84F90:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A84F94;
L_08A84F94:
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
L_08A84FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85010u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 681u, 0x08A83F00u>(ctx, &aot_mem) && ctx.pc == 0x08A85010u) goto L_08A85010;
    return;
L_08A85010:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A85030;
      }
      goto L_08A85018;
    }
L_08A85018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] == ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A85044;
    }
    goto L_08A85028;
L_08A85028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A8504C;
      }
      goto L_08A85030;
    }
L_08A85030:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85044:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A8504C;
L_08A8504C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8505C;
      }
      goto L_08A85054;
    }
L_08A85054:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A8505C;
L_08A8505C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8506C;
      }
      goto L_08A85064;
    }
L_08A85064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A8506C;
L_08A8506C:
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
L_08A850CC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
        goto L_08A850E8;
    }
    goto L_08A850E8;
L_08A850E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08A85168;
    }
    goto L_08A8515C;
L_08A8515C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08A85168;
L_08A85168:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A85178;
      }
      goto L_08A85170;
    }
L_08A85170:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A85178;
L_08A85178:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A8518C;
    }
    goto L_08A85180;
L_08A85180:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A8518C;
L_08A8518C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A85200;
      }
      goto L_08A85198;
    }
L_08A85198:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10792)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A851D8;
      }
      goto L_08A851A8;
    }
L_08A851A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A851C8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A851C8u) goto L_08A851C8;
    return;
L_08A851C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A851D8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10788)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A85200u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A85200u) goto L_08A85200;
    return;
L_08A85200:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85258:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
        goto L_08A85274;
    }
    goto L_08A85274;
L_08A85274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A852D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08A852F4;
    }
    goto L_08A852E8;
L_08A852E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08A852F4;
L_08A852F4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A85304;
      }
      goto L_08A852FC;
    }
L_08A852FC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A85304;
L_08A85304:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A85318;
    }
    goto L_08A8530C;
L_08A8530C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A85318;
L_08A85318:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8538C;
      }
      goto L_08A85324;
    }
L_08A85324:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10792)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A85364;
      }
      goto L_08A85334;
    }
L_08A85334:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A85354u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A85354u) goto L_08A85354;
    return;
L_08A85354:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85364:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10788)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A8538Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8538Cu) goto L_08A8538C;
    return;
L_08A8538C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A853D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A853ECu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08A84484;
L_08A853EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A853F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A85418;
L_08A853F8:
    ctx.gpr[31] = (0x08A85400u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A8451C;
L_08A85400:
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
L_08A85418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85438u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A84128;
L_08A85438:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A854B0;
      }
      goto L_08A85444;
    }
L_08A85444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A85474;
      }
      goto L_08A8545C;
    }
L_08A8545C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A85490;
      }
      goto L_08A8546C;
    }
L_08A8546C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A854B0;
      }
      goto L_08A85474;
    }
L_08A85474:
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
L_08A85490:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08A85494;
L_08A85494:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A854A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A854A4u) goto L_08A854A4;
    return;
L_08A854A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08A85494;
    }
    goto L_08A854B0;
L_08A854B0:
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
L_08A85514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85530u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A84128;
L_08A85530:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8555C;
      }
      goto L_08A85538;
    }
L_08A85538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_08A85570;
    }
    goto L_08A85554;
L_08A85554:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A85574;
      }
      goto L_08A8555C;
    }
L_08A8555C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85570:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A85574;
L_08A85574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A85584u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A85584u) goto L_08A85584;
    return;
L_08A85584:
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
L_08A855E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85600u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A84128;
L_08A85600:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A85620;
      }
      goto L_08A85608;
    }
L_08A85608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] == ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A85634;
    }
    goto L_08A85618;
L_08A85618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A8563C;
      }
      goto L_08A85620;
    }
L_08A85620:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85634:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A8563C;
L_08A8563C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8564C;
      }
      goto L_08A85644;
    }
L_08A85644:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A8564C;
L_08A8564C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8565C;
      }
      goto L_08A85654;
    }
L_08A85654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A8565C;
L_08A8565C:
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
L_08A85674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A856B0;
      }
      goto L_08A85690;
    }
L_08A85690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08A85694;
L_08A85694:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A856A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A856A4u) goto L_08A856A4;
    return;
L_08A856A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08A85694;
    }
    goto L_08A856B0;
L_08A856B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A856C4:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26224), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A856D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 100u);
        goto L_08A856E8;
    }
    goto L_08A856E8;
L_08A856E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9216u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11660), ctx.gpr[16]);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22344));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A85734u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(10812), ctx.gpr[4]);
    ctx.pc = 0x08AB460Cu;
    return;
L_08A85734:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85748:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11664)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11664), ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11668)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11668), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(11628));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (2222u << 16u);
    goto L_08A85794;
L_08A85794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A857B4;
    }
    goto L_08A857A0;
L_08A857A0:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A857A8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), ctx.gpr[17]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A857A8u) goto L_08A857A8;
    return;
L_08A857A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A857B4;
L_08A857B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A85794;
      }
      goto L_08A857C0;
    }
L_08A857C0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10812)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8581C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8582Cu);
    // nop
    ctx.pc = 0x08AB45ACu;
    return;
L_08A8582C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10824));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (20563u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20564));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10824), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8589C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A85914;
      }
      goto L_08A858C4;
    }
L_08A858C4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12440)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A858DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_08A85918;
      }
      goto L_08A858E4;
    }
L_08A858E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_08A85918;
      }
      goto L_08A858EC;
    }
L_08A858EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A85918;
      }
      goto L_08A858F4;
    }
L_08A858F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 30u);
      if (branch_taken) {
          goto L_08A85918;
      }
      goto L_08A858FC;
    }
L_08A858FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 50u);
      if (branch_taken) {
          goto L_08A85918;
      }
      goto L_08A85904;
    }
L_08A85904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 100u);
      if (branch_taken) {
          goto L_08A85918;
      }
      goto L_08A8590C;
    }
L_08A8590C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 120u);
      if (branch_taken) {
          goto L_08A85918;
      }
      goto L_08A85914;
    }
L_08A85914:
    ctx.gpr[6] = (0u | 0u);
    goto L_08A85918;
L_08A85918:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12456));
    ctx.gpr[31] = (0x08A85930u);
    ctx.gpr[8] = (32768u << 16u);
    ctx.pc = 0x08AB45E4u;
    return;
L_08A85930:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A85974;
      }
      goto L_08A8593C;
    }
L_08A8593C:
    ctx.gpr[4] = (20563u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20564));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A8595Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4594u;
    return;
L_08A8595C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85974:
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
L_08A8598C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8599Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08AB45C4u;
    return;
L_08A8599C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85A40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85A54u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08AB45ACu;
    return;
L_08A85A54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A85A80;
      }
      goto L_08A85A5C;
    }
L_08A85A5C:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[31] = (0x08A85A78u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A85A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85A90;
      }
      goto L_08A85A80;
    }
L_08A85A80:
    ctx.gpr[31] = (0x08A85A88u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08AB4644u;
    return;
L_08A85A88:
    ctx.gpr[31] = (0x08A85A90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.pc = 0x08AB466Cu;
    return;
L_08A85A90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85AB4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08AB45ACu;
    return;
L_08A85AB4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A85AD4;
      }
      goto L_08A85ABC;
    }
L_08A85ABC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10824));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85AF0;
      }
      goto L_08A85AD4;
    }
L_08A85AD4:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A85AEC;
      }
      goto L_08A85AE0;
    }
L_08A85AE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A85AEC;
L_08A85AEC:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08A85AF0;
L_08A85AF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85BFC:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85C0C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85C1C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85C2C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08A85CD8;
      }
      goto L_08A85CA8;
    }
L_08A85CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_08A85CD8;
      }
      goto L_08A85CB0;
    }
L_08A85CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_08A85CD8;
      }
      goto L_08A85CB8;
    }
L_08A85CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 30u);
      if (branch_taken) {
          goto L_08A85CD8;
      }
      goto L_08A85CC0;
    }
L_08A85CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 50u);
      if (branch_taken) {
          goto L_08A85CD8;
      }
      goto L_08A85CC8;
    }
L_08A85CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_08A85CD8;
      }
      goto L_08A85CD0;
    }
L_08A85CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 120u);
      if (branch_taken) {
          goto L_08A85CD8;
      }
      goto L_08A85CD8;
    }
L_08A85CD8:
    ctx.gpr[31] = (0x08A85CE0u);
    // nop
    ctx.pc = 0x08AB4624u;
    return;
L_08A85CE0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10832)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15356), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15360));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15360), ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85E1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12328));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A85E1Cu) goto L_08A85E1C;
    return;
L_08A85E1C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10832)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85E3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(10840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 63u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(252));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_08A85E5C;
L_08A85E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A85E74;
    }
    goto L_08A85E68;
L_08A85E68:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A85E70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A85E70u) goto L_08A85E70;
    return;
L_08A85E70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A85E74;
L_08A85E74:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A85E5C;
      }
      goto L_08A85E80;
    }
L_08A85E80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85EA4u);
    // nop
    goto L_08A85E3C;
L_08A85EA4:
    rt.stop("guest executed break at 0x08A85EA4"); return;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85EB4:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10840));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A85EC4;
L_08A85EC4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A85F04;
      }
      goto L_08A85ED0;
    }
L_08A85ED0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A85EC4;
      }
      goto L_08A85EDC;
    }
L_08A85EDC:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A85EE4;
L_08A85EE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A85EF8;
      }
      goto L_08A85EF0;
    }
L_08A85EF0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85EF8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A85EE4;
      }
      goto L_08A85F04;
    }
L_08A85F04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85F54u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A85F60;
L_08A85F54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85F88;
      }
      goto L_08A85F6C;
    }
L_08A85F6C:
    ctx.gpr[7] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85F88;
      }
      goto L_08A85F78;
    }
L_08A85F78:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    goto L_08A85F88;
L_08A85F88:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85FAC;
      }
      goto L_08A85F90;
    }
L_08A85F90:
    ctx.gpr[7] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85FAC;
      }
      goto L_08A85F9C;
    }
L_08A85F9C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    goto L_08A85FAC;
L_08A85FAC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85FD0;
      }
      goto L_08A85FB4;
    }
L_08A85FB4:
    ctx.gpr[7] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85FD0;
      }
      goto L_08A85FC0;
    }
L_08A85FC0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    goto L_08A85FD0;
L_08A85FD0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8603C;
      }
      goto L_08A85FD8;
    }
L_08A85FD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A85FE8;
L_08A85FE8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A85FE8;
      }
      goto L_08A86038;
    }
L_08A86038:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    goto L_08A8603C;
L_08A8603C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A86068;
      }
      goto L_08A86044;
    }
L_08A86044:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A86044;
      }
      goto L_08A86064;
    }
L_08A86064:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    goto L_08A86068;
L_08A86068:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A86088;
      }
      goto L_08A86070;
    }
L_08A86070:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A86070;
      }
      goto L_08A86084;
    }
L_08A86084:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    goto L_08A86088;
L_08A86088:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8609C;
      }
      goto L_08A86090;
    }
L_08A86090:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    goto L_08A8609C;
L_08A8609C:
    if (static_cast<std::int32_t>(ctx.gpr[6]) > 0) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08A860A4;
    }
    goto L_08A860A4;
L_08A860A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A860AC:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11692));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A860E0:
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11096));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A86120;
      }
      goto L_08A860F4;
    }
L_08A860F4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A860F8;
L_08A860F8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A860F8;
      }
      goto L_08A86118;
    }
L_08A86118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86174;
      }
      goto L_08A86120;
    }
L_08A86120:
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08A86160;
      }
      goto L_08A8612C;
    }
L_08A8612C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A86130;
L_08A86130:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A86148;
      }
      goto L_08A86140;
    }
L_08A86140:
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08A86148;
L_08A86148:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A86130;
      }
      goto L_08A86158;
    }
L_08A86158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86174;
      }
      goto L_08A86160;
    }
L_08A86160:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A86174;
L_08A86174:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8617C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11608)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8625C;
      }
      goto L_08A86194;
    }
L_08A86194:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11608), ctx.gpr[4]);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11692));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11096));
    goto L_08A861B4;
L_08A861B4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A861B4;
      }
      goto L_08A861D0;
    }
L_08A861D0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_08A861D8;
L_08A861D8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A861D8;
      }
      goto L_08A861F4;
    }
L_08A861F4:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    goto L_08A861FC;
L_08A861FC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A861FC;
      }
      goto L_08A86214;
    }
L_08A86214:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(112));
    goto L_08A86224;
L_08A86224:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A86224;
      }
      goto L_08A86244;
    }
L_08A86244:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08A86250u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A86508;
L_08A86250:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08A8625Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A863D8;
L_08A8625C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-8240));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11608)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8212), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8216), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8224), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A862B8;
      }
      goto L_08A862B0;
    }
L_08A862B0:
    ctx.gpr[31] = (0x08A862B8u);
    // nop
    goto L_08A8617C;
L_08A862B8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8632C;
      }
      goto L_08A862D8;
    }
L_08A862D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A862E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 192u, 0x08A9C938u>(ctx, &aot_mem) && ctx.pc == 0x08A862E8u) goto L_08A862E8;
    return;
L_08A862E8:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(11692));
    goto L_08A862F4;
L_08A862F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A86320;
    }
    goto L_08A86304;
L_08A86304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8631C;
      }
      goto L_08A86310;
    }
L_08A86310:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8631Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8631Cu) goto L_08A8631C;
    return;
L_08A8631C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A86320;
L_08A86320:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A862F4;
      }
      goto L_08A8632C;
    }
L_08A8632C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(8240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8637Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A86280;
L_08A8637C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A863CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A86280;
L_08A863CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A863D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11692));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A86434;
      }
      goto L_08A86410;
    }
L_08A86410:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11608)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8642C;
      }
      goto L_08A86420;
    }
L_08A86420:
    ctx.gpr[31] = (0x08A86428u);
    // nop
    goto L_08A8617C;
L_08A86428:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8642C;
L_08A8642C:
    ctx.gpr[31] = (0x08A86434u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A860AC;
L_08A86434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11608)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A86534;
      }
      goto L_08A8652C;
    }
L_08A8652C:
    ctx.gpr[31] = (0x08A86534u);
    // nop
    goto L_08A8617C;
L_08A86534:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A86540u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A860E0;
L_08A86540:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86690:
    ctx.gpr[9] = (2223u << 16u);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-15336));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[12];
    ctx.gpr[3] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A866B0;
      }
      goto L_08A866A8;
    }
L_08A866A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A866BC;
      }
      goto L_08A866B0;
    }
L_08A866B0:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(11616)));
        goto L_08A866C0;
    }
    goto L_08A866B8;
L_08A866B8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A866BC;
L_08A866BC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(11616)));
    goto L_08A866C0;
L_08A866C0:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11616), ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    goto L_08A866D0;
L_08A866D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A866E4;
      }
      goto L_08A866DC;
    }
L_08A866DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A86704;
      }
      goto L_08A866E4;
    }
L_08A866E4:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
        goto L_08A86708;
    }
    goto L_08A866EC;
L_08A866EC:
    if (ctx.gpr[13] != ctx.gpr[12]) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
        goto L_08A86708;
    }
    goto L_08A866F4;
L_08A866F4:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[13] = (ctx.gpr[10] | 0u);
        goto L_08A86704;
    }
    goto L_08A866FC;
L_08A866FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A86704;
      }
      goto L_08A86704;
    }
L_08A86704:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08A86708;
L_08A86708:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A866D0;
      }
      goto L_08A86714;
    }
L_08A86714:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    ctx.gpr[7] = (ctx.gpr[13] << 4u);
      if (branch_taken) {
          goto L_08A8673C;
      }
      goto L_08A8671C;
    }
L_08A8671C:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11668)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A8673C;
L_08A8673C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11616), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-15336));
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_08A867CC;
L_08A867CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A86828;
    }
    goto L_08A867D8;
L_08A867D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11668)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A86828;
    }
    goto L_08A867EC;
L_08A867EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A86824;
      }
      goto L_08A867F8;
    }
L_08A867F8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11668)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8680Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8680Cu) goto L_08A8680C;
    return;
L_08A8680C:
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11668)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A86824;
L_08A86824:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A86828;
L_08A86828:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A867CC;
      }
      goto L_08A86834;
    }
L_08A86834:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_08A868C0:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11664)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8698C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8699Cu);
    // nop
    goto L_08A868C0;
L_08A8699C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11680)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86A10:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11660)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A86A2Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 567u, 0x08A9B920u>(ctx, &aot_mem) && ctx.pc == 0x08A86A2Cu) goto L_08A86A2C;
    return;
L_08A86A2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86A38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[11]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A86A94;
      }
      goto L_08A86A70;
    }
L_08A86A70:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(544));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A86A8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 192u, 0x08A9C938u>(ctx, &aot_mem) && ctx.pc == 0x08A86A8Cu) goto L_08A86A8C;
    return;
L_08A86A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11676)));
      if (branch_taken) {
          goto L_08A86A9C;
      }
      goto L_08A86A94;
    }
L_08A86A94:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11676)));
    goto L_08A86A9C;
L_08A86A9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12168));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A86AB0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A86AB0u) goto L_08A86AB0;
    return;
L_08A86AB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A86B18;
      }
      goto L_08A86AF4;
    }
L_08A86AF4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(544));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A86B10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 192u, 0x08A9C938u>(ctx, &aot_mem) && ctx.pc == 0x08A86B10u) goto L_08A86B10;
    return;
L_08A86B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08A86B20;
      }
      goto L_08A86B18;
    }
L_08A86B18:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2221u << 16u);
    goto L_08A86B20;
L_08A86B20:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A86B30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12164));
    goto L_08A86348;
L_08A86B30:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11792)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A86B58;
      }
      goto L_08A86B40;
    }
L_08A86B40:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11796)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A86B58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12152));
    goto L_08A86348;
L_08A86B58:
    ctx.gpr[31] = (0x08A86B60u);
    // nop
    goto L_08A85E94;
L_08A86B60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86B70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86B78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(26240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A86C14;
      }
      goto L_08A86BA8;
    }
L_08A86BA8:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A86BC0u);
    ctx.gpr[19] = (ctx.gpr[7] + static_cast<std::uint32_t>(-12128));
    goto L_08A86D74;
L_08A86BC0:
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11824));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A86BDCu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A86BDCu) goto L_08A86BDC;
    return;
L_08A86BDC:
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-15076), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A86BF8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08A86C34;
L_08A86BF8:
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
L_08A86C14:
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
L_08A86C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (0u | 16u);
        goto L_08A86C70;
    }
    goto L_08A86C70;
L_08A86C70:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (0u | 1000u);
        goto L_08A86C78;
    }
    goto L_08A86C78;
L_08A86C78:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[17] = (0u | 32u);
        goto L_08A86C80;
    }
    goto L_08A86C80;
L_08A86C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(26240)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(26240));
      if (branch_taken) {
          goto L_08A86D4C;
      }
      goto L_08A86C8C;
    }
L_08A86C8C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(26240), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A86CA4u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 143u, 0x08AB1760u>(ctx, &aot_mem) && ctx.pc == 0x08A86CA4u) goto L_08A86CA4;
    return;
L_08A86CA4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A86CB8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A86D74;
L_08A86CB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A86CC8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08A85F60;
L_08A86CC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08A86CDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26320));
    goto L_08A85F60;
L_08A86CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(26240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11804)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A86D24u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8EAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A86D24u) goto L_08A86D24;
    return;
L_08A86D24:
    ctx.gpr[2] = (0u | 1u);
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
L_08A86D4C:
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
L_08A86D74:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (0u | 16u);
        goto L_08A86D7C;
    }
    goto L_08A86D7C;
L_08A86D7C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (0u | 1000u);
        goto L_08A86D84;
    }
    goto L_08A86D84;
L_08A86D84:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (0u | 32u);
        goto L_08A86D8C;
    }
    goto L_08A86D8C;
L_08A86D8C:
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A86EE4;
      }
      goto L_08A86EA4;
    }
L_08A86EA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26240));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_08A86EF0;
    }
    goto L_08A86EE4;
L_08A86EE4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-3));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86EF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86F78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26240));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A86FCC;
      }
      goto L_08A86FB8;
    }
L_08A86FB8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A86FCCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A86FCCu) goto L_08A86FCC;
    return;
L_08A86FCC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86FD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(26240));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A8712C;
      }
      goto L_08A87020;
    }
L_08A87020:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A8712C;
      }
      goto L_08A87058;
    }
L_08A87058:
    ctx.gpr[31] = (0x08A87060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A87060u) goto L_08A87060;
    return;
L_08A87060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87124;
      }
      goto L_08A87078;
    }
L_08A87078:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A87124;
      }
      goto L_08A87084;
    }
L_08A87084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87124;
      }
      goto L_08A87090;
    }
L_08A87090:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A87124;
      }
      goto L_08A87098;
    }
L_08A87098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 0u);
    goto L_08A870A0;
L_08A870A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A870BC;
      }
      goto L_08A870A8;
    }
L_08A870A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A870BC;
      }
      goto L_08A870B0;
    }
L_08A870B0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A870A0;
      }
      goto L_08A870BC;
    }
L_08A870BC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
        goto L_08A870D0;
    }
    goto L_08A870C4;
L_08A870C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A870D4;
      }
      goto L_08A870D0;
    }
L_08A870D0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08A870D4;
L_08A870D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08A870E0;
L_08A870E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87114;
      }
      goto L_08A870EC;
    }
L_08A870EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87114;
      }
      goto L_08A87104;
    }
L_08A87104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A870E0;
      }
      goto L_08A87114;
    }
L_08A87114:
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
        goto L_08A87124;
    }
    goto L_08A8711C;
L_08A8711C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A87124;
      }
      goto L_08A87124;
    }
L_08A87124:
    ctx.gpr[31] = (0x08A8712Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8712Cu) goto L_08A8712C;
    return;
L_08A8712C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A871D8;
      }
      goto L_08A87158;
    }
L_08A87158:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(26240));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (16u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A871D8;
      }
      goto L_08A87198;
    }
L_08A87198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] >> 20u);
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08A871D8;
      }
      goto L_08A871B4;
    }
L_08A871B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A871D8;
      }
      goto L_08A871BC;
    }
L_08A871BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A871D8;
L_08A871D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A871E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(26240));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A87250;
      }
      goto L_08A87224;
    }
L_08A87224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A87254;
    }
    goto L_08A87230;
L_08A87230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A87254;
    }
    goto L_08A87240;
L_08A87240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A87254;
    }
    goto L_08A8724C;
L_08A8724C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A87250;
L_08A87250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A87254;
L_08A87254:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A872A8;
      }
      goto L_08A8725C;
    }
L_08A8725C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (16u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A872A8;
      }
      goto L_08A87294;
    }
L_08A87294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A872C8;
      }
      goto L_08A872A0;
    }
L_08A872A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87370;
      }
      goto L_08A872A8;
    }
L_08A872A8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-3));
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
L_08A872C8:
    ctx.gpr[31] = (0x08A872D0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A85AA0;
L_08A872D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87308;
      }
      goto L_08A872D8;
    }
L_08A872D8:
    ctx.gpr[31] = (0x08A872E0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A86790;
L_08A872E0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A872F8;
      }
      goto L_08A872E8;
    }
L_08A872E8:
    ctx.gpr[31] = (0x08A872F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 675u, 0x08A8F2F0u>(ctx, &aot_mem) && ctx.pc == 0x08A872F0u) goto L_08A872F0;
    return;
L_08A872F0:
    ctx.gpr[31] = (0x08A872F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 423u, 0x08A8DFE8u>(ctx, &aot_mem) && ctx.pc == 0x08A872F8u) goto L_08A872F8;
    return;
L_08A872F8:
    ctx.gpr[31] = (0x08A87300u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A85A40;
L_08A87300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A8732C;
      }
      goto L_08A87308;
    }
L_08A87308:
    ctx.gpr[31] = (0x08A87310u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A85A40;
L_08A87310:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A8732C;
    }
    goto L_08A87318;
L_08A87318:
    ctx.gpr[31] = (0x08A87320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 669u, 0x08A8F270u>(ctx, &aot_mem) && ctx.pc == 0x08A87320u) goto L_08A87320;
    return;
L_08A87320:
    ctx.gpr[31] = (0x08A87328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 429u, 0x08A8E02Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87328u) goto L_08A87328;
    return;
L_08A87328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A8732C;
L_08A8732C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A87390;
      }
      goto L_08A87334;
    }
L_08A87334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A87390;
      }
      goto L_08A87364;
    }
L_08A87364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A872C8;
      }
      goto L_08A87370;
    }
L_08A87370:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
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
L_08A87390:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-3));
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
L_08A873B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A873D8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A884D0u>(ctx, &aot_mem) && ctx.pc == 0x08A873D8u) goto L_08A873D8;
    return;
L_08A873D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (65296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8740Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 39u, 0x08A88684u>(ctx, &aot_mem) && ctx.pc == 0x08A8740Cu) goto L_08A8740C;
    return;
L_08A8740C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A87424;
      }
      goto L_08A87414;
    }
L_08A87414:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A87424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 22u, 0x08A884C8u>(ctx, &aot_mem) && ctx.pc == 0x08A87424u) goto L_08A87424;
    return;
L_08A87424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A87438u);
    ctx.gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A87438u) goto L_08A87438;
    return;
L_08A87438:
    ctx.gpr[31] = (0x08A87440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A87440u) goto L_08A87440;
    return;
L_08A87440:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
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
L_08A87460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87490u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A884D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87490u) goto L_08A87490;
    return;
L_08A87490:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (65296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[31] = (0x08A874C0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 39u, 0x08A88684u>(ctx, &aot_mem) && ctx.pc == 0x08A874C0u) goto L_08A874C0;
    return;
L_08A874C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A874D8;
      }
      goto L_08A874C8;
    }
L_08A874C8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A874D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 22u, 0x08A884C8u>(ctx, &aot_mem) && ctx.pc == 0x08A874D8u) goto L_08A874D8;
    return;
L_08A874D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A874ECu);
    ctx.gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A874ECu) goto L_08A874EC;
    return;
L_08A874EC:
    ctx.gpr[31] = (0x08A874F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A874F4u) goto L_08A874F4;
    return;
L_08A874F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
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
L_08A87518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87540u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A884D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87540u) goto L_08A87540;
    return;
L_08A87540:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (65296u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26240));
    ctx.gpr[6] = (48u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A875A8;
      }
      goto L_08A8757C;
    }
L_08A8757C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08A87580;
L_08A87580:
    if (ctx.gpr[5] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_08A875A0;
    }
    goto L_08A87588;
L_08A87588:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A87598u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 22u, 0x08A884C8u>(ctx, &aot_mem) && ctx.pc == 0x08A87598u) goto L_08A87598;
    return;
L_08A87598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A875A8;
      }
      goto L_08A875A0;
    }
L_08A875A0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A87580;
    }
    goto L_08A875A8;
L_08A875A8:
    ctx.gpr[31] = (0x08A875B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A875B0u) goto L_08A875B0;
    return;
L_08A875B0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
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
L_08A875D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A875E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
    ctx.gpr[22] = (ctx.gpr[8] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87624u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A884D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87624u) goto L_08A87624;
    return;
L_08A87624:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (65296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A87660;
      }
      goto L_08A87650;
    }
L_08A87650:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A87660u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 22u, 0x08A884C8u>(ctx, &aot_mem) && ctx.pc == 0x08A87660u) goto L_08A87660;
    return;
L_08A87660:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
        goto L_08A8768C;
    }
    goto L_08A87670;
L_08A87670:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
        goto L_08A8768C;
    }
    goto L_08A87684;
L_08A87684:
    ctx.gpr[16] = (ctx.gpr[20] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    goto L_08A8768C;
L_08A8768C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A8769Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A8769Cu) goto L_08A8769C;
    return;
L_08A8769C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
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
L_08A876C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87708u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A884D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87708u) goto L_08A87708;
    return;
L_08A87708:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (65296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (80u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A87740;
      }
      goto L_08A87730;
    }
L_08A87730:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A87740u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 22u, 0x08A884C8u>(ctx, &aot_mem) && ctx.pc == 0x08A87740u) goto L_08A87740;
    return;
L_08A87740:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A8775Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A8775Cu) goto L_08A8775C;
    return;
L_08A8775C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
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
L_08A87788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A877ACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A884D0u>(ctx, &aot_mem) && ctx.pc == 0x08A877ACu) goto L_08A877AC;
    return;
L_08A877AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (65296u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (96u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A877EC;
      }
      goto L_08A877D8;
    }
L_08A877D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A87800;
      }
      goto L_08A877EC;
    }
L_08A877EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A877FCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 22u, 0x08A884C8u>(ctx, &aot_mem) && ctx.pc == 0x08A877FCu) goto L_08A877FC;
    return;
L_08A877FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A87800;
L_08A87800:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
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
L_08A87888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(26240));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A878E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A878E4u) goto L_08A878E4;
    return;
L_08A878E4:
    ctx.gpr[31] = (0x08A878ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 425u, 0x08A8A670u>(ctx, &aot_mem) && ctx.pc == 0x08A878ECu) goto L_08A878EC;
    return;
L_08A878EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8790C;
      }
      goto L_08A878F4;
    }
L_08A878F4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11824));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A87908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87908u) goto L_08A87908;
    return;
L_08A87908:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A8790C;
L_08A8790C:
    ctx.gpr[31] = (0x08A87914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 431u, 0x08A8A6E8u>(ctx, &aot_mem) && ctx.pc == 0x08A87914u) goto L_08A87914;
    return;
L_08A87914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A87990;
      }
      goto L_08A87928;
    }
L_08A87928:
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(11824));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A87938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87938u) goto L_08A87938;
    return;
L_08A87938:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A87954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12116));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87954u) goto L_08A87954;
    return;
L_08A87954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87974u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    goto L_08A875E4;
L_08A87974:
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A87988u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30856));
    goto L_08A86F78;
L_08A87988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A879A4;
      }
      goto L_08A87990;
    }
L_08A87990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[31] = (0x08A879A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A879A4u) goto L_08A879A4;
    return;
L_08A879A4:
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
L_08A879C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(26240));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87A08u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87A08u) goto L_08A87A08;
    return;
L_08A87A08:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A87A40;
      }
      goto L_08A87A14;
    }
L_08A87A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A87A28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A87A28u) goto L_08A87A28;
    return;
L_08A87A28:
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
L_08A87A40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87A58u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    goto L_08A875E4;
L_08A87A58:
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A87A6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30856));
    goto L_08A86F78;
L_08A87A6C:
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
L_08A87A84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26240));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87AC4u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A884D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87AC4u) goto L_08A87AC4;
    return;
L_08A87AC4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26312)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A87AF8;
      }
      goto L_08A87AD4;
    }
L_08A87AD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(26312));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A87AF8u);
    ctx.gpr[4] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87AF8u) goto L_08A87AF8;
    return;
L_08A87AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (65296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (144u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A87B48;
      }
      goto L_08A87B20;
    }
L_08A87B20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    goto L_08A87B24;
L_08A87B24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A87B34u);
    ctx.gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08A87B34u) goto L_08A87B34;
    return;
L_08A87B34:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
        goto L_08A87BE4;
    }
    goto L_08A87B3C;
L_08A87B3C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
        goto L_08A87B24;
    }
    goto L_08A87B48;
L_08A87B48:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(11824));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 28u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A87B64u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87B64u) goto L_08A87B64;
    return;
L_08A87B64:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[4] = (0u | 2048u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12116));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A87B94u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87B94u) goto L_08A87B94;
    return;
L_08A87B94:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87BACu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_08A87460;
L_08A87BAC:
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A87BBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31168));
    goto L_08A86F78;
L_08A87BBC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
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
L_08A87BE4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A87BF0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A87BF0u) goto L_08A87BF0;
    return;
L_08A87BF0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
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
L_08A87D80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87D94u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87D94u) goto L_08A87D94;
    return;
L_08A87D94:
    ctx.gpr[31] = (0x08A87D9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A87D9Cu) goto L_08A87D9C;
    return;
L_08A87D9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87DAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(26240));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87DF8u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A884D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87DF8u) goto L_08A87DF8;
    return;
L_08A87DF8:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26312)));
    ctx.gpr[30] = (2222u << 16u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(11824));
      if (branch_taken) {
          goto L_08A87E3C;
      }
      goto L_08A87E14;
    }
L_08A87E14:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(26312));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26312)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A87E3Cu);
    ctx.gpr[4] = (0u | 7u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87E3Cu) goto L_08A87E3C;
    return;
L_08A87E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (65296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (160u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87EBC;
      }
      goto L_08A87E74;
    }
L_08A87E74:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08A87EAC;
    }
    goto L_08A87E7C;
L_08A87E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08A87EAC;
    }
    goto L_08A87E88;
L_08A87E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A87EA8;
      }
      goto L_08A87E98;
    }
L_08A87E98:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A87EBC;
      }
      goto L_08A87EA8;
    }
L_08A87EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08A87EAC;
L_08A87EAC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(280));
      if (branch_taken) {
          goto L_08A87E74;
      }
      goto L_08A87EBC;
    }
L_08A87EBC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87EDC;
      }
      goto L_08A87EC4;
    }
L_08A87EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A87EDC;
      }
      goto L_08A87ED0;
    }
L_08A87ED0:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A87EBC;
      }
      goto L_08A87EDC;
    }
L_08A87EDC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08A87EE8;
      }
      goto L_08A87EE4;
    }
L_08A87EE4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A87EE8;
L_08A87EE8:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
        goto L_08A87EFC;
    }
    goto L_08A87EF0;
L_08A87EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A87F04;
      }
      goto L_08A87EFC;
    }
L_08A87EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A87F04;
L_08A87F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
        goto L_08A87F34;
    }
    goto L_08A87F10;
L_08A87F10:
    ctx.gpr[31] = (0x08A87F18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 50u, 0x08A88788u>(ctx, &aot_mem) && ctx.pc == 0x08A87F18u) goto L_08A87F18;
    return;
L_08A87F18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A87F24u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87F24u) goto L_08A87F24;
    return;
L_08A87F24:
    ctx.gpr[31] = (0x08A87F2Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88958u>(ctx, &aot_mem) && ctx.pc == 0x08A87F2Cu) goto L_08A87F2C;
    return;
L_08A87F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F68;
      }
      goto L_08A87F34;
    }
L_08A87F34:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A87F3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87F3Cu) goto L_08A87F3C;
    return;
L_08A87F3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A87F48u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A87F48u) goto L_08A87F48;
    return;
L_08A87F48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87F58u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08A87518;
L_08A87F58:
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A87F68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32128));
    goto L_08A86F78;
L_08A87F68:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0160(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0160_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_160(Runtime &runtime) {
    runtime.register_generated_unit(160u, 0x08A84000u, 16384u, &recomp_unit_0160, &recomp_unit_0160_entry);
    runtime.register_function(0x08A84000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84034u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8403Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84040u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84070u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84074u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84080u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84084u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84128u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84138u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84140u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84150u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84158u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84168u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84208u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84218u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84224u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84240u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84250u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84278u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84314u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84320u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84330u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8433Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84340u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8436Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84404u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84428u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84450u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8445Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84484u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8451Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8452Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8453Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84554u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84558u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84564u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84570u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84588u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84610u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84634u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84638u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84648u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84650u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8467Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8470Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84724u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84730u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84744u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8474Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8476Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84780u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84784u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84800u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84808u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84810u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84818u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8488Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84900u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84954u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84980u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84990u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84994u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85010u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85018u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85028u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85030u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85044u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8504Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85054u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8505Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85064u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8506Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8515Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85168u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85170u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85178u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85180u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8518Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85198u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85200u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85258u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85274u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85304u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8530Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85318u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85324u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85334u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85354u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85364u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8538Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85400u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85418u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85438u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85444u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8545Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8546Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85474u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85490u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85494u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85514u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85530u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85538u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85554u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8555Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85570u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85574u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85584u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85600u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85608u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85618u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85620u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85634u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8563Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85644u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8564Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85654u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8565Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85674u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85690u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85694u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85734u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85748u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85794u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8581Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8582Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8589Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85904u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8590Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85914u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85918u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85930u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8593Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8595Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8598Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8599Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85ABCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85ED0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86038u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8603Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86044u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86064u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86070u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86084u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86088u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86090u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8609Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86118u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86120u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8612Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86130u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86140u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86158u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86160u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86174u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8617Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86194u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86214u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86224u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86244u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86250u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8625Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86280u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86304u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86310u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8631Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86320u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8632Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86348u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8637Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86388u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86410u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86420u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86428u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8642Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86434u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86508u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8652Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86534u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86540u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86690u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86704u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86708u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86714u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8671Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8673Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86790u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8680Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86824u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86828u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86834u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8698Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8699Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87020u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87058u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87060u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87078u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87084u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87090u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87098u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87104u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87114u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8711Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87124u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8712Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87158u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87198u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87224u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87230u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87240u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8724Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87250u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87254u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8725Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87294u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87300u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87308u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87310u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87318u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87320u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87328u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8732Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87334u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87364u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87370u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87390u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8740Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87414u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87424u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87438u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87440u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87460u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87490u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87518u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87540u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8757Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87580u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87588u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87598u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87624u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87650u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87660u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87684u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8768Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8769Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87708u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87730u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87740u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8775Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87788u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87800u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87888u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87908u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8790Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87914u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87928u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87938u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87954u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87988u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87990u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87ED0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F68u, &recomp_unit_0160, "recomp_unit_0160");
}
} // namespace psprecomp

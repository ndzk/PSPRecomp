#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0095[4093] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0,
    0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 116, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 137, 0, 138, 0, 139, 140, 0, 0, 0, 141, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0,
    159, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 170, 0, 0, 0, 171, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0,
    0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217,
    0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0,
    243, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 250, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 256, 0, 257, 0,
    258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 272, 0, 273, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0,
    276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0,
    0, 0, 0, 290, 291, 0, 292, 0, 0, 0, 0, 293, 294, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 305,
    0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 311, 0, 0, 0, 312, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318,
    0, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0,
    327, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0,
    365, 0, 366, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0,
    418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0,
    440, 0, 441, 0, 442, 0, 0, 443, 0, 444, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    0, 451, 0, 0, 0, 0, 452, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0,
    0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0,
    0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0,
    0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 481, 0, 482, 0, 0, 483, 0, 484, 0, 485, 0,
    0, 0, 0, 0, 0, 0, 486, 487, 0, 488, 0, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 493, 0, 494, 0, 0, 495, 0,
    496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 499, 0, 500, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 505, 0, 0,
    0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 512, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 517, 0, 0, 518, 0,
    0, 519, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 0,
    530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 538, 539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 545, 0,
    546, 0, 547, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 0, 551, 0, 0, 552, 0, 553, 554, 0, 0, 555, 0, 556, 0, 557, 0, 0, 558, 0,
    559, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0,
    564, 0, 0, 0, 0, 0, 565, 566, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 0, 0, 572, 0, 0, 573, 0,
    574, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0,
    588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 606,
    0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0,
    0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 619, 0, 620, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 626,
    0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0,
    0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 640, 0, 0, 641, 0, 0, 642, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 646, 0, 0, 647, 0, 0, 648, 649, 0, 0, 650, 0, 0, 651, 0, 0,
    652, 0, 0, 0, 653, 0, 654, 655, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0,
    0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0,
    0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 672, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0,
    0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 683, 0, 684, 0, 0, 685, 0,
    686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 690, 0, 691, 0, 0, 692, 0, 693, 0, 0,
    0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 697, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 701, 0,
    0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 704, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 712, 0, 0, 0, 0, 0, 713, 0, 0,
    0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0,
    0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 722, 0, 0, 723, 0, 0, 724, 725, 0, 0, 726, 0, 0, 727, 728, 0, 0, 729, 0, 0, 730, 731,
    0, 0, 732, 0, 0, 733, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737,
};
void recomp_unit_0095_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08980000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0095[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08980000;
    case 2u: goto L_08980008;
    case 3u: goto L_08980010;
    case 4u: goto L_08980018;
    case 5u: goto L_08980020;
    case 6u: goto L_0898009C;
    case 7u: goto L_089800B8;
    case 8u: goto L_089800C8;
    case 9u: goto L_089800D0;
    case 10u: goto L_089800F4;
    case 11u: goto L_08980104;
    case 12u: goto L_0898014C;
    case 13u: goto L_08980170;
    case 14u: goto L_08980184;
    case 15u: goto L_08980198;
    case 16u: goto L_089801AC;
    case 17u: goto L_089801C0;
    case 18u: goto L_089801D4;
    case 19u: goto L_089801E8;
    case 20u: goto L_089801FC;
    case 21u: goto L_08980210;
    case 22u: goto L_08980224;
    case 23u: goto L_08980238;
    case 24u: goto L_0898024C;
    case 25u: goto L_08980260;
    case 26u: goto L_08980274;
    case 27u: goto L_08980288;
    case 28u: goto L_089802B4;
    case 29u: goto L_089802C8;
    case 30u: goto L_089802DC;
    case 31u: goto L_089802F0;
    case 32u: goto L_08980304;
    case 33u: goto L_08980318;
    case 34u: goto L_0898032C;
    case 35u: goto L_08980340;
    case 36u: goto L_08980524;
    case 37u: goto L_08980534;
    case 38u: goto L_08980540;
    case 39u: goto L_089805A0;
    case 40u: goto L_089805F4;
    case 41u: goto L_089805FC;
    case 42u: goto L_08980614;
    case 43u: goto L_089806BC;
    case 44u: goto L_089806D4;
    case 45u: goto L_089806F8;
    case 46u: goto L_08980700;
    case 47u: goto L_08980710;
    case 48u: goto L_08980718;
    case 49u: goto L_08980770;
    case 50u: goto L_08980778;
    case 51u: goto L_08980788;
    case 52u: goto L_0898079C;
    case 53u: goto L_089807A4;
    case 54u: goto L_089807B0;
    case 55u: goto L_089807BC;
    case 56u: goto L_089807D4;
    case 57u: goto L_08980880;
    case 58u: goto L_08980898;
    case 59u: goto L_08980918;
    case 60u: goto L_0898091C;
    case 61u: goto L_08980934;
    case 62u: goto L_08980968;
    case 63u: goto L_089809A8;
    case 64u: goto L_089809B4;
    case 65u: goto L_089809D8;
    case 66u: goto L_089809F8;
    case 67u: goto L_08980A00;
    case 68u: goto L_08980A08;
    case 69u: goto L_08980A38;
    case 70u: goto L_08980A40;
    case 71u: goto L_08980A48;
    case 72u: goto L_08980A58;
    case 73u: goto L_08980A60;
    case 74u: goto L_08980A70;
    case 75u: goto L_08980A74;
    case 76u: goto L_08980A98;
    case 77u: goto L_08980AA4;
    case 78u: goto L_08980AD4;
    case 79u: goto L_08980AFC;
    case 80u: goto L_08980B08;
    case 81u: goto L_08980B14;
    case 82u: goto L_08980B24;
    case 83u: goto L_08980B54;
    case 84u: goto L_08980B64;
    case 85u: goto L_08980B78;
    case 86u: goto L_08980B8C;
    case 87u: goto L_08980BA0;
    case 88u: goto L_08980BB4;
    case 89u: goto L_08980BC8;
    case 90u: goto L_08980BDC;
    case 91u: goto L_08980BF0;
    case 92u: goto L_08980C04;
    case 93u: goto L_08980C18;
    case 94u: goto L_08980C2C;
    case 95u: goto L_08980C40;
    case 96u: goto L_08980C54;
    case 97u: goto L_08980C68;
    case 98u: goto L_08980C90;
    case 99u: goto L_08980CA4;
    case 100u: goto L_08980CB8;
    case 101u: goto L_08980CCC;
    case 102u: goto L_08980CE0;
    case 103u: goto L_08980CF4;
    case 104u: goto L_08980D08;
    case 105u: goto L_08980D1C;
    case 106u: goto L_08980D2C;
    case 107u: goto L_08980D3C;
    case 108u: goto L_08980D6C;
    case 109u: goto L_08980D90;
    case 110u: goto L_08980DC0;
    case 111u: goto L_08980DE0;
    case 112u: goto L_08980E24;
    case 113u: goto L_08980E3C;
    case 114u: goto L_08980E48;
    case 115u: goto L_08980E60;
    case 116u: goto L_08980E64;
    case 117u: goto L_08980E70;
    case 118u: goto L_08980E9C;
    case 119u: goto L_08980EDC;
    case 120u: goto L_08980EF8;
    case 121u: goto L_08980EFC;
    case 122u: goto L_08980F30;
    case 123u: goto L_08980F40;
    case 124u: goto L_08980F48;
    case 125u: goto L_08980F5C;
    case 126u: goto L_08980FF8;
    case 127u: goto L_08981028;
    case 128u: goto L_08981030;
    case 129u: goto L_08981038;
    case 130u: goto L_08981044;
    case 131u: goto L_08981054;
    case 132u: goto L_08981060;
    case 133u: goto L_08981068;
    case 134u: goto L_08981070;
    case 135u: goto L_089810C0;
    case 136u: goto L_089810CC;
    case 137u: goto L_089810D0;
    case 138u: goto L_089810D8;
    case 139u: goto L_089810E0;
    case 140u: goto L_089810E4;
    case 141u: goto L_089810F4;
    case 142u: goto L_08981100;
    case 143u: goto L_08981124;
    case 144u: goto L_08981134;
    case 145u: goto L_0898113C;
    case 146u: goto L_0898114C;
    case 147u: goto L_0898115C;
    case 148u: goto L_08981168;
    case 149u: goto L_08981178;
    case 150u: goto L_089811A0;
    case 151u: goto L_089811A8;
    case 152u: goto L_089811B4;
    case 153u: goto L_089811C8;
    case 154u: goto L_089811D4;
    case 155u: goto L_089811E0;
    case 156u: goto L_089811E8;
    case 157u: goto L_089811F0;
    case 158u: goto L_089811F8;
    case 159u: goto L_08981200;
    case 160u: goto L_08981204;
    case 161u: goto L_08981214;
    case 162u: goto L_08981220;
    case 163u: goto L_08981240;
    case 164u: goto L_08981270;
    case 165u: goto L_08981284;
    case 166u: goto L_089812A4;
    case 167u: goto L_089812E0;
    case 168u: goto L_089812F0;
    case 169u: goto L_08981304;
    case 170u: goto L_0898130C;
    case 171u: goto L_0898131C;
    case 172u: goto L_08981320;
    case 173u: goto L_08981340;
    case 174u: goto L_0898136C;
    case 175u: goto L_0898139C;
    case 176u: goto L_089813A4;
    case 177u: goto L_089813B4;
    case 178u: goto L_089813F8;
    case 179u: goto L_08981424;
    case 180u: goto L_08981434;
    case 181u: goto L_08981448;
    case 182u: goto L_08981470;
    case 183u: goto L_08981478;
    case 184u: goto L_08981484;
    case 185u: goto L_0898148C;
    case 186u: goto L_089814A8;
    case 187u: goto L_089814D8;
    case 188u: goto L_089814E0;
    case 189u: goto L_08981558;
    case 190u: goto L_08981568;
    case 191u: goto L_08981574;
    case 192u: goto L_08981598;
    case 193u: goto L_089815B8;
    case 194u: goto L_089815C8;
    case 195u: goto L_089815D4;
    case 196u: goto L_089815F8;
    case 197u: goto L_089816D0;
    case 198u: goto L_089816F0;
    case 199u: goto L_08981714;
    case 200u: goto L_0898173C;
    case 201u: goto L_0898175C;
    case 202u: goto L_0898177C;
    case 203u: goto L_089817B8;
    case 204u: goto L_089817C4;
    case 205u: goto L_089817D0;
    case 206u: goto L_089817D8;
    case 207u: goto L_089817F0;
    case 208u: goto L_089817F8;
    case 209u: goto L_08981820;
    case 210u: goto L_08981824;
    case 211u: goto L_08981830;
    case 212u: goto L_08981838;
    case 213u: goto L_08981854;
    case 214u: goto L_0898185C;
    case 215u: goto L_08981864;
    case 216u: goto L_08981870;
    case 217u: goto L_0898187C;
    case 218u: goto L_08981888;
    case 219u: goto L_08981890;
    case 220u: goto L_089818B8;
    case 221u: goto L_089818CC;
    case 222u: goto L_089818D4;
    case 223u: goto L_089818DC;
    case 224u: goto L_08981974;
    case 225u: goto L_089819A0;
    case 226u: goto L_089819A8;
    case 227u: goto L_089819B0;
    case 228u: goto L_089819C4;
    case 229u: goto L_089819DC;
    case 230u: goto L_08981A04;
    case 231u: goto L_08981A20;
    case 232u: goto L_08981A28;
    case 233u: goto L_08981A30;
    case 234u: goto L_08981A44;
    case 235u: goto L_08981A4C;
    case 236u: goto L_08981A60;
    case 237u: goto L_08981A7C;
    case 238u: goto L_08981A98;
    case 239u: goto L_08981ABC;
    case 240u: goto L_08981ACC;
    case 241u: goto L_08981ADC;
    case 242u: goto L_08981AEC;
    case 243u: goto L_08981B00;
    case 244u: goto L_08981B08;
    case 245u: goto L_08981B14;
    case 246u: goto L_08981B3C;
    case 247u: goto L_08981B60;
    case 248u: goto L_08981B74;
    case 249u: goto L_08981BA0;
    case 250u: goto L_08981BA4;
    case 251u: goto L_08981BAC;
    case 252u: goto L_08981BB8;
    case 253u: goto L_08981BCC;
    case 254u: goto L_08981BE0;
    case 255u: goto L_08981BEC;
    case 256u: goto L_08981BF0;
    case 257u: goto L_08981BF8;
    case 258u: goto L_08981C00;
    case 259u: goto L_08981C0C;
    case 260u: goto L_08981C20;
    case 261u: goto L_08981C30;
    case 262u: goto L_08981C3C;
    case 263u: goto L_08981C40;
    case 264u: goto L_08981C48;
    case 265u: goto L_08981C68;
    case 266u: goto L_08981C84;
    case 267u: goto L_08981C8C;
    case 268u: goto L_08981C98;
    case 269u: goto L_08981CA0;
    case 270u: goto L_08981CC0;
    case 271u: goto L_08981CC8;
    case 272u: goto L_08981CCC;
    case 273u: goto L_08981CD4;
    case 274u: goto L_08981CE0;
    case 275u: goto L_08981CE8;
    case 276u: goto L_08981D00;
    case 277u: goto L_08981D08;
    case 278u: goto L_08981D14;
    case 279u: goto L_08981D1C;
    case 280u: goto L_08981D34;
    case 281u: goto L_08981D7C;
    case 282u: goto L_08981D8C;
    case 283u: goto L_08981D9C;
    case 284u: goto L_08981DA4;
    case 285u: goto L_08981DB4;
    case 286u: goto L_08981DC8;
    case 287u: goto L_08981DDC;
    case 288u: goto L_08981DF0;
    case 289u: goto L_08981DF8;
    case 290u: goto L_08981E0C;
    case 291u: goto L_08981E10;
    case 292u: goto L_08981E18;
    case 293u: goto L_08981E2C;
    case 294u: goto L_08981E30;
    case 295u: goto L_08981E3C;
    case 296u: goto L_08981E44;
    case 297u: goto L_08981E4C;
    case 298u: goto L_08981E5C;
    case 299u: goto L_08981E6C;
    case 300u: goto L_08981E98;
    case 301u: goto L_08981EC4;
    case 302u: goto L_08981EDC;
    case 303u: goto L_08981EE8;
    case 304u: goto L_08981EF8;
    case 305u: goto L_08981EFC;
    case 306u: goto L_08981F04;
    case 307u: goto L_08981F14;
    case 308u: goto L_08981F24;
    case 309u: goto L_08981F40;
    case 310u: goto L_08981F78;
    case 311u: goto L_08981F84;
    case 312u: goto L_08981F94;
    case 313u: goto L_08981F98;
    case 314u: goto L_08981FAC;
    case 315u: goto L_08981FB8;
    case 316u: goto L_08981FE0;
    case 317u: goto L_08981FF0;
    case 318u: goto L_08981FFC;
    case 319u: goto L_0898200C;
    case 320u: goto L_0898201C;
    case 321u: goto L_08982024;
    case 322u: goto L_08982030;
    case 323u: goto L_08982048;
    case 324u: goto L_08982050;
    case 325u: goto L_08982064;
    case 326u: goto L_08982074;
    case 327u: goto L_08982080;
    case 328u: goto L_08982088;
    case 329u: goto L_08982090;
    case 330u: goto L_089820A8;
    case 331u: goto L_089820B0;
    case 332u: goto L_089820C8;
    case 333u: goto L_089820D0;
    case 334u: goto L_089820E0;
    case 335u: goto L_089820EC;
    case 336u: goto L_089820F4;
    case 337u: goto L_08982100;
    case 338u: goto L_08982140;
    case 339u: goto L_08982184;
    case 340u: goto L_08982198;
    case 341u: goto L_089821A0;
    case 342u: goto L_089821A8;
    case 343u: goto L_089821B8;
    case 344u: goto L_089821C8;
    case 345u: goto L_089821D0;
    case 346u: goto L_089821DC;
    case 347u: goto L_089821E4;
    case 348u: goto L_089821EC;
    case 349u: goto L_08982200;
    case 350u: goto L_08982224;
    case 351u: goto L_0898236C;
    case 352u: goto L_0898238C;
    case 353u: goto L_089823A8;
    case 354u: goto L_089823C8;
    case 355u: goto L_089823E4;
    case 356u: goto L_08982404;
    case 357u: goto L_08982420;
    case 358u: goto L_08982440;
    case 359u: goto L_0898245C;
    case 360u: goto L_0898247C;
    case 361u: goto L_08982498;
    case 362u: goto L_089824B8;
    case 363u: goto L_089824C4;
    case 364u: goto L_089824F4;
    case 365u: goto L_08982500;
    case 366u: goto L_08982508;
    case 367u: goto L_08982510;
    case 368u: goto L_08982520;
    case 369u: goto L_08982528;
    case 370u: goto L_08982534;
    case 371u: goto L_0898254C;
    case 372u: goto L_08982554;
    case 373u: goto L_0898255C;
    case 374u: goto L_08982568;
    case 375u: goto L_08982574;
    case 376u: goto L_089825FC;
    case 377u: goto L_0898261C;
    case 378u: goto L_08982628;
    case 379u: goto L_08982630;
    case 380u: goto L_0898263C;
    case 381u: goto L_0898264C;
    case 382u: goto L_08982654;
    case 383u: goto L_08982668;
    case 384u: goto L_0898272C;
    case 385u: goto L_08982734;
    case 386u: goto L_08982744;
    case 387u: goto L_08982750;
    case 388u: goto L_08982758;
    case 389u: goto L_08982760;
    case 390u: goto L_08982768;
    case 391u: goto L_08982798;
    case 392u: goto L_089827A0;
    case 393u: goto L_089827B4;
    case 394u: goto L_089827C8;
    case 395u: goto L_089827DC;
    case 396u: goto L_089827E4;
    case 397u: goto L_089827F8;
    case 398u: goto L_0898280C;
    case 399u: goto L_0898284C;
    case 400u: goto L_08982854;
    case 401u: goto L_08982868;
    case 402u: goto L_0898287C;
    case 403u: goto L_089828B0;
    case 404u: goto L_089828B8;
    case 405u: goto L_089828CC;
    case 406u: goto L_089828E0;
    case 407u: goto L_08982928;
    case 408u: goto L_08982930;
    case 409u: goto L_08982944;
    case 410u: goto L_08982958;
    case 411u: goto L_08982978;
    case 412u: goto L_08982984;
    case 413u: goto L_089829A8;
    case 414u: goto L_089829BC;
    case 415u: goto L_089829E8;
    case 416u: goto L_089829F0;
    case 417u: goto L_089829F8;
    case 418u: goto L_08982A00;
    case 419u: goto L_08982A18;
    case 420u: goto L_08982A30;
    case 421u: goto L_08982A50;
    case 422u: goto L_08982A5C;
    case 423u: goto L_08982A90;
    case 424u: goto L_08982AA4;
    case 425u: goto L_08982AC4;
    case 426u: goto L_08982AD0;
    case 427u: goto L_08982AF8;
    case 428u: goto L_08982B0C;
    case 429u: goto L_08982B2C;
    case 430u: goto L_08982B38;
    case 431u: goto L_08982B70;
    case 432u: goto L_08982B84;
    case 433u: goto L_08982BB4;
    case 434u: goto L_08982BBC;
    case 435u: goto L_08982BCC;
    case 436u: goto L_08982BD4;
    case 437u: goto L_08982BE0;
    case 438u: goto L_08982BEC;
    case 439u: goto L_08982BF4;
    case 440u: goto L_08982C00;
    case 441u: goto L_08982C08;
    case 442u: goto L_08982C10;
    case 443u: goto L_08982C1C;
    case 444u: goto L_08982C24;
    case 445u: goto L_08982C2C;
    case 446u: goto L_08982C38;
    case 447u: goto L_08982C40;
    case 448u: goto L_08982C48;
    case 449u: goto L_08982C54;
    case 450u: goto L_08982C64;
    case 451u: goto L_08982C84;
    case 452u: goto L_08982C98;
    case 453u: goto L_08982C9C;
    case 454u: goto L_08982CAC;
    case 455u: goto L_08982CB8;
    case 456u: goto L_08982CC4;
    case 457u: goto L_08982CD0;
    case 458u: goto L_08982CDC;
    case 459u: goto L_08982CEC;
    case 460u: goto L_08982CF4;
    case 461u: goto L_08982D04;
    case 462u: goto L_08982D14;
    case 463u: goto L_08982D38;
    case 464u: goto L_08982D54;
    case 465u: goto L_08982D5C;
    case 466u: goto L_08982D70;
    case 467u: goto L_08982D84;
    case 468u: goto L_08982D8C;
    case 469u: goto L_08982DA4;
    case 470u: goto L_08982DAC;
    case 471u: goto L_08982DCC;
    case 472u: goto L_08982DD4;
    case 473u: goto L_08982DDC;
    case 474u: goto L_08982DEC;
    case 475u: goto L_08982DF4;
    case 476u: goto L_08982E14;
    case 477u: goto L_08982E20;
    case 478u: goto L_08982E28;
    case 479u: goto L_08982E30;
    case 480u: goto L_08982E50;
    case 481u: goto L_08982E54;
    case 482u: goto L_08982E5C;
    case 483u: goto L_08982E68;
    case 484u: goto L_08982E70;
    case 485u: goto L_08982E78;
    case 486u: goto L_08982E98;
    case 487u: goto L_08982E9C;
    case 488u: goto L_08982EA4;
    case 489u: goto L_08982EB0;
    case 490u: goto L_08982EB8;
    case 491u: goto L_08982EC0;
    case 492u: goto L_08982EE0;
    case 493u: goto L_08982EE4;
    case 494u: goto L_08982EEC;
    case 495u: goto L_08982EF8;
    case 496u: goto L_08982F00;
    case 497u: goto L_08982F08;
    case 498u: goto L_08982F28;
    case 499u: goto L_08982F2C;
    case 500u: goto L_08982F34;
    case 501u: goto L_08982F40;
    case 502u: goto L_08982F48;
    case 503u: goto L_08982F50;
    case 504u: goto L_08982F70;
    case 505u: goto L_08982F74;
    case 506u: goto L_08982F84;
    case 507u: goto L_08982FA4;
    case 508u: goto L_08982FD8;
    case 509u: goto L_08982FE4;
    case 510u: goto L_08982FF4;
    case 511u: goto L_0898302C;
    case 512u: goto L_08983030;
    case 513u: goto L_08983038;
    case 514u: goto L_0898304C;
    case 515u: goto L_08983058;
    case 516u: goto L_08983060;
    case 517u: goto L_0898306C;
    case 518u: goto L_08983078;
    case 519u: goto L_08983084;
    case 520u: goto L_0898308C;
    case 521u: goto L_08983098;
    case 522u: goto L_089830A4;
    case 523u: goto L_089830AC;
    case 524u: goto L_089830B8;
    case 525u: goto L_089830C4;
    case 526u: goto L_089830CC;
    case 527u: goto L_089830D8;
    case 528u: goto L_089830E4;
    case 529u: goto L_089830F4;
    case 530u: goto L_08983100;
    case 531u: goto L_08983110;
    case 532u: goto L_08983134;
    case 533u: goto L_089831D8;
    case 534u: goto L_08983264;
    case 535u: goto L_08983270;
    case 536u: goto L_08983298;
    case 537u: goto L_089832A4;
    case 538u: goto L_089832B4;
    case 539u: goto L_089832B8;
    case 540u: goto L_089832C4;
    case 541u: goto L_089832D0;
    case 542u: goto L_089832DC;
    case 543u: goto L_089832E4;
    case 544u: goto L_089832EC;
    case 545u: goto L_089832F8;
    case 546u: goto L_08983300;
    case 547u: goto L_08983308;
    case 548u: goto L_08983314;
    case 549u: goto L_0898331C;
    case 550u: goto L_08983324;
    case 551u: goto L_08983338;
    case 552u: goto L_08983344;
    case 553u: goto L_0898334C;
    case 554u: goto L_08983350;
    case 555u: goto L_0898335C;
    case 556u: goto L_08983364;
    case 557u: goto L_0898336C;
    case 558u: goto L_08983378;
    case 559u: goto L_08983380;
    case 560u: goto L_08983384;
    case 561u: goto L_08983390;
    case 562u: goto L_089833B0;
    case 563u: goto L_089833E8;
    case 564u: goto L_08983400;
    case 565u: goto L_08983418;
    case 566u: goto L_0898341C;
    case 567u: goto L_08983424;
    case 568u: goto L_08983438;
    case 569u: goto L_08983448;
    case 570u: goto L_08983450;
    case 571u: goto L_0898345C;
    case 572u: goto L_0898346C;
    case 573u: goto L_08983478;
    case 574u: goto L_08983480;
    case 575u: goto L_08983490;
    case 576u: goto L_0898349C;
    case 577u: goto L_089834A4;
    case 578u: goto L_089834B0;
    case 579u: goto L_089834C4;
    case 580u: goto L_089834CC;
    case 581u: goto L_089834DC;
    case 582u: goto L_089834E4;
    case 583u: goto L_0898350C;
    case 584u: goto L_08983544;
    case 585u: goto L_0898354C;
    case 586u: goto L_08983558;
    case 587u: goto L_08983570;
    case 588u: goto L_08983580;
    case 589u: goto L_0898358C;
    case 590u: goto L_08983598;
    case 591u: goto L_089835A4;
    case 592u: goto L_089835B0;
    case 593u: goto L_089835C0;
    case 594u: goto L_089835CC;
    case 595u: goto L_089835D4;
    case 596u: goto L_089835E0;
    case 597u: goto L_089835EC;
    case 598u: goto L_08983628;
    case 599u: goto L_08983630;
    case 600u: goto L_0898363C;
    case 601u: goto L_08983648;
    case 602u: goto L_08983650;
    case 603u: goto L_0898365C;
    case 604u: goto L_08983668;
    case 605u: goto L_08983670;
    case 606u: goto L_0898367C;
    case 607u: goto L_08983688;
    case 608u: goto L_08983698;
    case 609u: goto L_089836A4;
    case 610u: goto L_089836B4;
    case 611u: goto L_089836BC;
    case 612u: goto L_089836CC;
    case 613u: goto L_08983708;
    case 614u: goto L_08983738;
    case 615u: goto L_08983770;
    case 616u: goto L_08983778;
    case 617u: goto L_08983784;
    case 618u: goto L_089837A8;
    case 619u: goto L_089837AC;
    case 620u: goto L_089837B4;
    case 621u: goto L_089837C4;
    case 622u: goto L_089837D0;
    case 623u: goto L_089837DC;
    case 624u: goto L_089837E8;
    case 625u: goto L_089837F4;
    case 626u: goto L_089837FC;
    case 627u: goto L_08983804;
    case 628u: goto L_0898381C;
    case 629u: goto L_08983830;
    case 630u: goto L_08983838;
    case 631u: goto L_08983844;
    case 632u: goto L_0898384C;
    case 633u: goto L_08983864;
    case 634u: goto L_08983874;
    case 635u: goto L_0898388C;
    case 636u: goto L_0898389C;
    case 637u: goto L_089838B4;
    case 638u: goto L_089838C4;
    case 639u: goto L_089838D4;
    case 640u: goto L_089838D8;
    case 641u: goto L_089838E4;
    case 642u: goto L_089838F0;
    case 643u: goto L_08983924;
    case 644u: goto L_08983930;
    case 645u: goto L_0898393C;
    case 646u: goto L_08983940;
    case 647u: goto L_0898394C;
    case 648u: goto L_08983958;
    case 649u: goto L_0898395C;
    case 650u: goto L_08983968;
    case 651u: goto L_08983974;
    case 652u: goto L_08983980;
    case 653u: goto L_08983990;
    case 654u: goto L_08983998;
    case 655u: goto L_0898399C;
    case 656u: goto L_089839A4;
    case 657u: goto L_089839B4;
    case 658u: goto L_089839E8;
    case 659u: goto L_08983A14;
    case 660u: goto L_08983A60;
    case 661u: goto L_08983A6C;
    case 662u: goto L_08983A88;
    case 663u: goto L_08983A90;
    case 664u: goto L_08983AC4;
    case 665u: goto L_08983AE4;
    case 666u: goto L_08983AF0;
    case 667u: goto L_08983B08;
    case 668u: goto L_08983B10;
    case 669u: goto L_08983B44;
    case 670u: goto L_08983B64;
    case 671u: goto L_08983B70;
    case 672u: goto L_08983B78;
    case 673u: goto L_08983BA8;
    case 674u: goto L_08983BB0;
    case 675u: goto L_08983BB4;
    case 676u: goto L_08983BC4;
    case 677u: goto L_08983BF8;
    case 678u: goto L_08983C04;
    case 679u: goto L_08983C0C;
    case 680u: goto L_08983C1C;
    case 681u: goto L_08983C2C;
    case 682u: goto L_08983C60;
    case 683u: goto L_08983C64;
    case 684u: goto L_08983C6C;
    case 685u: goto L_08983C78;
    case 686u: goto L_08983C80;
    case 687u: goto L_08983C90;
    case 688u: goto L_08983CA0;
    case 689u: goto L_08983CD4;
    case 690u: goto L_08983CD8;
    case 691u: goto L_08983CE0;
    case 692u: goto L_08983CEC;
    case 693u: goto L_08983CF4;
    case 694u: goto L_08983D04;
    case 695u: goto L_08983D14;
    case 696u: goto L_08983D48;
    case 697u: goto L_08983D4C;
    case 698u: goto L_08983D54;
    case 699u: goto L_08983D60;
    case 700u: goto L_08983D68;
    case 701u: goto L_08983D78;
    case 702u: goto L_08983D88;
    case 703u: goto L_08983DBC;
    case 704u: goto L_08983DC0;
    case 705u: goto L_08983DC8;
    case 706u: goto L_08983DD0;
    case 707u: goto L_08983DD8;
    case 708u: goto L_08983DE4;
    case 709u: goto L_08983DF4;
    case 710u: goto L_08983E28;
    case 711u: goto L_08983E58;
    case 712u: goto L_08983E5C;
    case 713u: goto L_08983E74;
    case 714u: goto L_08983E8C;
    case 715u: goto L_08983EA4;
    case 716u: goto L_08983EBC;
    case 717u: goto L_08983ECC;
    case 718u: goto L_08983EE4;
    case 719u: goto L_08983EF4;
    case 720u: goto L_08983F14;
    case 721u: goto L_08983F24;
    case 722u: goto L_08983F28;
    case 723u: goto L_08983F34;
    case 724u: goto L_08983F40;
    case 725u: goto L_08983F44;
    case 726u: goto L_08983F50;
    case 727u: goto L_08983F5C;
    case 728u: goto L_08983F60;
    case 729u: goto L_08983F6C;
    case 730u: goto L_08983F78;
    case 731u: goto L_08983F7C;
    case 732u: goto L_08983F88;
    case 733u: goto L_08983F94;
    case 734u: goto L_08983F98;
    case 735u: goto L_08983FC0;
    case 736u: goto L_08983FDC;
    case 737u: goto L_08983FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08980000:
    ctx.gpr[31] = (0x08980008u);
    // nop
    ctx.pc = 0x08AB46DCu;
    return;
L_08980008:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 578u, 0x0897FFC4u>(ctx, &aot_mem); return;
L_08980010:
    ctx.gpr[31] = (0x08980018u);
    // nop
    ctx.pc = 0x08AB46E4u;
    return;
L_08980018:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 578u, 0x0897FFC4u>(ctx, &aot_mem); return;
L_08980020:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8192));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898009C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26784)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[4] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_089800C8;
      }
      goto L_089800B8;
    }
L_089800B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089800C8:
    ctx.gpr[31] = (0x089800D0u);
    // nop
    ctx.pc = 0x08AB46CCu;
    return;
L_089800D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26784), 0u);
    goto L_089800B8;
L_089800F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08980104u);
    // nop
    ctx.pc = 0x08AB453Cu;
    return;
L_08980104:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898014C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08980340;
      }
      goto L_08980170;
    }
L_08980170:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980184u);
    ctx.gpr[4] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980184u) goto L_08980184;
    return;
L_08980184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980198u);
    ctx.gpr[4] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980198u) goto L_08980198;
    return;
L_08980198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089801ACu);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089801ACu) goto L_089801AC;
    return;
L_089801AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089801C0u);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089801C0u) goto L_089801C0;
    return;
L_089801C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089801D4u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089801D4u) goto L_089801D4;
    return;
L_089801D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089801E8u);
    ctx.gpr[4] = (0u | 9u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089801E8u) goto L_089801E8;
    return;
L_089801E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089801FCu);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089801FCu) goto L_089801FC;
    return;
L_089801FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980210u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980210u) goto L_08980210;
    return;
L_08980210:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980224u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980224u) goto L_08980224;
    return;
L_08980224:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980238u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980238u) goto L_08980238;
    return;
L_08980238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0898024Cu);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898024Cu) goto L_0898024C;
    return;
L_0898024C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980260u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980260u) goto L_08980260;
    return;
L_08980260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980274u);
    ctx.gpr[5] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980274u) goto L_08980274;
    return;
L_08980274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980288u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980288u) goto L_08980288;
    return;
L_08980288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x089802B4u);
    ctx.gpr[4] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089802B4u) goto L_089802B4;
    return;
L_089802B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089802C8u);
    ctx.gpr[4] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089802C8u) goto L_089802C8;
    return;
L_089802C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089802DCu);
    ctx.gpr[4] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089802DCu) goto L_089802DC;
    return;
L_089802DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089802F0u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089802F0u) goto L_089802F0;
    return;
L_089802F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980304u);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980304u) goto L_08980304;
    return;
L_08980304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980318u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980318u) goto L_08980318;
    return;
L_08980318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0898032Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898032Cu) goto L_0898032C;
    return;
L_0898032C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980340u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980340u) goto L_08980340;
    return;
L_08980340:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08980534u);
    // nop
    goto L_08980968;
L_08980534:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[11] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x089805A0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08980D6C;
L_089805A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_089805FC;
      }
      goto L_089805F4;
    }
L_089805F4:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-26716), static_cast<std::uint8_t>(0u));
    goto L_089805FC;
L_089805FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08980934;
      }
      goto L_08980614;
    }
L_08980614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[3]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[8]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(6));
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[25] = (ctx.gpr[31] + static_cast<std::uint32_t>(24));
    ctx.gpr[11] = (ctx.gpr[31] + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = (ctx.gpr[31] + static_cast<std::uint32_t>(72));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_089806BC;
L_089806BC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-26716))))));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0898091C;
    }
    goto L_089806D4;
L_089806D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[14] = (ctx.gpr[15] | 0u);
      if (branch_taken) {
          goto L_08980918;
      }
      goto L_089806F8;
    }
L_089806F8:
    if (static_cast<std::int32_t>(ctx.gpr[15]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0898091C;
    }
    goto L_08980700;
L_08980700:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0898091C;
    }
    goto L_08980710;
L_08980710:
    if (static_cast<std::int32_t>(ctx.gpr[8]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0898091C;
    }
    goto L_08980718;
L_08980718:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[13] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[13] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[12]);
      if (branch_taken) {
          goto L_08980778;
      }
      goto L_08980770;
    }
L_08980770:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (0u | 0u);
    goto L_08980778;
L_08980778:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[24]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898079C;
      }
      goto L_08980788;
    }
L_08980788:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[14] = (ctx.gpr[24] | 0u);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[7]);
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    goto L_0898079C;
L_0898079C:
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
        goto L_089807B0;
    }
    goto L_089807A4;
L_089807A4:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_089807B0;
L_089807B0:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
        goto L_089807D4;
    }
    goto L_089807BC;
L_089807BC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[8] = (ctx.gpr[15] | 0u);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[9]);
    ctx.gpr[13] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089807D4;
L_089807D4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[12]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[31] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[31] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[31] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_mem.aot_store32(ctx.gpr[31] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_08980880;
L_08980880:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08980880;
      }
      goto L_08980898;
    }
L_08980898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[31] = (ctx.gpr[31] + static_cast<std::uint32_t>(96));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(96));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(96));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_08980918;
L_08980918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0898091C;
L_0898091C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
        goto L_089806BC;
    }
    goto L_08980934;
L_08980934:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x089809A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x089809A8u) goto L_089809A8;
    return;
L_089809A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_08980A08;
      }
      goto L_089809B4;
    }
L_089809B4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[20] = (ctx.gpr[6] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089809D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089809D8u) goto L_089809D8;
    return;
L_089809D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089809F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089809F8u) goto L_089809F8;
    return;
L_089809F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08980A40;
      }
      goto L_08980A00;
    }
L_08980A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A38;
      }
      goto L_08980A08;
    }
L_08980A08:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980A38:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08980AD4;
      }
      goto L_08980A40;
    }
L_08980A40:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A58;
      }
      goto L_08980A48;
    }
L_08980A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08980A58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980A58u) goto L_08980A58;
    return;
L_08980A58:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_08980A74;
      }
      goto L_08980A60;
    }
L_08980A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08980A70u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980A70u) goto L_08980A70;
    return;
L_08980A70:
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    goto L_08980A74;
L_08980A74:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (0u | 384u);
    ctx.gpr[4] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[31] = (0x08980A98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x08980A98u) goto L_08980A98;
    return;
L_08980A98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[31] = (0x08980AA4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x08980AA4u) goto L_08980AA4;
    return;
L_08980AA4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980AD4:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08980AFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08980540;
L_08980AFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_08980B54;
      }
      goto L_08980B08;
    }
L_08980B08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08980B14u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980B14u) goto L_08980B14;
    return;
L_08980B14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08980B24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980B24u) goto L_08980B24;
    return;
L_08980B24:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980B54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980B64u);
    ctx.gpr[4] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980B64u) goto L_08980B64;
    return;
L_08980B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980B78u);
    ctx.gpr[4] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980B78u) goto L_08980B78;
    return;
L_08980B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980B8Cu);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980B8Cu) goto L_08980B8C;
    return;
L_08980B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980BA0u);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980BA0u) goto L_08980BA0;
    return;
L_08980BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980BB4u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980BB4u) goto L_08980BB4;
    return;
L_08980BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980BC8u);
    ctx.gpr[4] = (0u | 9u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980BC8u) goto L_08980BC8;
    return;
L_08980BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980BDCu);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980BDCu) goto L_08980BDC;
    return;
L_08980BDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980BF0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980BF0u) goto L_08980BF0;
    return;
L_08980BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980C04u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980C04u) goto L_08980C04;
    return;
L_08980C04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980C18u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980C18u) goto L_08980C18;
    return;
L_08980C18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980C2Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980C2Cu) goto L_08980C2C;
    return;
L_08980C2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980C40u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980C40u) goto L_08980C40;
    return;
L_08980C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980C54u);
    ctx.gpr[5] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980C54u) goto L_08980C54;
    return;
L_08980C54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980C68u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980C68u) goto L_08980C68;
    return;
L_08980C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[8] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08980C90u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980C90u) goto L_08980C90;
    return;
L_08980C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980CA4u);
    ctx.gpr[4] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980CA4u) goto L_08980CA4;
    return;
L_08980CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980CB8u);
    ctx.gpr[4] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980CB8u) goto L_08980CB8;
    return;
L_08980CB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980CCCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980CCCu) goto L_08980CCC;
    return;
L_08980CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08980CE0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980CE0u) goto L_08980CE0;
    return;
L_08980CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980CF4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980CF4u) goto L_08980CF4;
    return;
L_08980CF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980D08u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980D08u) goto L_08980D08;
    return;
L_08980D08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08980D1Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980D1Cu) goto L_08980D1C;
    return;
L_08980D1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08980D2Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980D2Cu) goto L_08980D2C;
    return;
L_08980D2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08980D3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980D3Cu) goto L_08980D3C;
    return;
L_08980D3C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980D6C:
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[8] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[9] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    goto L_08980D90;
L_08980D90:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[6] << 3u);
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
        goto L_08980D90;
    }
    goto L_08980DC0;
L_08980DC0:
    ctx.gpr[8] = (0u | 96u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[2] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-26712));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08980E70;
      }
      goto L_08980E24;
    }
L_08980E24:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08980E3Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08980E3Cu) goto L_08980E3C;
    return;
L_08980E3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08980E64;
    }
    goto L_08980E48;
L_08980E48:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08980E48;
      }
      goto L_08980E60;
    }
L_08980E60:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08980E64;
L_08980E64:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08980E24;
      }
      goto L_08980E70;
    }
L_08980E70:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08980E9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08980EDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08980D6C;
L_08980EDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08980F5C;
      }
      goto L_08980EF8;
    }
L_08980EF8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08980EFC;
L_08980EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08980F30u);
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[6]);
    goto L_08980DE0;
L_08980F30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08980F48;
      }
      goto L_08980F40;
    }
L_08980F40:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[21]);
    goto L_08980F48;
L_08980F48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08980EFC;
      }
      goto L_08980F5C;
    }
L_08980F5C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08980FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089810E0;
      }
      goto L_08981028;
    }
L_08981028:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 384u);
      if (branch_taken) {
          goto L_089810E4;
      }
      goto L_08981030;
    }
L_08981030:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (0u | 384u);
      if (branch_taken) {
          goto L_089810E4;
      }
      goto L_08981038;
    }
L_08981038:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08981044u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08980D6C;
L_08981044:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08981054u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9CD4u>(ctx, &aot_mem) && ctx.pc == 0x08981054u) goto L_08981054;
    return;
L_08981054:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981100;
      }
      goto L_08981060;
    }
L_08981060:
    ctx.gpr[31] = (0x08981068u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 278u, 0x089D9E04u>(ctx, &aot_mem) && ctx.pc == 0x08981068u) goto L_08981068;
    return;
L_08981068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089810D0;
      }
      goto L_08981070;
    }
L_08981070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089810C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08980E9C;
L_089810C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089810CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 578u, 0x089DBD44u>(ctx, &aot_mem) && ctx.pc == 0x089810CCu) goto L_089810CC;
    return;
L_089810CC:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    goto L_089810D0;
L_089810D0:
    ctx.gpr[31] = (0x089810D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 272u, 0x089D9D94u>(ctx, &aot_mem) && ctx.pc == 0x089810D8u) goto L_089810D8;
    return;
L_089810D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981100;
      }
      goto L_089810E0;
    }
L_089810E0:
    ctx.gpr[4] = (0u | 384u);
    goto L_089810E4;
L_089810E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089810F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089810F4u) goto L_089810F4;
    return;
L_089810F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[31] = (0x08981100u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x08981100u) goto L_08981100;
    return;
L_08981100:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08981124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (0u | 384u);
        goto L_0898114C;
    }
    goto L_08981134;
L_08981134:
    ctx.gpr[31] = (0x0898113Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 5u, 0x089DC2C8u>(ctx, &aot_mem) && ctx.pc == 0x0898113Cu) goto L_0898113C;
    return;
L_0898113C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898114C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x0898115Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x0898115Cu) goto L_0898115C;
    return;
L_0898115C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x08981168u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x08981168u) goto L_08981168;
    return;
L_08981168:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08981200;
      }
      goto L_089811A0;
    }
L_089811A0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (0u | 384u);
      if (branch_taken) {
          goto L_08981204;
      }
      goto L_089811A8;
    }
L_089811A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089811B4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08980D6C;
L_089811B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089811C8u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 26u, 0x089DC6A0u>(ctx, &aot_mem) && ctx.pc == 0x089811C8u) goto L_089811C8;
    return;
L_089811C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08981220;
      }
      goto L_089811D4;
    }
L_089811D4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089811E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08980FF8;
L_089811E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089811F0;
      }
      goto L_089811E8;
    }
L_089811E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08981220;
      }
      goto L_089811F0;
    }
L_089811F0:
    ctx.gpr[31] = (0x089811F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08981124;
L_089811F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981220;
      }
      goto L_08981200;
    }
L_08981200:
    ctx.gpr[4] = (0u | 384u);
    goto L_08981204;
L_08981204:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x08981214u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x08981214u) goto L_08981214;
    return;
L_08981214:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[31] = (0x08981220u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x08981220u) goto L_08981220;
    return;
L_08981220:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08981270u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981270u) goto L_08981270;
    return;
L_08981270:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08981284u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981284u) goto L_08981284;
    return;
L_08981284:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26736), 0u);
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
L_089812A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (4u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089812E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089812E0u) goto L_089812E0;
    return;
L_089812E0:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26736));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08981320;
      }
      goto L_089812F0;
    }
L_089812F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 12288u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08981304u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981304u) goto L_08981304;
    return;
L_08981304:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08981340;
      }
      goto L_0898130C;
    }
L_0898130C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0898131Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898131Cu) goto L_0898131C;
    return;
L_0898131C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_08981320;
L_08981320:
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
L_08981340:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26736), ctx.gpr[2]);
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
L_0898136C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (3u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898139Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 426u, 0x089CE248u>(ctx, &aot_mem) && ctx.pc == 0x0898139Cu) goto L_0898139C;
    return;
L_0898139C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089813B4;
      }
      goto L_089813A4;
    }
L_089813A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089813B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 447u, 0x089CE488u>(ctx, &aot_mem) && ctx.pc == 0x089813B4u) goto L_089813B4;
    return;
L_089813B4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
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
L_089813F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08981424u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(425));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981424u) goto L_08981424;
    return;
L_08981424:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08981434u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0898136C;
L_08981434:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089825FC;
L_08981470:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_0898148C;
    }
    goto L_08981478;
L_08981478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_0898148C;
    }
    goto L_08981484;
L_08981484:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_0898148C;
L_0898148C:
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
L_089814A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2200u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089814D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5192));
    goto L_08981F40;
L_089814D8:
    ctx.gpr[31] = (0x089814E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 458u, 0x089CE674u>(ctx, &aot_mem) && ctx.pc == 0x089814E0u) goto L_089814E0;
    return;
L_089814E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981568u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_0898350C;
L_08981568:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2200u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981598u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5464));
    goto L_08981F40;
L_08981598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089815B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089815C8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08983738;
L_089815C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089815D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2200u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089815F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5560));
    goto L_08981F40;
L_089815F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089816D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089816F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08982CF4;
L_089816F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08981714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898173Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x0898173Cu) goto L_0898173C;
    return;
L_0898173C:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2200u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898175Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5840));
    goto L_08981F40;
L_0898175C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[18] + ctx.gpr[2]);
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
L_0898177C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089817B8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089817B8u) goto L_089817B8;
    return;
L_089817B8:
    ctx.gpr[21] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089817F8;
      }
      goto L_089817C4;
    }
L_089817C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089817D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0898136C;
L_089817D0:
    ctx.gpr[31] = (0x089817D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x089817D8u) goto L_089817D8;
    return;
L_089817D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] << 3u);
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[20];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08981820;
      }
      goto L_089817F0;
    }
L_089817F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089818DC;
      }
      goto L_089817F8;
    }
L_089817F8:
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
L_08981820:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08981824;
L_08981824:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08981830u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x08981830u) goto L_08981830;
    return;
L_08981830:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08981890;
      }
      goto L_08981838;
    }
L_08981838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 432u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08981854u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 288u, 0x089CD600u>(ctx, &aot_mem) && ctx.pc == 0x08981854u) goto L_08981854;
    return;
L_08981854:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981890;
      }
      goto L_0898185C;
    }
L_0898185C:
    ctx.gpr[31] = (0x08981864u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08982FA4;
L_08981864:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981890;
      }
      goto L_08981870;
    }
L_08981870:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0898187Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x0898187Cu) goto L_0898187C;
    return;
L_0898187C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089818CC;
      }
      goto L_08981888;
    }
L_08981888:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089818B8;
      }
      goto L_08981890;
    }
L_08981890:
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
L_089818B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
        goto L_089818D4;
    }
    goto L_089818CC;
L_089818CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    goto L_089818D4;
L_089818D4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08981824;
      }
      goto L_089818DC;
    }
L_089818DC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08981974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089819A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x089819A0u) goto L_089819A0;
    return;
L_089819A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089819C4;
      }
      goto L_089819A8;
    }
L_089819A8:
    ctx.gpr[31] = (0x089819B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08982D14;
L_089819B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089819C4:
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
L_089819DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981A04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08981714;
L_08981A04:
    ctx.gpr[7] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 425u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u | 101u);
    ctx.gpr[31] = (0x08981A20u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28674));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 286u, 0x089CD5A8u>(ctx, &aot_mem) && ctx.pc == 0x08981A20u) goto L_08981A20;
    return;
L_08981A20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981A7C;
      }
      goto L_08981A28;
    }
L_08981A28:
    ctx.gpr[31] = (0x08981A30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08981A30u) goto L_08981A30;
    return;
L_08981A30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08981A44u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x08981A44u) goto L_08981A44;
    return;
L_08981A44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2200u << 16u);
      if (branch_taken) {
          goto L_08981A7C;
      }
      goto L_08981A4C;
    }
L_08981A4C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08981A60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6516));
    goto L_08981F40;
L_08981A60:
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
L_08981A7C:
    ctx.gpr[2] = (0u | 0u);
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
L_08981A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981ABCu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08981ABCu) goto L_08981ABC;
    return;
L_08981ABC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08981B08;
      }
      goto L_08981ACC;
    }
L_08981ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x08981ADCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 472u, 0x089CE79Cu>(ctx, &aot_mem) && ctx.pc == 0x08981ADCu) goto L_08981ADC;
    return;
L_08981ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x08981AECu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 472u, 0x089CE79Cu>(ctx, &aot_mem) && ctx.pc == 0x08981AECu) goto L_08981AEC;
    return;
L_08981AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08981B00u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08982FF4;
L_08981B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981B14;
      }
      goto L_08981B08;
    }
L_08981B08:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    goto L_08981B14;
L_08981B14:
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
L_08981B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981B60u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    goto L_08981D34;
L_08981B60:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981B74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981BA0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x08981BA0u) goto L_08981BA0;
    return;
L_08981BA0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08981BA4;
L_08981BA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08981BF8;
      }
      goto L_08981BAC;
    }
L_08981BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981BF8;
      }
      goto L_08981BB8;
    }
L_08981BB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08981BCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08982FF4;
L_08981BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08981BEC;
      }
      goto L_08981BE0;
    }
L_08981BE0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08981BF0;
      }
      goto L_08981BEC;
    }
L_08981BEC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    goto L_08981BF0;
L_08981BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08981BA4;
      }
      goto L_08981BF8;
    }
L_08981BF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08981C48;
      }
      goto L_08981C00;
    }
L_08981C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C48;
      }
      goto L_08981C0C;
    }
L_08981C0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08981C20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08982FF4;
L_08981C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08981C3C;
      }
      goto L_08981C30;
    }
L_08981C30:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981C3C;
    }
L_08981C3C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    goto L_08981C40;
L_08981C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08981BF8;
      }
      goto L_08981C48;
    }
L_08981C48:
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
L_08981C68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981C84u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08982100;
L_08981C84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08981CC8;
      }
      goto L_08981C8C;
    }
L_08981C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981CC0;
      }
      goto L_08981C98;
    }
L_08981C98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981CC0;
      }
      goto L_08981CA0;
    }
L_08981CA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981CCC;
      }
      goto L_08981CC0;
    }
L_08981CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08981CCC;
      }
      goto L_08981CC8;
    }
L_08981CC8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08981CCC;
L_08981CCC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08981D00;
    }
    goto L_08981CD4;
L_08981CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08981CE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089833B0;
L_08981CE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981D1C;
      }
      goto L_08981CE8;
    }
L_08981CE8:
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
L_08981D00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981CE8;
      }
      goto L_08981D08;
    }
L_08981D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08981D14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089833B0;
L_08981D14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981CE8;
      }
      goto L_08981D1C;
    }
L_08981D1C:
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
L_08981D34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08981D8C;
      }
      goto L_08981D7C;
    }
L_08981D7C:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08981DA4;
      }
      goto L_08981D8C;
    }
L_08981D8C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08981E6C;
      }
      goto L_08981D9C;
    }
L_08981D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    goto L_08981DA4;
L_08981DA4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08981DC8;
    }
    goto L_08981DB4;
L_08981DB4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = ctx.fpr[20] / ctx.fpr[22];
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08981DF0;
      }
      goto L_08981DC8;
    }
L_08981DC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08981DF0;
      }
      goto L_08981DDC;
    }
L_08981DDC:
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08981DF0;
L_08981DF0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08981E10;
    }
    goto L_08981DF8;
L_08981DF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08981E30;
      }
      goto L_08981E0C;
    }
L_08981E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08981E10;
L_08981E10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E44;
      }
      goto L_08981E18;
    }
L_08981E18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08981E44;
      }
      goto L_08981E2C;
    }
L_08981E2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08981E30;
L_08981E30:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08981E3Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08981B74;
L_08981E3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08981DF0;
      }
      goto L_08981E44;
    }
L_08981E44:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08981E6C;
      }
      goto L_08981E4C;
    }
L_08981E4C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08981E6C;
      }
      goto L_08981E5C;
    }
L_08981E5C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08981E6Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981E6Cu) goto L_08981E6C;
    return;
L_08981E6C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08981E98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981EC4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x08981EC4u) goto L_08981EC4;
    return;
L_08981EC4:
    ctx.gpr[19] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981EFC;
      }
      goto L_08981EDC;
    }
L_08981EDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08981EE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08981A98;
L_08981EE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08981EF8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08981B74;
L_08981EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_08981EFC;
L_08981EFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08981F14;
      }
      goto L_08981F04;
    }
L_08981F04:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    goto L_08981F14;
L_08981F14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08981F24u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08981B74;
L_08981F24:
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
L_08981F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981F78u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x08981F78u) goto L_08981F78;
    return;
L_08981F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08981F84u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08981F84u) goto L_08981F84;
    return;
L_08981F84:
    ctx.gpr[21] = (ctx.gpr[2] << 3u);
    ctx.gpr[21] = (ctx.gpr[20] + ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08981FB8;
      }
      goto L_08981F94;
    }
L_08981F94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08981F98;
L_08981F98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08981FACu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981FACu) goto L_08981FAC;
    return;
L_08981FAC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[20] != ctx.gpr[21]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08981F98;
    }
    goto L_08981FB8;
L_08981FB8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08981FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08981FF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08981FF0u) goto L_08981FF0;
    return;
L_08981FF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898200Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 472u, 0x089CE79Cu>(ctx, &aot_mem) && ctx.pc == 0x0898200Cu) goto L_0898200C;
    return;
L_0898200C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898201C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08982064;
      }
      goto L_08982048;
    }
L_08982048:
    ctx.gpr[31] = (0x08982050u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x08982050u) goto L_08982050;
    return;
L_08982050:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08982064;
L_08982064:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08982088;
    }
    goto L_08982080;
L_08982080:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982088:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089820C8;
      }
      goto L_089820A8;
    }
L_089820A8:
    ctx.gpr[31] = (0x089820B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x089820B0u) goto L_089820B0;
    return;
L_089820B0:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
      if (branch_taken) {
          goto L_089820D0;
      }
      goto L_089820C8;
    }
L_089820C8:
    ctx.gpr[31] = (0x089820D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x089820D0u) goto L_089820D0;
    return;
L_089820D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089820E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_089820F4;
    }
    goto L_089820EC;
L_089820EC:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089820F4:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982184u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 381u, 0x089D26B8u>(ctx, &aot_mem) && ctx.pc == 0x08982184u) goto L_08982184;
    return;
L_08982184:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08982198u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_089819DC;
L_08982198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08982224;
      }
      goto L_089821A0;
    }
L_089821A0:
    ctx.gpr[31] = (0x089821A8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 356u, 0x089D258Cu>(ctx, &aot_mem) && ctx.pc == 0x089821A8u) goto L_089821A8;
    return;
L_089821A8:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089821B8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 381u, 0x089D26B8u>(ctx, &aot_mem) && ctx.pc == 0x089821B8u) goto L_089821B8;
    return;
L_089821B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089821C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 340u, 0x089CD9D0u>(ctx, &aot_mem) && ctx.pc == 0x089821C8u) goto L_089821C8;
    return;
L_089821C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08982224;
      }
      goto L_089821D0;
    }
L_089821D0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089821DCu);
    ctx.gpr[6] = (0u | 0u);
    goto L_0898177C;
L_089821DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08982224;
      }
      goto L_089821E4;
    }
L_089821E4:
    ctx.gpr[31] = (0x089821ECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 356u, 0x089D258Cu>(ctx, &aot_mem) && ctx.pc == 0x089821ECu) goto L_089821EC;
    return;
L_089821EC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08982200u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08982200u) goto L_08982200;
    return;
L_08982200:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982224:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898236C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898238C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089823A8u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089823A8u) goto L_089823A8;
    return;
L_089823A8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089823C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089823E4u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089823E4u) goto L_089823E4;
    return;
L_089823E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982420u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08982420u) goto L_08982420;
    return;
L_08982420:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(124));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898245Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0898245Cu) goto L_0898245C;
    return;
L_0898245C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898247C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982498u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08982498u) goto L_08982498;
    return;
L_08982498:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089824B8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089824C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (3u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(425));
    ctx.gpr[4] = (0u | 160u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089824F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 426u, 0x089CE248u>(ctx, &aot_mem) && ctx.pc == 0x089824F4u) goto L_089824F4;
    return;
L_089824F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08982500u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08982500u) goto L_08982500;
    return;
L_08982500:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982574;
      }
      goto L_08982508;
    }
L_08982508:
    ctx.gpr[31] = (0x08982510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08982510u) goto L_08982510;
    return;
L_08982510:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08982520u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 447u, 0x089CE488u>(ctx, &aot_mem) && ctx.pc == 0x08982520u) goto L_08982520;
    return;
L_08982520:
    ctx.gpr[31] = (0x08982528u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x08982528u) goto L_08982528;
    return;
L_08982528:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08982534u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08982534u) goto L_08982534;
    return;
L_08982534:
    ctx.gpr[4] = (ctx.gpr[2] << 7u);
    ctx.gpr[5] = (ctx.gpr[2] << 5u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0898254Cu);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x0898254Cu) goto L_0898254C;
    return;
L_0898254C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08982574;
      }
      goto L_08982554;
    }
L_08982554:
    ctx.gpr[31] = (0x0898255Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0898236C;
L_0898255C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08982568u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089824B8;
L_08982568:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(160));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08982554;
      }
      goto L_08982574;
    }
L_08982574:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089825FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08982668;
      }
      goto L_0898261C;
    }
L_0898261C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_0898263C;
      }
      goto L_08982628;
    }
L_08982628:
    ctx.gpr[31] = (0x08982630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 458u, 0x089CE674u>(ctx, &aot_mem) && ctx.pc == 0x08982630u) goto L_08982630;
    return;
L_08982630:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(284)));
      if (branch_taken) {
          goto L_08982654;
      }
      goto L_0898263C;
    }
L_0898263C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0898264Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898264Cu) goto L_0898264C;
    return;
L_0898264C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(284)));
    goto L_08982654;
L_08982654:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20744));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(252));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08982668u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08982668u) goto L_08982668;
    return;
L_08982668:
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
L_0898272C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 8u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 367u, 0x089CDB24u>(ctx, &aot_mem) && ctx.pc == 0x08982744u) goto L_08982744;
    return;
L_08982744:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982750:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 16u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982758:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 8u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982760:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 12u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982798u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x08982798u) goto L_08982798;
    return;
L_08982798:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089827B4;
      }
      goto L_089827A0;
    }
L_089827A0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089827B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089827C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089827DCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 368u, 0x089CDB2Cu>(ctx, &aot_mem) && ctx.pc == 0x089827DCu) goto L_089827DC;
    return;
L_089827DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089827F8;
      }
      goto L_089827E4;
    }
L_089827E4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089827F8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898280C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898284Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x0898284Cu) goto L_0898284C;
    return;
L_0898284C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982868;
      }
      goto L_08982854;
    }
L_08982854:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982868:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898287C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089828B0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x089828B0u) goto L_089828B0;
    return;
L_089828B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089828CC;
      }
      goto L_089828B8;
    }
L_089828B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089828CC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089828E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982928u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x08982928u) goto L_08982928;
    return;
L_08982928:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982944;
      }
      goto L_08982930;
    }
L_08982930:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982944:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982978u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x08982978u) goto L_08982978;
    return;
L_08982978:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089829A8;
      }
      goto L_08982984;
    }
L_08982984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089829A8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089829BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089829E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 288u, 0x089CD600u>(ctx, &aot_mem) && ctx.pc == 0x089829E8u) goto L_089829E8;
    return;
L_089829E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08982A18;
      }
      goto L_089829F0;
    }
L_089829F0:
    ctx.gpr[31] = (0x089829F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 391u, 0x089CDEE0u>(ctx, &aot_mem) && ctx.pc == 0x089829F8u) goto L_089829F8;
    return;
L_089829F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982A18;
      }
      goto L_08982A00;
    }
L_08982A00:
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
L_08982A18:
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
L_08982A30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982A50u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x08982A50u) goto L_08982A50;
    return;
L_08982A50:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08982A90;
      }
      goto L_08982A5C;
    }
L_08982A5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982A90:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982AC4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x08982AC4u) goto L_08982AC4;
    return;
L_08982AC4:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08982AF8;
      }
      goto L_08982AD0;
    }
L_08982AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982AF8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982B2Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x08982B2Cu) goto L_08982B2C;
    return;
L_08982B2C:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08982B70;
      }
      goto L_08982B38;
    }
L_08982B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982B70:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08982C64;
      }
      goto L_08982BB4;
    }
L_08982BB4:
    ctx.gpr[31] = (0x08982BBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0898272C;
L_08982BBC:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08982BE0;
      }
      goto L_08982BCC;
    }
L_08982BCC:
    ctx.gpr[31] = (0x08982BD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08982734;
L_08982BD4:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08982BE0;
L_08982BE0:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
      if (branch_taken) {
          goto L_08982C00;
      }
      goto L_08982BEC;
    }
L_08982BEC:
    ctx.gpr[31] = (0x08982BF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08982750;
L_08982BF4:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    goto L_08982C00;
L_08982C00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
      if (branch_taken) {
          goto L_08982C1C;
      }
      goto L_08982C08;
    }
L_08982C08:
    ctx.gpr[31] = (0x08982C10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08982750;
L_08982C10:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    goto L_08982C1C;
L_08982C1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
      if (branch_taken) {
          goto L_08982C38;
      }
      goto L_08982C24;
    }
L_08982C24:
    ctx.gpr[31] = (0x08982C2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08982758;
L_08982C2C:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    goto L_08982C38;
L_08982C38:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08982C54;
      }
      goto L_08982C40;
    }
L_08982C40:
    ctx.gpr[31] = (0x08982C48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08982760;
L_08982C48:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08982C54;
L_08982C54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982BB4;
      }
      goto L_08982C64;
    }
L_08982C64:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08982C84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08982CEC;
      }
      goto L_08982C98;
    }
L_08982C98:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08982C9C;
L_08982C9C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08982CAC;
    }
    goto L_08982CAC;
L_08982CAC:
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
        goto L_08982CB8;
    }
    goto L_08982CB8;
L_08982CB8:
    ctx.gpr[6] = (ctx.gpr[4] & 4u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
        goto L_08982CC4;
    }
    goto L_08982CC4;
L_08982CC4:
    ctx.gpr[6] = (ctx.gpr[4] & 8u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
        goto L_08982CD0;
    }
    goto L_08982CD0;
L_08982CD0:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
        goto L_08982CDC;
    }
    goto L_08982CDC;
L_08982CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] & 32u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08982C9C;
    }
    goto L_08982CEC;
L_08982CEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982D04u);
    // nop
    goto L_08982B84;
L_08982D04:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08982D38u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08982CF4;
L_08982D38:
    ctx.gpr[7] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 432u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u | 101u);
    ctx.gpr[31] = (0x08982D54u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28674));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 286u, 0x089CD5A8u>(ctx, &aot_mem) && ctx.pc == 0x08982D54u) goto L_08982D54;
    return;
L_08982D54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08982DAC;
      }
      goto L_08982D5C;
    }
L_08982D5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08982D70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08982C84;
L_08982D70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08982D84u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x08982D84u) goto L_08982D84;
    return;
L_08982D84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982DAC;
      }
      goto L_08982D8C;
    }
L_08982D8C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08982DCC;
      }
      goto L_08982DA4;
    }
L_08982DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982F84;
      }
      goto L_08982DAC;
    }
L_08982DAC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982DCC:
    ctx.gpr[31] = (0x08982DD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08982768;
L_08982DD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982DF4;
      }
      goto L_08982DDC;
    }
L_08982DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08982E14;
      }
      goto L_08982DEC;
    }
L_08982DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08982E54;
      }
      goto L_08982DF4;
    }
L_08982DF4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982E14:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08982E20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089827C8;
L_08982E20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08982E30;
      }
      goto L_08982E28;
    }
L_08982E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08982E50;
      }
      goto L_08982E30;
    }
L_08982E30:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982E50:
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    goto L_08982E54;
L_08982E54:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08982E9C;
      }
      goto L_08982E5C;
    }
L_08982E5C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08982E68u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0898280C;
L_08982E68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08982E78;
      }
      goto L_08982E70;
    }
L_08982E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08982E98;
      }
      goto L_08982E78;
    }
L_08982E78:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982E98:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    goto L_08982E9C;
L_08982E9C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08982EE4;
      }
      goto L_08982EA4;
    }
L_08982EA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08982EB0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0898280C;
L_08982EB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08982EC0;
      }
      goto L_08982EB8;
    }
L_08982EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08982EE0;
      }
      goto L_08982EC0;
    }
L_08982EC0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982EE0:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_08982EE4;
L_08982EE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08982F2C;
      }
      goto L_08982EEC;
    }
L_08982EEC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08982EF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0898287C;
L_08982EF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08982F08;
      }
      goto L_08982F00;
    }
L_08982F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08982F28;
      }
      goto L_08982F08;
    }
L_08982F08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982F28:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    goto L_08982F2C;
L_08982F2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08982F74;
      }
      goto L_08982F34;
    }
L_08982F34:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08982F40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089828E0;
L_08982F40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982F50;
      }
      goto L_08982F48;
    }
L_08982F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08982F70;
      }
      goto L_08982F50;
    }
L_08982F50:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982F70:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08982F74;
L_08982F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08982DCC;
      }
      goto L_08982F84;
    }
L_08982F84:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982FA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20744));
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(252));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08982FD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(432));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08982FD8u) goto L_08982FD8;
    return;
L_08982FD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08982FE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08983A14;
L_08982FE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08983110;
      }
      goto L_0898302C;
    }
L_0898302C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08983030;
L_08983030:
    ctx.gpr[31] = (0x08983038u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 472u, 0x089CE79Cu>(ctx, &aot_mem) && ctx.pc == 0x08983038u) goto L_08983038;
    return;
L_08983038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08983060;
      }
      goto L_0898304C;
    }
L_0898304C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08983058u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0898238C;
L_08983058:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08983060;
L_08983060:
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08983084;
      }
      goto L_0898306C;
    }
L_0898306C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08983078u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089823C8;
L_08983078:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    goto L_08983084;
L_08983084:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_089830A4;
      }
      goto L_0898308C;
    }
L_0898308C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08983098u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08982404;
L_08983098:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_089830A4;
L_089830A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_089830C4;
      }
      goto L_089830AC;
    }
L_089830AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089830B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08982440;
L_089830B8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    goto L_089830C4;
L_089830C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08983100;
      }
      goto L_089830CC;
    }
L_089830CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089830D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0898247C;
L_089830D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x089830E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 21u, 0x08984418u>(ctx, &aot_mem) && ctx.pc == 0x089830E4u) goto L_089830E4;
    return;
L_089830E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.gpr[31] = (0x089830F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 21u, 0x08984418u>(ctx, &aot_mem) && ctx.pc == 0x089830F4u) goto L_089830F4;
    return;
L_089830F4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08983100;
L_08983100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08983030;
    }
    goto L_08983110;
L_08983110:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08983134:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[6] = (17279u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089831D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983264:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08983298u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08983298u) goto L_08983298;
    return;
L_08983298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x089832A4u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x089832A4u) goto L_089832A4;
    return;
L_089832A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08983390;
      }
      goto L_089832B4;
    }
L_089832B4:
    ctx.gpr[17] = (0u | 1u);
    goto L_089832B8;
L_089832B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08983384;
    }
    goto L_089832C4;
L_089832C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
        goto L_089832E4;
    }
    goto L_089832D0;
L_089832D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089832DCu);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 268u, 0x089953E0u>(ctx, &aot_mem) && ctx.pc == 0x089832DCu) goto L_089832DC;
    return;
L_089832DC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    goto L_089832E4;
L_089832E4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
        goto L_08983300;
    }
    goto L_089832EC;
L_089832EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089832F8u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 278u, 0x089956BCu>(ctx, &aot_mem) && ctx.pc == 0x089832F8u) goto L_089832F8;
    return;
L_089832F8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    goto L_08983300;
L_08983300:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(120)));
        goto L_0898331C;
    }
    goto L_08983308;
L_08983308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08983314u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 276u, 0x08995604u>(ctx, &aot_mem) && ctx.pc == 0x08983314u) goto L_08983314;
    return;
L_08983314:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(120)));
    goto L_0898331C;
L_0898331C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
        goto L_08983364;
    }
    goto L_08983324;
L_08983324:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08983350;
      }
      goto L_08983338;
    }
L_08983338:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08983344u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 280u, 0x08995740u>(ctx, &aot_mem) && ctx.pc == 0x08983344u) goto L_08983344;
    return;
L_08983344:
    ctx.gpr[31] = (0x0898334Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 609u, 0x08997374u>(ctx, &aot_mem) && ctx.pc == 0x0898334Cu) goto L_0898334C;
    return;
L_0898334C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08983350;
L_08983350:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0898335Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(124)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 261u, 0x08995368u>(ctx, &aot_mem) && ctx.pc == 0x0898335Cu) goto L_0898335C;
    return;
L_0898335C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    goto L_08983364;
L_08983364:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
        goto L_08983380;
    }
    goto L_0898336C;
L_0898336C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
        goto L_08983380;
    }
    goto L_08983378;
L_08983378:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_08983380;
L_08983380:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08983384;
L_08983384:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089832B8;
      }
      goto L_08983390;
    }
L_08983390:
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
L_089833B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089834DC;
      }
      goto L_089833E8;
    }
L_089833E8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089834DC;
      }
      goto L_08983400;
    }
L_08983400:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089834DC;
      }
      goto L_08983418;
    }
L_08983418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_0898341C;
L_0898341C:
    ctx.gpr[31] = (0x08983424u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 472u, 0x089CE79Cu>(ctx, &aot_mem) && ctx.pc == 0x08983424u) goto L_08983424;
    return;
L_08983424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08983450;
      }
      goto L_08983438;
    }
L_08983438:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08983448u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 2u, 0x08984024u>(ctx, &aot_mem) && ctx.pc == 0x08983448u) goto L_08983448;
    return;
L_08983448:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08983450;
L_08983450:
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08983478;
      }
      goto L_0898345C;
    }
L_0898345C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0898346Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08983134;
L_0898346C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    goto L_08983478;
L_08983478:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_0898349C;
      }
      goto L_08983480;
    }
L_08983480:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08983490u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089831D8;
L_08983490:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_0898349C;
L_0898349C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
        goto L_089834A4;
    }
    goto L_089834A4;
L_089834A4:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089834CC;
      }
      goto L_089834B0;
    }
L_089834B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089834C4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08983264;
L_089834C4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089834CC;
L_089834CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_0898341C;
    }
    goto L_089834DC;
L_089834DC:
    ctx.gpr[31] = (0x089834E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08983270;
L_089834E4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_0898350C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08983708;
      }
      goto L_08983544;
    }
L_08983544:
    ctx.gpr[31] = (0x0898354Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089824C4;
L_0898354C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08983708;
      }
      goto L_08983558;
    }
L_08983558:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_089836BC;
      }
      goto L_08983570;
    }
L_08983570:
    ctx.gpr[4] = (15232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32897u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08983580;
L_08983580:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0898358Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 472u, 0x089CE79Cu>(ctx, &aot_mem) && ctx.pc == 0x0898358Cu) goto L_0898358C;
    return;
L_0898358C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08983598u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_0898236C;
L_08983598:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089835A4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 21u, 0x08984418u>(ctx, &aot_mem) && ctx.pc == 0x089835A4u) goto L_089835A4;
    return;
L_089835A4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089835B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089824B8;
L_089835B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089835D4;
      }
      goto L_089835C0;
    }
L_089835C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089835CCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0898238C;
L_089835CC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089835D4;
L_089835D4:
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08983628;
      }
      goto L_089835E0;
    }
L_089835E0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089835ECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089823C8;
L_089835EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    goto L_08983628;
L_08983628:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08983648;
      }
      goto L_08983630;
    }
L_08983630:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0898363Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08982404;
L_0898363C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_08983648;
L_08983648:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08983668;
      }
      goto L_08983650;
    }
L_08983650:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0898365Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08982440;
L_0898365C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    goto L_08983668;
L_08983668:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089836A4;
      }
      goto L_08983670;
    }
L_08983670:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0898367Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0898247C;
L_0898367C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x08983688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 21u, 0x08984418u>(ctx, &aot_mem) && ctx.pc == 0x08983688u) goto L_08983688;
    return;
L_08983688:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.gpr[31] = (0x08983698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 21u, 0x08984418u>(ctx, &aot_mem) && ctx.pc == 0x08983698u) goto L_08983698;
    return;
L_08983698:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089836A4;
L_089836A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08983580;
    }
    goto L_089836B4;
L_089836B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2222u << 16u);
    goto L_089836BC;
L_089836BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089836CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089836CCu) goto L_089836CC;
    return;
L_089836CC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08983708:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08983738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089839E8;
      }
      goto L_08983770;
    }
L_08983770:
    ctx.gpr[31] = (0x08983778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 455u, 0x089CE650u>(ctx, &aot_mem) && ctx.pc == 0x08983778u) goto L_08983778;
    return;
L_08983778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08983784u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 464u, 0x089CE710u>(ctx, &aot_mem) && ctx.pc == 0x08983784u) goto L_08983784;
    return;
L_08983784:
    ctx.gpr[4] = (ctx.gpr[2] << 7u);
    ctx.gpr[5] = (ctx.gpr[2] << 5u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[20] = (ctx.gpr[19] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08983804;
      }
      goto L_089837A8;
    }
L_089837A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089837AC;
L_089837AC:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
        goto L_089837FC;
    }
    goto L_089837B4;
L_089837B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
        goto L_089837C4;
    }
    goto L_089837C4;
L_089837C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_089837D0;
    }
    goto L_089837D0;
L_089837D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_089837DC;
    }
    goto L_089837DC;
L_089837DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_089837E8;
    }
    goto L_089837E8;
L_089837E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
        goto L_089837FC;
    }
    goto L_089837F4;
L_089837F4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    goto L_089837FC;
L_089837FC:
    if (ctx.gpr[5] != ctx.gpr[20]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089837AC;
    }
    goto L_08983804;
L_08983804:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(425));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0898381Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898381Cu) goto L_0898381C;
    return;
L_0898381C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08983830u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08983830u) goto L_08983830;
    return;
L_08983830:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089839A4;
      }
      goto L_08983838;
    }
L_08983838:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08983844;
L_08983844:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
        goto L_0898399C;
    }
    goto L_0898384C;
L_0898384C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 4u);
        goto L_08983864;
    }
    goto L_08983864;
L_08983864:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 2u);
        goto L_08983874;
    }
    goto L_08983874;
L_08983874:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 8u);
        goto L_0898388C;
    }
    goto L_0898388C;
L_0898388C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (0u | 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 16u);
        goto L_0898389C;
    }
    goto L_0898389C;
L_0898389C:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089838B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 23u, 0x08984438u>(ctx, &aot_mem) && ctx.pc == 0x089838B4u) goto L_089838B4;
    return;
L_089838B4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089838D8;
      }
      goto L_089838C4;
    }
L_089838C4:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089838D4u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089838D4u) goto L_089838D4;
    return;
L_089838D4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(64));
    goto L_089838D8;
L_089838D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08983924;
      }
      goto L_089838E4;
    }
L_089838E4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089838F0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089838F0u) goto L_089838F0;
    return;
L_089838F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_08983924;
L_08983924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08983940;
      }
      goto L_08983930;
    }
L_08983930:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0898393Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0898393Cu) goto L_0898393C;
    return;
L_0898393C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_08983940;
L_08983940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_0898395C;
      }
      goto L_0898394C;
    }
L_0898394C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08983958u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08983958u) goto L_08983958;
    return;
L_08983958:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_0898395C;
L_0898395C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08983998;
      }
      goto L_08983968;
    }
L_08983968:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08983974u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08983974u) goto L_08983974;
    return;
L_08983974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08983980u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 23u, 0x08984438u>(ctx, &aot_mem) && ctx.pc == 0x08983980u) goto L_08983980;
    return;
L_08983980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08983990u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 23u, 0x08984438u>(ctx, &aot_mem) && ctx.pc == 0x08983990u) goto L_08983990;
    return;
L_08983990:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_08983998;
L_08983998:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
    goto L_0898399C;
L_0898399C:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08983844;
    }
    goto L_089839A4;
L_089839A4:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x089839B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 458u, 0x089CE674u>(ctx, &aot_mem) && ctx.pc == 0x089839B4u) goto L_089839B4;
    return;
L_089839B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089839E8:
    ctx.gpr[2] = (0u | 0u);
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
L_08983A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x08983A60u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x08983A60u) goto L_08983A60;
    return;
L_08983A60:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08983A90;
      }
      goto L_08983A6C;
    }
L_08983A6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983AC4;
      }
      goto L_08983A88;
    }
L_08983A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983E5C;
      }
      goto L_08983A90;
    }
L_08983A90:
    ctx.gpr[2] = (0u | 0u);
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
L_08983AC4:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (1u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08983AE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(425));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983AE4u) goto L_08983AE4;
    return;
L_08983AE4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08983B10;
      }
      goto L_08983AF0;
    }
L_08983AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08983B44;
      }
      goto L_08983B08;
    }
L_08983B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983E5C;
      }
      goto L_08983B10;
    }
L_08983B10:
    ctx.gpr[2] = (0u | 0u);
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
L_08983B44:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    goto L_08983B64;
L_08983B64:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08983B70u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08982958;
L_08983B70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983BB4;
      }
      goto L_08983B78;
    }
L_08983B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08983BF8;
      }
      goto L_08983BA8;
    }
L_08983BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08983C64;
      }
      goto L_08983BB0;
    }
L_08983BB0:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08983BB4;
L_08983BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08983BC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983BC4u) goto L_08983BC4;
    return;
L_08983BC4:
    ctx.gpr[2] = (0u | 0u);
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
L_08983BF8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08983C04u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089829BC;
L_08983C04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983C1C;
      }
      goto L_08983C0C;
    }
L_08983C0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08983C60;
      }
      goto L_08983C1C;
    }
L_08983C1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08983C2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983C2Cu) goto L_08983C2C;
    return;
L_08983C2C:
    ctx.gpr[2] = (0u | 0u);
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
L_08983C60:
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    goto L_08983C64;
L_08983C64:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08983CD8;
      }
      goto L_08983C6C;
    }
L_08983C6C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08983C78u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08982A30;
L_08983C78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983C90;
      }
      goto L_08983C80;
    }
L_08983C80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08983CD4;
      }
      goto L_08983C90;
    }
L_08983C90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08983CA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983CA0u) goto L_08983CA0;
    return;
L_08983CA0:
    ctx.gpr[2] = (0u | 0u);
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
L_08983CD4:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    goto L_08983CD8;
L_08983CD8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08983D4C;
      }
      goto L_08983CE0;
    }
L_08983CE0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08983CECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08982A30;
L_08983CEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983D04;
      }
      goto L_08983CF4;
    }
L_08983CF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08983D48;
      }
      goto L_08983D04;
    }
L_08983D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08983D14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983D14u) goto L_08983D14;
    return;
L_08983D14:
    ctx.gpr[2] = (0u | 0u);
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
L_08983D48:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_08983D4C;
L_08983D4C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08983DC0;
      }
      goto L_08983D54;
    }
L_08983D54:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08983D60u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08982AA4;
L_08983D60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983D78;
      }
      goto L_08983D68;
    }
L_08983D68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08983DBC;
      }
      goto L_08983D78;
    }
L_08983D78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08983D88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983D88u) goto L_08983D88;
    return;
L_08983D88:
    ctx.gpr[2] = (0u | 0u);
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
L_08983DBC:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    goto L_08983DC0;
L_08983DC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08983E28;
      }
      goto L_08983DC8;
    }
L_08983DC8:
    ctx.gpr[31] = (0x08983DD0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08982B0C;
L_08983DD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08983DE4;
      }
      goto L_08983DD8;
    }
L_08983DD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08983E28;
      }
      goto L_08983DE4;
    }
L_08983DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08983DF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983DF4u) goto L_08983DF4;
    return;
L_08983DF4:
    ctx.gpr[2] = (0u | 0u);
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
L_08983E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(160));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(160));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08983B64;
      }
      goto L_08983E58;
    }
L_08983E58:
    ctx.gpr[5] = (2222u << 16u);
    goto L_08983E5C;
L_08983E5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08983E74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(425));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983E74u) goto L_08983E74;
    return;
L_08983E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08983FC0;
      }
      goto L_08983E8C;
    }
L_08983E8C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(124));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    goto L_08983EA4;
L_08983EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 4u);
        goto L_08983EBC;
    }
    goto L_08983EBC;
L_08983EBC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 2u);
        goto L_08983ECC;
    }
    goto L_08983ECC;
L_08983ECC:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 8u);
        goto L_08983EE4;
    }
    goto L_08983EE4;
L_08983EE4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (0u | 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 16u);
        goto L_08983EF4;
    }
    goto L_08983EF4;
L_08983EF4:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08983F28;
      }
      goto L_08983F14;
    }
L_08983F14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08983F24u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08983F24u) goto L_08983F24;
    return;
L_08983F24:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08983F28;
L_08983F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08983F44;
      }
      goto L_08983F34;
    }
L_08983F34:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08983F40u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08983F40u) goto L_08983F40;
    return;
L_08983F40:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08983F44;
L_08983F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08983F60;
      }
      goto L_08983F50;
    }
L_08983F50:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08983F5Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08983F5Cu) goto L_08983F5C;
    return;
L_08983F5C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08983F60;
L_08983F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08983F7C;
      }
      goto L_08983F6C;
    }
L_08983F6C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08983F78u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08983F78u) goto L_08983F78;
    return;
L_08983F78:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08983F7C;
L_08983F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08983F98;
      }
      goto L_08983F88;
    }
L_08983F88:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08983F94u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08983F94u) goto L_08983F94;
    return;
L_08983F94:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08983F98;
L_08983F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(160));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(160));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08983EA4;
      }
      goto L_08983FC0;
    }
L_08983FC0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08983FF0;
      }
      goto L_08983FDC;
    }
L_08983FDC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08983FF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08983FF0u) goto L_08983FF0;
    return;
L_08983FF0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.pc = 0x08984000u; return;
}

void recomp_unit_0095(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0095_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_95(Runtime &runtime) {
    runtime.register_generated_unit(95u, 0x08980000u, 16384u, &recomp_unit_0095, &recomp_unit_0095_entry);
    runtime.register_function(0x08980000u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980008u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980010u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980018u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980020u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898009Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980104u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898014Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980170u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980184u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980198u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980210u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980224u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980238u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898024Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980260u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980274u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980288u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980304u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980318u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898032Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980340u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980524u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980534u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980540u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980614u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980700u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980710u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980718u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980770u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980778u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980788u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898079Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980880u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980898u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980918u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898091Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980934u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980968u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981028u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981030u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981038u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981044u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981054u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981060u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981068u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981070u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981100u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981124u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981134u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898113Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898114Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898115Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981168u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981178u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981200u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981204u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981214u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981220u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981240u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981270u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981284u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981304u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898130Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898131Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981320u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981340u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898136Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898139Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981424u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981434u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981470u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981478u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981484u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898148Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981558u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981568u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981574u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981598u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089815F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981714u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898173Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898175Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898177Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981820u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981824u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981838u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981854u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898185Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981864u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981870u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898187Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981888u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981890u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981974u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ABCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ACCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ADCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981DF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898200Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898201Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982024u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982030u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982048u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982050u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982064u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982074u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982080u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982088u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982090u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982100u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982140u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982184u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982198u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982200u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982224u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898236Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898238Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982404u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982420u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982440u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898245Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898247Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982498u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982500u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982508u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982510u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982520u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982528u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982534u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898254Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982554u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898255Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982568u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982574u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898261Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982628u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982630u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898263Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898264Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982654u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982668u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898272Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982734u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982744u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982750u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982758u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982760u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982768u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982798u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898280Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898284Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982854u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982868u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898287Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982928u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982930u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982944u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982958u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982978u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982984u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982A90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982C9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898302Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983030u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983038u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898304Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983058u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983060u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898306Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983078u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983084u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898308Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983098u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983100u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983110u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983134u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983264u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983270u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983298u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983300u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983308u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983314u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898331Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983324u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983338u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983344u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898334Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983350u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898335Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983364u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898336Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983378u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983380u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983384u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983390u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089833E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983400u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983418u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898341Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983424u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983438u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983450u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898345Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898346Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983478u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983480u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983490u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898349Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089834E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898350Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983544u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898354Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983558u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983570u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983580u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898358Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983598u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089835ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983628u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983630u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898363Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983648u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983650u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898365Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983668u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983670u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898367Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983688u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983698u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089836A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089836B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089836BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089836CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983708u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983738u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983770u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983778u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983784u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089837FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983804u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898381Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983838u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983844u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898384Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983864u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983874u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898388Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898389Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983924u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983930u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898393Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983940u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898394Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983958u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898395Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983968u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983974u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983980u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983990u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983998u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898399Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089839A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089839B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089839E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983BF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983ECCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FF0u, &recomp_unit_0095, "recomp_unit_0095");
}
} // namespace psprecomp

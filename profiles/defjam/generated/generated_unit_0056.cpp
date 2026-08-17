#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0056[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142,
    0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 148, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 169, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0,
    181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228,
    0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0,
    0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0,
    246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 264, 0,
    0, 265, 0, 0, 266, 0, 267, 0, 268, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0,
    277, 0, 0, 0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288,
    0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 296, 0, 297, 0, 0, 0, 0, 298, 0, 299, 300, 0, 0,
    301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 0, 0,
    312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0,
    353, 0, 354, 0, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361,
    0, 0, 0, 0, 0, 362, 0, 363, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 371, 372, 0, 373, 0,
    0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 0, 390, 0, 391, 0, 0,
    392, 0, 393, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0,
    0, 426, 0, 0, 0, 427, 0, 428, 0, 429, 0, 430, 431, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 435, 0, 436, 437, 438, 0, 439, 0,
    0, 0, 440, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 0, 454, 0, 455, 0, 0,
    456, 0, 457, 0, 0, 458, 459, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0,
    465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0,
    0, 0, 473, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0,
    0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488,
    0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 0,
    0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 505, 0,
    0, 506, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 0, 513,
    0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 519, 0, 0, 0, 0, 0, 520, 521, 0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 525, 0, 526,
    527, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0,
    541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0,
    0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0,
    0, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 562, 0,
    0, 0, 0, 0, 0, 0, 0, 563, 0, 564, 565, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 572, 0, 573,
    574, 0, 575, 0, 0, 0, 0, 576, 0, 0, 577, 0, 578, 0, 579, 580, 581, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 585, 0, 586, 0, 587,
    0, 588, 0, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0,
    0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0, 597, 598, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0,
    0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617,
    0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 627, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639,
    0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 658, 0, 659, 0,
    0, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663, 664, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0,
    670, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0,
    682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0,
    0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 695, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 699, 0, 0,
    700, 0, 701, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 706, 0, 707, 708, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 712,
    0, 713, 714, 715, 0, 716, 0, 0, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 724, 0, 725, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 729, 0, 730, 0, 0,
    731, 0, 732, 0, 0, 733, 734, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739,
};
void recomp_unit_0056_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0056[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E4000;
    case 2u: goto L_088E4090;
    case 3u: goto L_088E40D8;
    case 4u: goto L_088E4108;
    case 5u: goto L_088E4140;
    case 6u: goto L_088E419C;
    case 7u: goto L_088E4224;
    case 8u: goto L_088E426C;
    case 9u: goto L_088E429C;
    case 10u: goto L_088E42CC;
    case 11u: goto L_088E431C;
    case 12u: goto L_088E4338;
    case 13u: goto L_088E4380;
    case 14u: goto L_088E4394;
    case 15u: goto L_088E43A8;
    case 16u: goto L_088E43E8;
    case 17u: goto L_088E4428;
    case 18u: goto L_088E4470;
    case 19u: goto L_088E448C;
    case 20u: goto L_088E44A4;
    case 21u: goto L_088E44B4;
    case 22u: goto L_088E4510;
    case 23u: goto L_088E451C;
    case 24u: goto L_088E4528;
    case 25u: goto L_088E4570;
    case 26u: goto L_088E4578;
    case 27u: goto L_088E4590;
    case 28u: goto L_088E45D0;
    case 29u: goto L_088E4604;
    case 30u: goto L_088E4628;
    case 31u: goto L_088E466C;
    case 32u: goto L_088E46AC;
    case 33u: goto L_088E46BC;
    case 34u: goto L_088E46D8;
    case 35u: goto L_088E4714;
    case 36u: goto L_088E4730;
    case 37u: goto L_088E4748;
    case 38u: goto L_088E4784;
    case 39u: goto L_088E47A0;
    case 40u: goto L_088E47AC;
    case 41u: goto L_088E47B8;
    case 42u: goto L_088E47C4;
    case 43u: goto L_088E47CC;
    case 44u: goto L_088E47D8;
    case 45u: goto L_088E47EC;
    case 46u: goto L_088E4800;
    case 47u: goto L_088E481C;
    case 48u: goto L_088E4830;
    case 49u: goto L_088E4848;
    case 50u: goto L_088E4850;
    case 51u: goto L_088E4864;
    case 52u: goto L_088E486C;
    case 53u: goto L_088E4890;
    case 54u: goto L_088E48A0;
    case 55u: goto L_088E48B8;
    case 56u: goto L_088E48CC;
    case 57u: goto L_088E48FC;
    case 58u: goto L_088E4958;
    case 59u: goto L_088E496C;
    case 60u: goto L_088E49A4;
    case 61u: goto L_088E49D4;
    case 62u: goto L_088E49F0;
    case 63u: goto L_088E4A34;
    case 64u: goto L_088E4A3C;
    case 65u: goto L_088E4A6C;
    case 66u: goto L_088E4A78;
    case 67u: goto L_088E4B20;
    case 68u: goto L_088E4B30;
    case 69u: goto L_088E4B48;
    case 70u: goto L_088E4BF0;
    case 71u: goto L_088E4C00;
    case 72u: goto L_088E4C0C;
    case 73u: goto L_088E4CD0;
    case 74u: goto L_088E4CE0;
    case 75u: goto L_088E4CE8;
    case 76u: goto L_088E4D94;
    case 77u: goto L_088E4DA4;
    case 78u: goto L_088E4DAC;
    case 79u: goto L_088E4E54;
    case 80u: goto L_088E4E64;
    case 81u: goto L_088E4E6C;
    case 82u: goto L_088E4E94;
    case 83u: goto L_088E4EB4;
    case 84u: goto L_088E4EC8;
    case 85u: goto L_088E4F40;
    case 86u: goto L_088E4F54;
    case 87u: goto L_088E4F5C;
    case 88u: goto L_088E4F84;
    case 89u: goto L_088E4FA4;
    case 90u: goto L_088E4FB8;
    case 91u: goto L_088E503C;
    case 92u: goto L_088E504C;
    case 93u: goto L_088E5050;
    case 94u: goto L_088E5058;
    case 95u: goto L_088E5130;
    case 96u: goto L_088E5144;
    case 97u: goto L_088E514C;
    case 98u: goto L_088E5238;
    case 99u: goto L_088E5248;
    case 100u: goto L_088E524C;
    case 101u: goto L_088E525C;
    case 102u: goto L_088E5334;
    case 103u: goto L_088E5348;
    case 104u: goto L_088E5354;
    case 105u: goto L_088E5360;
    case 106u: goto L_088E5378;
    case 107u: goto L_088E5388;
    case 108u: goto L_088E5440;
    case 109u: goto L_088E5450;
    case 110u: goto L_088E5454;
    case 111u: goto L_088E5464;
    case 112u: goto L_088E548C;
    case 113u: goto L_088E54AC;
    case 114u: goto L_088E54C0;
    case 115u: goto L_088E553C;
    case 116u: goto L_088E5550;
    case 117u: goto L_088E5558;
    case 118u: goto L_088E5580;
    case 119u: goto L_088E55A0;
    case 120u: goto L_088E55B4;
    case 121u: goto L_088E563C;
    case 122u: goto L_088E564C;
    case 123u: goto L_088E5654;
    case 124u: goto L_088E5730;
    case 125u: goto L_088E5740;
    case 126u: goto L_088E5748;
    case 127u: goto L_088E5830;
    case 128u: goto L_088E583C;
    case 129u: goto L_088E5844;
    case 130u: goto L_088E586C;
    case 131u: goto L_088E58B4;
    case 132u: goto L_088E590C;
    case 133u: goto L_088E5918;
    case 134u: goto L_088E5924;
    case 135u: goto L_088E592C;
    case 136u: goto L_088E593C;
    case 137u: goto L_088E5944;
    case 138u: goto L_088E594C;
    case 139u: goto L_088E5958;
    case 140u: goto L_088E5964;
    case 141u: goto L_088E5970;
    case 142u: goto L_088E597C;
    case 143u: goto L_088E5988;
    case 144u: goto L_088E598C;
    case 145u: goto L_088E59AC;
    case 146u: goto L_088E59B4;
    case 147u: goto L_088E59C0;
    case 148u: goto L_088E59CC;
    case 149u: goto L_088E59D0;
    case 150u: goto L_088E59F8;
    case 151u: goto L_088E5A00;
    case 152u: goto L_088E5A2C;
    case 153u: goto L_088E5A34;
    case 154u: goto L_088E5A60;
    case 155u: goto L_088E5A68;
    case 156u: goto L_088E5A8C;
    case 157u: goto L_088E5A94;
    case 158u: goto L_088E5AA4;
    case 159u: goto L_088E5AAC;
    case 160u: goto L_088E5AB4;
    case 161u: goto L_088E5AC0;
    case 162u: goto L_088E5AD4;
    case 163u: goto L_088E5B38;
    case 164u: goto L_088E5B3C;
    case 165u: goto L_088E5B44;
    case 166u: goto L_088E5B4C;
    case 167u: goto L_088E5B58;
    case 168u: goto L_088E5B6C;
    case 169u: goto L_088E5B84;
    case 170u: goto L_088E5B88;
    case 171u: goto L_088E5B90;
    case 172u: goto L_088E5B9C;
    case 173u: goto L_088E5BAC;
    case 174u: goto L_088E5BDC;
    case 175u: goto L_088E5C2C;
    case 176u: goto L_088E5C3C;
    case 177u: goto L_088E5C5C;
    case 178u: goto L_088E5C64;
    case 179u: goto L_088E5C6C;
    case 180u: goto L_088E5C74;
    case 181u: goto L_088E5C80;
    case 182u: goto L_088E5C90;
    case 183u: goto L_088E5CB0;
    case 184u: goto L_088E5CB8;
    case 185u: goto L_088E5CC0;
    case 186u: goto L_088E5CC8;
    case 187u: goto L_088E5CD4;
    case 188u: goto L_088E5CE4;
    case 189u: goto L_088E5D04;
    case 190u: goto L_088E5D0C;
    case 191u: goto L_088E5D14;
    case 192u: goto L_088E5D1C;
    case 193u: goto L_088E5D28;
    case 194u: goto L_088E5D38;
    case 195u: goto L_088E5D58;
    case 196u: goto L_088E5D60;
    case 197u: goto L_088E5D68;
    case 198u: goto L_088E5D9C;
    case 199u: goto L_088E5DA4;
    case 200u: goto L_088E5DAC;
    case 201u: goto L_088E5DBC;
    case 202u: goto L_088E5DDC;
    case 203u: goto L_088E5DE4;
    case 204u: goto L_088E5DEC;
    case 205u: goto L_088E5E2C;
    case 206u: goto L_088E5E30;
    case 207u: goto L_088E5E38;
    case 208u: goto L_088E5E4C;
    case 209u: goto L_088E5E64;
    case 210u: goto L_088E5E7C;
    case 211u: goto L_088E5E94;
    case 212u: goto L_088E5ED8;
    case 213u: goto L_088E5EE4;
    case 214u: goto L_088E5F10;
    case 215u: goto L_088E5F1C;
    case 216u: goto L_088E5F24;
    case 217u: goto L_088E5F38;
    case 218u: goto L_088E5F50;
    case 219u: goto L_088E5F80;
    case 220u: goto L_088E5F88;
    case 221u: goto L_088E5F98;
    case 222u: goto L_088E5FA8;
    case 223u: goto L_088E5FB8;
    case 224u: goto L_088E5FC0;
    case 225u: goto L_088E5FD4;
    case 226u: goto L_088E5FEC;
    case 227u: goto L_088E5FF4;
    case 228u: goto L_088E5FFC;
    case 229u: goto L_088E6014;
    case 230u: goto L_088E601C;
    case 231u: goto L_088E602C;
    case 232u: goto L_088E603C;
    case 233u: goto L_088E604C;
    case 234u: goto L_088E6060;
    case 235u: goto L_088E6068;
    case 236u: goto L_088E6074;
    case 237u: goto L_088E6088;
    case 238u: goto L_088E6094;
    case 239u: goto L_088E609C;
    case 240u: goto L_088E60B0;
    case 241u: goto L_088E60BC;
    case 242u: goto L_088E60C4;
    case 243u: goto L_088E60D8;
    case 244u: goto L_088E60E4;
    case 245u: goto L_088E60EC;
    case 246u: goto L_088E6100;
    case 247u: goto L_088E610C;
    case 248u: goto L_088E6114;
    case 249u: goto L_088E6128;
    case 250u: goto L_088E6134;
    case 251u: goto L_088E613C;
    case 252u: goto L_088E614C;
    case 253u: goto L_088E6154;
    case 254u: goto L_088E615C;
    case 255u: goto L_088E6164;
    case 256u: goto L_088E616C;
    case 257u: goto L_088E6174;
    case 258u: goto L_088E6184;
    case 259u: goto L_088E619C;
    case 260u: goto L_088E61CC;
    case 261u: goto L_088E61D4;
    case 262u: goto L_088E61E4;
    case 263u: goto L_088E61F0;
    case 264u: goto L_088E61F8;
    case 265u: goto L_088E6204;
    case 266u: goto L_088E6210;
    case 267u: goto L_088E6218;
    case 268u: goto L_088E6220;
    case 269u: goto L_088E6224;
    case 270u: goto L_088E622C;
    case 271u: goto L_088E6234;
    case 272u: goto L_088E623C;
    case 273u: goto L_088E624C;
    case 274u: goto L_088E6254;
    case 275u: goto L_088E625C;
    case 276u: goto L_088E6278;
    case 277u: goto L_088E6280;
    case 278u: goto L_088E6290;
    case 279u: goto L_088E6298;
    case 280u: goto L_088E62A0;
    case 281u: goto L_088E62A8;
    case 282u: goto L_088E62B8;
    case 283u: goto L_088E62CC;
    case 284u: goto L_088E62D4;
    case 285u: goto L_088E62DC;
    case 286u: goto L_088E62E4;
    case 287u: goto L_088E62EC;
    case 288u: goto L_088E62FC;
    case 289u: goto L_088E6304;
    case 290u: goto L_088E630C;
    case 291u: goto L_088E6314;
    case 292u: goto L_088E6320;
    case 293u: goto L_088E632C;
    case 294u: goto L_088E6340;
    case 295u: goto L_088E6348;
    case 296u: goto L_088E634C;
    case 297u: goto L_088E6354;
    case 298u: goto L_088E6368;
    case 299u: goto L_088E6370;
    case 300u: goto L_088E6374;
    case 301u: goto L_088E6380;
    case 302u: goto L_088E6388;
    case 303u: goto L_088E63A0;
    case 304u: goto L_088E63A8;
    case 305u: goto L_088E63B0;
    case 306u: goto L_088E63BC;
    case 307u: goto L_088E63C4;
    case 308u: goto L_088E63D8;
    case 309u: goto L_088E63E0;
    case 310u: goto L_088E63E8;
    case 311u: goto L_088E63F0;
    case 312u: goto L_088E6400;
    case 313u: goto L_088E6410;
    case 314u: goto L_088E641C;
    case 315u: goto L_088E642C;
    case 316u: goto L_088E6448;
    case 317u: goto L_088E6450;
    case 318u: goto L_088E6464;
    case 319u: goto L_088E646C;
    case 320u: goto L_088E6488;
    case 321u: goto L_088E64A8;
    case 322u: goto L_088E64B4;
    case 323u: goto L_088E64C4;
    case 324u: goto L_088E64CC;
    case 325u: goto L_088E64D4;
    case 326u: goto L_088E64E0;
    case 327u: goto L_088E6500;
    case 328u: goto L_088E650C;
    case 329u: goto L_088E651C;
    case 330u: goto L_088E6524;
    case 331u: goto L_088E652C;
    case 332u: goto L_088E6538;
    case 333u: goto L_088E65AC;
    case 334u: goto L_088E6600;
    case 335u: goto L_088E6624;
    case 336u: goto L_088E6644;
    case 337u: goto L_088E664C;
    case 338u: goto L_088E6658;
    case 339u: goto L_088E6668;
    case 340u: goto L_088E6674;
    case 341u: goto L_088E6698;
    case 342u: goto L_088E66A0;
    case 343u: goto L_088E66A8;
    case 344u: goto L_088E66B8;
    case 345u: goto L_088E66C0;
    case 346u: goto L_088E66C8;
    case 347u: goto L_088E66D0;
    case 348u: goto L_088E66D8;
    case 349u: goto L_088E66E0;
    case 350u: goto L_088E66E8;
    case 351u: goto L_088E66F0;
    case 352u: goto L_088E66F8;
    case 353u: goto L_088E6700;
    case 354u: goto L_088E6708;
    case 355u: goto L_088E6718;
    case 356u: goto L_088E6720;
    case 357u: goto L_088E6728;
    case 358u: goto L_088E6764;
    case 359u: goto L_088E676C;
    case 360u: goto L_088E6774;
    case 361u: goto L_088E677C;
    case 362u: goto L_088E6794;
    case 363u: goto L_088E679C;
    case 364u: goto L_088E67A0;
    case 365u: goto L_088E67A8;
    case 366u: goto L_088E67C0;
    case 367u: goto L_088E67D0;
    case 368u: goto L_088E67D8;
    case 369u: goto L_088E67E0;
    case 370u: goto L_088E67E8;
    case 371u: goto L_088E67EC;
    case 372u: goto L_088E67F0;
    case 373u: goto L_088E67F8;
    case 374u: goto L_088E6808;
    case 375u: goto L_088E6818;
    case 376u: goto L_088E6820;
    case 377u: goto L_088E6828;
    case 378u: goto L_088E6830;
    case 379u: goto L_088E6844;
    case 380u: goto L_088E684C;
    case 381u: goto L_088E6854;
    case 382u: goto L_088E686C;
    case 383u: goto L_088E6894;
    case 384u: goto L_088E68A4;
    case 385u: goto L_088E68AC;
    case 386u: goto L_088E68BC;
    case 387u: goto L_088E68C8;
    case 388u: goto L_088E68D8;
    case 389u: goto L_088E68E0;
    case 390u: goto L_088E68EC;
    case 391u: goto L_088E68F4;
    case 392u: goto L_088E6900;
    case 393u: goto L_088E6908;
    case 394u: goto L_088E6918;
    case 395u: goto L_088E6920;
    case 396u: goto L_088E6928;
    case 397u: goto L_088E693C;
    case 398u: goto L_088E6950;
    case 399u: goto L_088E699C;
    case 400u: goto L_088E69A8;
    case 401u: goto L_088E6A04;
    case 402u: goto L_088E6A30;
    case 403u: goto L_088E6A50;
    case 404u: goto L_088E6A58;
    case 405u: goto L_088E6A64;
    case 406u: goto L_088E6A90;
    case 407u: goto L_088E6AB0;
    case 408u: goto L_088E6AD8;
    case 409u: goto L_088E6AF8;
    case 410u: goto L_088E6B10;
    case 411u: goto L_088E6B1C;
    case 412u: goto L_088E6B24;
    case 413u: goto L_088E6B38;
    case 414u: goto L_088E6B48;
    case 415u: goto L_088E6B54;
    case 416u: goto L_088E6B88;
    case 417u: goto L_088E6B98;
    case 418u: goto L_088E6BA0;
    case 419u: goto L_088E6BA8;
    case 420u: goto L_088E6BCC;
    case 421u: goto L_088E6BD4;
    case 422u: goto L_088E6BD8;
    case 423u: goto L_088E6BE4;
    case 424u: goto L_088E6BEC;
    case 425u: goto L_088E6BF4;
    case 426u: goto L_088E6C04;
    case 427u: goto L_088E6C14;
    case 428u: goto L_088E6C1C;
    case 429u: goto L_088E6C24;
    case 430u: goto L_088E6C2C;
    case 431u: goto L_088E6C30;
    case 432u: goto L_088E6C38;
    case 433u: goto L_088E6C4C;
    case 434u: goto L_088E6C58;
    case 435u: goto L_088E6C60;
    case 436u: goto L_088E6C68;
    case 437u: goto L_088E6C6C;
    case 438u: goto L_088E6C70;
    case 439u: goto L_088E6C78;
    case 440u: goto L_088E6C88;
    case 441u: goto L_088E6C94;
    case 442u: goto L_088E6C9C;
    case 443u: goto L_088E6CA4;
    case 444u: goto L_088E6CAC;
    case 445u: goto L_088E6CB4;
    case 446u: goto L_088E6CCC;
    case 447u: goto L_088E6CD4;
    case 448u: goto L_088E6CDC;
    case 449u: goto L_088E6D24;
    case 450u: goto L_088E6D3C;
    case 451u: goto L_088E6D4C;
    case 452u: goto L_088E6D58;
    case 453u: goto L_088E6D60;
    case 454u: goto L_088E6D6C;
    case 455u: goto L_088E6D74;
    case 456u: goto L_088E6D80;
    case 457u: goto L_088E6D88;
    case 458u: goto L_088E6D94;
    case 459u: goto L_088E6D98;
    case 460u: goto L_088E6DA8;
    case 461u: goto L_088E6DB0;
    case 462u: goto L_088E6DCC;
    case 463u: goto L_088E6DEC;
    case 464u: goto L_088E6DF8;
    case 465u: goto L_088E6E00;
    case 466u: goto L_088E6E14;
    case 467u: goto L_088E6E24;
    case 468u: goto L_088E6E30;
    case 469u: goto L_088E6E38;
    case 470u: goto L_088E6E40;
    case 471u: goto L_088E6E6C;
    case 472u: goto L_088E6E78;
    case 473u: goto L_088E6E88;
    case 474u: goto L_088E6E94;
    case 475u: goto L_088E6E9C;
    case 476u: goto L_088E6EA4;
    case 477u: goto L_088E6EC0;
    case 478u: goto L_088E6ECC;
    case 479u: goto L_088E6EDC;
    case 480u: goto L_088E6EE8;
    case 481u: goto L_088E6EF0;
    case 482u: goto L_088E6EF8;
    case 483u: goto L_088E6F14;
    case 484u: goto L_088E6F20;
    case 485u: goto L_088E6F30;
    case 486u: goto L_088E6F3C;
    case 487u: goto L_088E6F74;
    case 488u: goto L_088E6F7C;
    case 489u: goto L_088E6F84;
    case 490u: goto L_088E6F94;
    case 491u: goto L_088E6FDC;
    case 492u: goto L_088E6FE4;
    case 493u: goto L_088E6FF4;
    case 494u: goto L_088E7004;
    case 495u: goto L_088E700C;
    case 496u: goto L_088E7014;
    case 497u: goto L_088E701C;
    case 498u: goto L_088E702C;
    case 499u: goto L_088E7034;
    case 500u: goto L_088E7040;
    case 501u: goto L_088E7048;
    case 502u: goto L_088E7054;
    case 503u: goto L_088E705C;
    case 504u: goto L_088E7074;
    case 505u: goto L_088E7078;
    case 506u: goto L_088E7084;
    case 507u: goto L_088E708C;
    case 508u: goto L_088E7094;
    case 509u: goto L_088E70A8;
    case 510u: goto L_088E70DC;
    case 511u: goto L_088E70E8;
    case 512u: goto L_088E70F0;
    case 513u: goto L_088E70FC;
    case 514u: goto L_088E7104;
    case 515u: goto L_088E710C;
    case 516u: goto L_088E7114;
    case 517u: goto L_088E711C;
    case 518u: goto L_088E7124;
    case 519u: goto L_088E7128;
    case 520u: goto L_088E7140;
    case 521u: goto L_088E7144;
    case 522u: goto L_088E714C;
    case 523u: goto L_088E7160;
    case 524u: goto L_088E716C;
    case 525u: goto L_088E7174;
    case 526u: goto L_088E717C;
    case 527u: goto L_088E7180;
    case 528u: goto L_088E7188;
    case 529u: goto L_088E7198;
    case 530u: goto L_088E71A4;
    case 531u: goto L_088E71AC;
    case 532u: goto L_088E71B4;
    case 533u: goto L_088E71D8;
    case 534u: goto L_088E71E0;
    case 535u: goto L_088E71E8;
    case 536u: goto L_088E723C;
    case 537u: goto L_088E7248;
    case 538u: goto L_088E72A4;
    case 539u: goto L_088E72D4;
    case 540u: goto L_088E72F0;
    case 541u: goto L_088E7300;
    case 542u: goto L_088E7320;
    case 543u: goto L_088E733C;
    case 544u: goto L_088E734C;
    case 545u: goto L_088E736C;
    case 546u: goto L_088E738C;
    case 547u: goto L_088E7394;
    case 548u: goto L_088E73A0;
    case 549u: goto L_088E73CC;
    case 550u: goto L_088E73F4;
    case 551u: goto L_088E7428;
    case 552u: goto L_088E7448;
    case 553u: goto L_088E7460;
    case 554u: goto L_088E746C;
    case 555u: goto L_088E7474;
    case 556u: goto L_088E7488;
    case 557u: goto L_088E7498;
    case 558u: goto L_088E74A4;
    case 559u: goto L_088E74D8;
    case 560u: goto L_088E74E8;
    case 561u: goto L_088E74F0;
    case 562u: goto L_088E74F8;
    case 563u: goto L_088E751C;
    case 564u: goto L_088E7524;
    case 565u: goto L_088E7528;
    case 566u: goto L_088E7534;
    case 567u: goto L_088E753C;
    case 568u: goto L_088E7544;
    case 569u: goto L_088E7554;
    case 570u: goto L_088E7564;
    case 571u: goto L_088E756C;
    case 572u: goto L_088E7574;
    case 573u: goto L_088E757C;
    case 574u: goto L_088E7580;
    case 575u: goto L_088E7588;
    case 576u: goto L_088E759C;
    case 577u: goto L_088E75A8;
    case 578u: goto L_088E75B0;
    case 579u: goto L_088E75B8;
    case 580u: goto L_088E75BC;
    case 581u: goto L_088E75C0;
    case 582u: goto L_088E75C8;
    case 583u: goto L_088E75D8;
    case 584u: goto L_088E75E4;
    case 585u: goto L_088E75EC;
    case 586u: goto L_088E75F4;
    case 587u: goto L_088E75FC;
    case 588u: goto L_088E7604;
    case 589u: goto L_088E761C;
    case 590u: goto L_088E7624;
    case 591u: goto L_088E762C;
    case 592u: goto L_088E7674;
    case 593u: goto L_088E768C;
    case 594u: goto L_088E769C;
    case 595u: goto L_088E76A8;
    case 596u: goto L_088E76B0;
    case 597u: goto L_088E76BC;
    case 598u: goto L_088E76C0;
    case 599u: goto L_088E76D0;
    case 600u: goto L_088E76D8;
    case 601u: goto L_088E76F4;
    case 602u: goto L_088E7714;
    case 603u: goto L_088E7720;
    case 604u: goto L_088E7728;
    case 605u: goto L_088E773C;
    case 606u: goto L_088E774C;
    case 607u: goto L_088E7758;
    case 608u: goto L_088E7760;
    case 609u: goto L_088E7768;
    case 610u: goto L_088E779C;
    case 611u: goto L_088E77A8;
    case 612u: goto L_088E77B8;
    case 613u: goto L_088E77C4;
    case 614u: goto L_088E77CC;
    case 615u: goto L_088E77D4;
    case 616u: goto L_088E77F0;
    case 617u: goto L_088E77FC;
    case 618u: goto L_088E780C;
    case 619u: goto L_088E7818;
    case 620u: goto L_088E7820;
    case 621u: goto L_088E7828;
    case 622u: goto L_088E7844;
    case 623u: goto L_088E7850;
    case 624u: goto L_088E7860;
    case 625u: goto L_088E786C;
    case 626u: goto L_088E78A0;
    case 627u: goto L_088E78A8;
    case 628u: goto L_088E78B0;
    case 629u: goto L_088E78C0;
    case 630u: goto L_088E7900;
    case 631u: goto L_088E7908;
    case 632u: goto L_088E7920;
    case 633u: goto L_088E7930;
    case 634u: goto L_088E7938;
    case 635u: goto L_088E7940;
    case 636u: goto L_088E7948;
    case 637u: goto L_088E7950;
    case 638u: goto L_088E7960;
    case 639u: goto L_088E797C;
    case 640u: goto L_088E7984;
    case 641u: goto L_088E7990;
    case 642u: goto L_088E7998;
    case 643u: goto L_088E79A0;
    case 644u: goto L_088E79B0;
    case 645u: goto L_088E79B8;
    case 646u: goto L_088E79C0;
    case 647u: goto L_088E79E8;
    case 648u: goto L_088E7A1C;
    case 649u: goto L_088E7A28;
    case 650u: goto L_088E7A30;
    case 651u: goto L_088E7A3C;
    case 652u: goto L_088E7A44;
    case 653u: goto L_088E7A4C;
    case 654u: goto L_088E7A54;
    case 655u: goto L_088E7A5C;
    case 656u: goto L_088E7A64;
    case 657u: goto L_088E7A6C;
    case 658u: goto L_088E7A70;
    case 659u: goto L_088E7A78;
    case 660u: goto L_088E7A8C;
    case 661u: goto L_088E7A98;
    case 662u: goto L_088E7AA0;
    case 663u: goto L_088E7AA8;
    case 664u: goto L_088E7AAC;
    case 665u: goto L_088E7AB4;
    case 666u: goto L_088E7AC4;
    case 667u: goto L_088E7AD0;
    case 668u: goto L_088E7AD8;
    case 669u: goto L_088E7AE0;
    case 670u: goto L_088E7B00;
    case 671u: goto L_088E7B08;
    case 672u: goto L_088E7B10;
    case 673u: goto L_088E7B64;
    case 674u: goto L_088E7B70;
    case 675u: goto L_088E7BD0;
    case 676u: goto L_088E7C00;
    case 677u: goto L_088E7C1C;
    case 678u: goto L_088E7C2C;
    case 679u: goto L_088E7C4C;
    case 680u: goto L_088E7C6C;
    case 681u: goto L_088E7C74;
    case 682u: goto L_088E7C80;
    case 683u: goto L_088E7CAC;
    case 684u: goto L_088E7CD4;
    case 685u: goto L_088E7CF8;
    case 686u: goto L_088E7D14;
    case 687u: goto L_088E7D2C;
    case 688u: goto L_088E7D38;
    case 689u: goto L_088E7D40;
    case 690u: goto L_088E7D54;
    case 691u: goto L_088E7D64;
    case 692u: goto L_088E7D70;
    case 693u: goto L_088E7DA4;
    case 694u: goto L_088E7DB4;
    case 695u: goto L_088E7DBC;
    case 696u: goto L_088E7DC4;
    case 697u: goto L_088E7DE8;
    case 698u: goto L_088E7DF0;
    case 699u: goto L_088E7DF4;
    case 700u: goto L_088E7E00;
    case 701u: goto L_088E7E08;
    case 702u: goto L_088E7E10;
    case 703u: goto L_088E7E20;
    case 704u: goto L_088E7E30;
    case 705u: goto L_088E7E38;
    case 706u: goto L_088E7E40;
    case 707u: goto L_088E7E48;
    case 708u: goto L_088E7E4C;
    case 709u: goto L_088E7E54;
    case 710u: goto L_088E7E68;
    case 711u: goto L_088E7E74;
    case 712u: goto L_088E7E7C;
    case 713u: goto L_088E7E84;
    case 714u: goto L_088E7E88;
    case 715u: goto L_088E7E8C;
    case 716u: goto L_088E7E94;
    case 717u: goto L_088E7EA4;
    case 718u: goto L_088E7EB0;
    case 719u: goto L_088E7EB8;
    case 720u: goto L_088E7EC0;
    case 721u: goto L_088E7EC8;
    case 722u: goto L_088E7ED0;
    case 723u: goto L_088E7EE8;
    case 724u: goto L_088E7EF0;
    case 725u: goto L_088E7EF8;
    case 726u: goto L_088E7F38;
    case 727u: goto L_088E7F50;
    case 728u: goto L_088E7F60;
    case 729u: goto L_088E7F6C;
    case 730u: goto L_088E7F74;
    case 731u: goto L_088E7F80;
    case 732u: goto L_088E7F88;
    case 733u: goto L_088E7F94;
    case 734u: goto L_088E7F98;
    case 735u: goto L_088E7FA8;
    case 736u: goto L_088E7FB0;
    case 737u: goto L_088E7FCC;
    case 738u: goto L_088E7FEC;
    case 739u: goto L_088E7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E4000:
    ctx.gpr[8] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-5284));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(69)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(70)));
    ctx.gpr[30] = (ctx.gpr[6] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5300));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[6] = (16688u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17142u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16720u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[7] << 24u);
    ctx.gpr[22] = (ctx.gpr[8] << 24u);
    ctx.gpr[21] = (ctx.gpr[9] << 24u);
    ctx.gpr[6] = (17226u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    goto L_088E4090;
L_088E4090:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E40D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E40D8u) goto L_088E40D8;
    return;
L_088E40D8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
      if (branch_taken) {
          goto L_088E4090;
      }
      goto L_088E4108;
    }
L_088E4108:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[6] = (17062u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17241u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E4140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E4140u) goto L_088E4140;
    return;
L_088E4140:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[6] = (17181u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[31] = (0x088E419Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(700));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E419Cu) goto L_088E419C;
    return;
L_088E419C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[30] = (ctx.gpr[6] << 24u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(75)));
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[7] << 24u);
    ctx.gpr[22] = (ctx.gpr[8] << 24u);
    ctx.gpr[21] = (ctx.gpr[9] << 24u);
    ctx.gpr[6] = (17048u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    goto L_088E4224;
L_088E4224:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(732), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E426Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E426Cu) goto L_088E426C;
    return;
L_088E426C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
      if (branch_taken) {
          goto L_088E4224;
      }
      goto L_088E429C;
    }
L_088E429C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[6] = (17224u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1628), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088E42CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1780));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E42CCu) goto L_088E42CC;
    return;
L_088E42CC:
    ctx.gpr[4] = (0u | 75u);
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 101u);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-5652));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-5316));
    goto L_088E431C;
L_088E431C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E4338u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E4338u) goto L_088E4338;
    return;
L_088E4338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
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
    ctx.gpr[31] = (0x088E4380u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088E4380u) goto L_088E4380;
    return;
L_088E4380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[31] = (0x088E4394u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088E4394u) goto L_088E4394;
    return;
L_088E4394:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E431C;
      }
      goto L_088E43A8;
    }
L_088E43A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
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
L_088E43E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E48CC;
      }
      goto L_088E4428;
    }
L_088E4428:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(18436));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (1u << 16u);
    goto L_088E4470;
L_088E4470:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088E448Cu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E448Cu) goto L_088E448C;
    return;
L_088E448C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
      if (branch_taken) {
          goto L_088E4510;
      }
      goto L_088E44A4;
    }
L_088E44A4:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x088E44B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E44B4u) goto L_088E44B4;
    return;
L_088E44B4:
    ctx.gpr[4] = (0u | 147u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 13u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
      if (branch_taken) {
          goto L_088E4570;
      }
      goto L_088E4510;
    }
L_088E4510:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E4570;
      }
      goto L_088E451C;
    }
L_088E451C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088E4528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E4528u) goto L_088E4528;
    return;
L_088E4528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[30] = (0u | 75u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[23] = (0u | 40u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[22] = (0u | 101u);
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32108)));
    goto L_088E4570;
L_088E4570:
    ctx.gpr[31] = (0x088E4578u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088E4578u) goto L_088E4578;
    return;
L_088E4578:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E4470;
      }
      goto L_088E4590;
    }
L_088E4590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 255u);
      if (branch_taken) {
          goto L_088E48CC;
      }
      goto L_088E45D0;
    }
L_088E45D0:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32104)));
    ctx.gpr[6] = (17258u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x088E4604u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 227u, 0x08839CECu>(ctx, &aot_mem) && ctx.pc == 0x088E4604u) goto L_088E4604;
    return;
L_088E4604:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (0u | 101u);
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (0u | 75u);
      if (branch_taken) {
          goto L_088E466C;
      }
      goto L_088E4628;
    }
L_088E4628:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(392));
      if (branch_taken) {
          goto L_088E46AC;
      }
      goto L_088E466C;
    }
L_088E466C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(392));
    goto L_088E46AC;
L_088E46AC:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E46BCu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E46BCu) goto L_088E46BC;
    return;
L_088E46BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088E46D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E46D8u) goto L_088E46D8;
    return;
L_088E46D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(528));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[31] = (0x088E4714u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088E4714u) goto L_088E4714;
    return;
L_088E4714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x088E4730u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E4730u) goto L_088E4730;
    return;
L_088E4730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[31] = (0x088E4748u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E4748u) goto L_088E4748;
    return;
L_088E4748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(708));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[31] = (0x088E4784u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088E4784u) goto L_088E4784;
    return;
L_088E4784:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(57)));
      if (branch_taken) {
          goto L_088E47C4;
      }
      goto L_088E47A0;
    }
L_088E47A0:
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088E47B8;
      }
      goto L_088E47AC;
    }
L_088E47AC:
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E47D8;
      }
      goto L_088E47B8;
    }
L_088E47B8:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E47D8;
      }
      goto L_088E47C4;
    }
L_088E47C4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_088E47D8;
      }
      goto L_088E47CC;
    }
L_088E47CC:
    ctx.gpr[6] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_088E47D8;
L_088E47D8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_088E47EC;
L_088E47EC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(752));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E4800u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E4800u) goto L_088E4800;
    return;
L_088E4800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(752));
      if (branch_taken) {
          goto L_088E4848;
      }
      goto L_088E481C;
    }
L_088E481C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[31] = (0x088E4830u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E4830u) goto L_088E4830;
    return;
L_088E4830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_088E4864;
      }
      goto L_088E4848;
    }
L_088E4848:
    ctx.gpr[31] = (0x088E4850u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E4850u) goto L_088E4850;
    return;
L_088E4850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    goto L_088E4864;
L_088E4864:
    ctx.gpr[31] = (0x088E486Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088E486Cu) goto L_088E486C;
    return;
L_088E486C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
      if (branch_taken) {
          goto L_088E47EC;
      }
      goto L_088E4890;
    }
L_088E4890:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E48A0u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E48A0u) goto L_088E48A0;
    return;
L_088E48A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[31] = (0x088E48B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E48B8u) goto L_088E48B8;
    return;
L_088E48B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32108)));
    ctx.gpr[31] = (0x088E48CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1620));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088E48CCu) goto L_088E48CC;
    return;
L_088E48CC:
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
L_088E48FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E4958u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32112), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 320u, 0x088D99C4u>(ctx, &aot_mem) && ctx.pc == 0x088E4958u) goto L_088E4958;
    return;
L_088E4958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32112), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E586C;
      }
      goto L_088E496C;
    }
L_088E496C:
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32120), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32112)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E49A4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E49A4u) goto L_088E49A4;
    return;
L_088E49A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[19] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32116), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32112)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x088E49D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E49D4u) goto L_088E49D4;
    return;
L_088E49D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32112)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16948u << 16u);
      if (branch_taken) {
          goto L_088E586C;
      }
      goto L_088E49F0;
    }
L_088E49F0:
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 3u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (16928u << 16u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (1u << 16u);
    goto L_088E4A34;
L_088E4A34:
    ctx.gpr[31] = (0x088E4A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 342u, 0x088D9B78u>(ctx, &aot_mem) && ctx.pc == 0x088E4A3Cu) goto L_088E4A3C;
    return;
L_088E4A3C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (17190u << 16u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
      if (branch_taken) {
          goto L_088E4E64;
      }
      goto L_088E4A6C;
    }
L_088E4A6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (17036u << 16u);
      if (branch_taken) {
          goto L_088E4B30;
      }
      goto L_088E4A78;
    }
L_088E4A78:
    ctx.gpr[5] = (17104u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (17038u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(792));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(184));
    ctx.gpr[31] = (0x088E4B20u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E4B20u) goto L_088E4B20;
    return;
L_088E4B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32116)));
      if (branch_taken) {
          goto L_088E583C;
      }
      goto L_088E4B30;
    }
L_088E4B30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17050u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17082u << 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[10];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E4C00;
      }
      goto L_088E4B48;
    }
L_088E4B48:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (0u | 38208u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[31] = (0x088E4BF0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E4BF0u) goto L_088E4BF0;
    return;
L_088E4BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32116)));
      if (branch_taken) {
          goto L_088E583C;
      }
      goto L_088E4C00;
    }
L_088E4C00:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (17068u << 16u);
      if (branch_taken) {
          goto L_088E4CE0;
      }
      goto L_088E4C0C;
    }
L_088E4C0C:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (17062u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (17064u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (0u | 50192u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[31] = (0x088E4CD0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E4CD0u) goto L_088E4CD0;
    return;
L_088E4CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32116)));
      if (branch_taken) {
          goto L_088E583C;
      }
      goto L_088E4CE0;
    }
L_088E4CE0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[30];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088E4DA4;
      }
      goto L_088E4CE8;
    }
L_088E4CE8:
    ctx.gpr[5] = (17104u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (17038u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(796));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (0u | 61964u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[31] = (0x088E4D94u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E4D94u) goto L_088E4D94;
    return;
L_088E4D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32116)));
      if (branch_taken) {
          goto L_088E583C;
      }
      goto L_088E4DA4;
    }
L_088E4DA4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E583C;
      }
      goto L_088E4DAC;
    }
L_088E4DAC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9948));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088E4E54u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E4E54u) goto L_088E4E54;
    return;
L_088E4E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32116)));
      if (branch_taken) {
          goto L_088E583C;
      }
      goto L_088E4E64;
    }
L_088E4E64:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[10];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088E4F54;
      }
      goto L_088E4E6C;
    }
L_088E4E6C:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] >> 30u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088E4EB4;
      }
      goto L_088E4E94;
    }
L_088E4E94:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
      if (branch_taken) {
          goto L_088E4EC8;
      }
      goto L_088E4EB4;
    }
L_088E4EB4:
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    goto L_088E4EC8;
L_088E4EC8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(792));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E4F40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E4F40u) goto L_088E4F40;
    return;
L_088E4F40:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E504C;
      }
      goto L_088E4F54;
    }
L_088E4F54:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088E5050;
      }
      goto L_088E4F5C;
    }
L_088E4F5C:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] >> 30u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088E4FA4;
      }
      goto L_088E4F84;
    }
L_088E4F84:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
      if (branch_taken) {
          goto L_088E4FB8;
      }
      goto L_088E4FA4;
    }
L_088E4FA4:
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    goto L_088E4FB8;
L_088E4FB8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(792));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[31] = (0x088E503Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E503Cu) goto L_088E503C;
    return;
L_088E503C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088E504C;
L_088E504C:
    ctx.gpr[4] = (0u | 2u);
    goto L_088E5050;
L_088E5050:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_088E5144;
      }
      goto L_088E5058;
    }
L_088E5058:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (16932u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (0u | 38208u);
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[9] = (0u + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[10] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[31] = (0x088E5130u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E5130u) goto L_088E5130;
    return;
L_088E5130:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E5248;
      }
      goto L_088E5144;
    }
L_088E5144:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (16952u << 16u);
      if (branch_taken) {
          goto L_088E524C;
      }
      goto L_088E514C;
    }
L_088E514C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (16984u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (16816u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17179u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (0u | 38208u);
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[9] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[22]);
    ctx.gpr[31] = (0x088E5238u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E5238u) goto L_088E5238;
    return;
L_088E5238:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088E5248;
L_088E5248:
    ctx.gpr[4] = (16952u << 16u);
    goto L_088E524C;
L_088E524C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17072u << 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[30];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5348;
      }
      goto L_088E525C;
    }
L_088E525C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (17034u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (17028u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (0u | 50192u);
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[9] = (0u + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[10] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[31] = (0x088E5334u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E5334u) goto L_088E5334;
    return;
L_088E5334:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E5450;
      }
      goto L_088E5348;
    }
L_088E5348:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (17190u << 16u);
      if (branch_taken) {
          goto L_088E5454;
      }
      goto L_088E5354;
    }
L_088E5354:
    ctx.gpr[6] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E5378;
      }
      goto L_088E5360;
    }
L_088E5360:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_088E5388;
      }
      goto L_088E5378;
    }
L_088E5378:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088E5388;
L_088E5388:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (17028u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 50192u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088E5440u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E5440u) goto L_088E5440;
    return;
L_088E5440:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088E5450;
L_088E5450:
    ctx.gpr[4] = (17190u << 16u);
    goto L_088E5454;
L_088E5454:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_088E5550;
      }
      goto L_088E5464;
    }
L_088E5464:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] >> 30u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_088E54AC;
      }
      goto L_088E548C;
    }
L_088E548C:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
      if (branch_taken) {
          goto L_088E54C0;
      }
      goto L_088E54AC;
    }
L_088E54AC:
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    goto L_088E54C0;
L_088E54C0:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(796));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (0u | 61964u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E553Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E553Cu) goto L_088E553C;
    return;
L_088E553C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E564C;
      }
      goto L_088E5550;
    }
L_088E5550:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E564C;
      }
      goto L_088E5558;
    }
L_088E5558:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] >> 30u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_088E55A0;
      }
      goto L_088E5580;
    }
L_088E5580:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
      if (branch_taken) {
          goto L_088E55B4;
      }
      goto L_088E55A0;
    }
L_088E55A0:
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    goto L_088E55B4;
L_088E55B4:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(796));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[5] = (0u | 61964u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E563Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E563Cu) goto L_088E563C;
    return;
L_088E563C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088E564C;
L_088E564C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_088E5740;
      }
      goto L_088E5654;
    }
L_088E5654:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (16932u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9948));
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[9] = (0u + ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[31] = (0x088E5730u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E5730u) goto L_088E5730;
    return;
L_088E5730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32116)));
      if (branch_taken) {
          goto L_088E583C;
      }
      goto L_088E5740;
    }
L_088E5740:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E583C;
      }
      goto L_088E5748;
    }
L_088E5748:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (16932u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (16920u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9948));
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[9] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[22]);
    ctx.gpr[31] = (0x088E5830u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E5830u) goto L_088E5830;
    return;
L_088E5830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32116)));
    goto L_088E583C;
L_088E583C:
    ctx.gpr[31] = (0x088E5844u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 271u, 0x08906E70u>(ctx, &aot_mem) && ctx.pc == 0x088E5844u) goto L_088E5844;
    return;
L_088E5844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32112)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088E4A34;
      }
      goto L_088E586C;
    }
L_088E586C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_088E58B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5B84;
      }
      goto L_088E590C;
    }
L_088E590C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_088E5B88;
      }
      goto L_088E5918;
    }
L_088E5918:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[20] = (1u << 16u);
      if (branch_taken) {
          goto L_088E593C;
      }
      goto L_088E5924;
    }
L_088E5924:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E593C;
      }
      goto L_088E592C;
    }
L_088E592C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5958;
      }
      goto L_088E593C;
    }
L_088E593C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_088E5958;
      }
      goto L_088E5944;
    }
L_088E5944:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5958;
      }
      goto L_088E594C;
    }
L_088E594C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_088E5958;
L_088E5958:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_088E598C;
      }
      goto L_088E5964;
    }
L_088E5964:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_088E598C;
      }
      goto L_088E5970;
    }
L_088E5970:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_088E598C;
      }
      goto L_088E597C;
    }
L_088E597C:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088E59AC;
      }
      goto L_088E5988;
    }
L_088E5988:
    ctx.gpr[4] = (16880u << 16u);
    goto L_088E598C;
L_088E598C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (17062u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[4] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5A8C;
      }
      goto L_088E59AC;
    }
L_088E59AC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (16808u << 16u);
      if (branch_taken) {
          goto L_088E59D0;
      }
      goto L_088E59B4;
    }
L_088E59B4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (16808u << 16u);
      if (branch_taken) {
          goto L_088E59D0;
      }
      goto L_088E59C0;
    }
L_088E59C0:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E59F8;
      }
      goto L_088E59CC;
    }
L_088E59CC:
    ctx.gpr[4] = (16808u << 16u);
    goto L_088E59D0;
L_088E59D0:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (17050u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[4] = (16932u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5A8C;
      }
      goto L_088E59F8;
    }
L_088E59F8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_088E5A2C;
      }
      goto L_088E5A00;
    }
L_088E5A00:
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.gpr[4] = (17050u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[4] = (17034u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5A8C;
      }
      goto L_088E5A2C;
    }
L_088E5A2C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_088E5A60;
      }
      goto L_088E5A34;
    }
L_088E5A34:
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (17110u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[4] = (16984u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5A8C;
      }
      goto L_088E5A60;
    }
L_088E5A60:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (16952u << 16u);
      if (branch_taken) {
          goto L_088E5A8C;
      }
      goto L_088E5A68;
    }
L_088E5A68:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (17050u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[4] = (17072u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088E5A8C;
L_088E5A8C:
    ctx.gpr[31] = (0x088E5A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 320u, 0x088D99C4u>(ctx, &aot_mem) && ctx.pc == 0x088E5A94u) goto L_088E5A94;
    return;
L_088E5A94:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E5AB4;
      }
      goto L_088E5AA4;
    }
L_088E5AA4:
    ctx.gpr[31] = (0x088E5AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 320u, 0x088D99C4u>(ctx, &aot_mem) && ctx.pc == 0x088E5AACu) goto L_088E5AAC;
    return;
L_088E5AAC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088E5AB4;
L_088E5AB4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088E5B3C;
    }
    goto L_088E5AC0;
L_088E5AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    goto L_088E5AD4;
L_088E5AD4:
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E5AD4;
      }
      goto L_088E5B38;
    }
L_088E5B38:
    ctx.gpr[16] = (0u | 0u);
    goto L_088E5B3C;
L_088E5B3C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (1u << 16u);
    goto L_088E5B44;
L_088E5B44:
    ctx.gpr[31] = (0x088E5B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 320u, 0x088D99C4u>(ctx, &aot_mem) && ctx.pc == 0x088E5B4Cu) goto L_088E5B4C;
    return;
L_088E5B4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5BAC;
      }
      goto L_088E5B58;
    }
L_088E5B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32116)));
    ctx.gpr[31] = (0x088E5B6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08906EA8u>(ctx, &aot_mem) && ctx.pc == 0x088E5B6Cu) goto L_088E5B6C;
    return;
L_088E5B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32120), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088E5B44;
      }
      goto L_088E5B84;
    }
L_088E5B84:
    ctx.gpr[6] = (0u | 11u);
    goto L_088E5B88;
L_088E5B88:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_088E5BAC;
      }
      goto L_088E5B90;
    }
L_088E5B90:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E5B9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32116)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08906EA8u>(ctx, &aot_mem) && ctx.pc == 0x088E5B9Cu) goto L_088E5B9C;
    return;
L_088E5B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32120), ctx.gpr[2]);
    goto L_088E5BAC;
L_088E5BAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088E5BDC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[9] << 6u);
    ctx.gpr[7] = (ctx.gpr[9] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_088E5C74;
      }
      goto L_088E5C2C;
    }
L_088E5C2C:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088E5C64;
      }
      goto L_088E5C3C;
    }
L_088E5C3C:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5C5C;
    }
L_088E5C5C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] - ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5C64:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5C6C;
    }
L_088E5C6C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5C74:
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[8] = (0u | 2u);
      if (branch_taken) {
          goto L_088E5CC8;
      }
      goto L_088E5C80;
    }
L_088E5C80:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_088E5CB8;
      }
      goto L_088E5C90;
    }
L_088E5C90:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5CB0;
    }
L_088E5CB0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] - ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5CB8:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5CC0;
    }
L_088E5CC0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5CC8:
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_088E5D1C;
      }
      goto L_088E5CD4;
    }
L_088E5CD4:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_088E5D0C;
      }
      goto L_088E5CE4;
    }
L_088E5CE4:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5D04;
    }
L_088E5D04:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] - ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5D0C:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5D14;
    }
L_088E5D14:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5D1C:
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[8] = (0u | 4u);
      if (branch_taken) {
          goto L_088E5DA4;
      }
      goto L_088E5D28;
    }
L_088E5D28:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[8] != ctx.gpr[9]) {
    ctx.gpr[6] = (0u | 9u);
        goto L_088E5D60;
    }
    goto L_088E5D38;
L_088E5D38:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5D58;
    }
L_088E5D58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] - ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5D60:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(796));
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5D68;
    }
L_088E5D68:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-3612)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5D9C;
    }
L_088E5D9C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5DA4:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5DAC;
    }
L_088E5DAC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (0u | 5u);
    if (ctx.gpr[8] != ctx.gpr[9]) {
    ctx.gpr[6] = (0u | 10u);
        goto L_088E5DE4;
    }
    goto L_088E5DBC;
L_088E5DBC:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5DDC;
    }
L_088E5DDC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] - ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5DE4:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5DEC;
    }
L_088E5DEC:
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9908)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088E5E30;
      }
      goto L_088E5E2C;
    }
L_088E5E2C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_088E5E30;
L_088E5E30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5E38:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18292), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E5E64u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 449u, 0x0884DC1Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5E64u) goto L_088E5E64;
    return;
L_088E5E64:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 528u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E5E7Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E5E7Cu) goto L_088E5E7C;
    return;
L_088E5E7C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18704), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E5E94u);
    ctx.gpr[6] = (0u | 528u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E5E94u) goto L_088E5E94;
    return;
L_088E5E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E5ED8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 548u, 0x08832970u>(ctx, &aot_mem) && ctx.pc == 0x088E5ED8u) goto L_088E5ED8;
    return;
L_088E5ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E5EE4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 627u, 0x08833120u>(ctx, &aot_mem) && ctx.pc == 0x088E5EE4u) goto L_088E5EE4;
    return;
L_088E5EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(520), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18712), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18713), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088E5F10u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 119u, 0x0884C7BCu>(ctx, &aot_mem) && ctx.pc == 0x088E5F10u) goto L_088E5F10;
    return;
L_088E5F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E5F1Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(461), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 582u, 0x088EA894u>(ctx, &aot_mem) && ctx.pc == 0x088E5F1Cu) goto L_088E5F1C;
    return;
L_088E5F1C:
    ctx.gpr[31] = (0x088E5F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 506u, 0x088EA220u>(ctx, &aot_mem) && ctx.pc == 0x088E5F24u) goto L_088E5F24;
    return;
L_088E5F24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 20u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E5F38u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E5F38u) goto L_088E5F38;
    return;
L_088E5F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(476), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E5F50u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E5F50u) goto L_088E5F50;
    return;
L_088E5F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18716));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[31] = (0x088E5F80u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 506u, 0x0884278Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5F80u) goto L_088E5F80;
    return;
L_088E5F80:
    ctx.gpr[31] = (0x088E5F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 633u, 0x088430A8u>(ctx, &aot_mem) && ctx.pc == 0x088E5F88u) goto L_088E5F88;
    return;
L_088E5F88:
    ctx.gpr[4] = (2190u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x088E5F98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24988));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x088E5F98u) goto L_088E5F98;
    return;
L_088E5F98:
    ctx.gpr[4] = (2190u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x088E5FA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25736));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x088E5FA8u) goto L_088E5FA8;
    return;
L_088E5FA8:
    ctx.gpr[4] = (2190u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x088E5FB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25824));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x088E5FB8u) goto L_088E5FB8;
    return;
L_088E5FB8:
    ctx.gpr[31] = (0x088E5FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 607u, 0x088EAA50u>(ctx, &aot_mem) && ctx.pc == 0x088E5FC0u) goto L_088E5FC0;
    return;
L_088E5FC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5FD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E5FECu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 722u, 0x08806E84u>(ctx, &aot_mem) && ctx.pc == 0x088E5FECu) goto L_088E5FEC;
    return;
L_088E5FEC:
    ctx.gpr[31] = (0x088E5FF4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 724u, 0x08806EA0u>(ctx, &aot_mem) && ctx.pc == 0x088E5FF4u) goto L_088E5FF4;
    return;
L_088E5FF4:
    ctx.gpr[31] = (0x088E5FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 505u, 0x0886732Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5FFCu) goto L_088E5FFC;
    return;
L_088E5FFC:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E602C;
      }
      goto L_088E6014;
    }
L_088E6014:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E601Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E601Cu) goto L_088E601C;
    return;
L_088E601C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    goto L_088E602C;
L_088E602C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E603Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E603Cu) goto L_088E603C;
    return;
L_088E603C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(476), 0u);
      if (branch_taken) {
          goto L_088E6068;
      }
      goto L_088E604C;
    }
L_088E604C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E6060u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6060u) goto L_088E6060;
    return;
L_088E6060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(480), 0u);
    goto L_088E6068;
L_088E6068:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
        goto L_088E6094;
    }
    goto L_088E6074;
L_088E6074:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E6088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6088u) goto L_088E6088;
    return;
L_088E6088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(484), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    goto L_088E6094;
L_088E6094:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
        goto L_088E60BC;
    }
    goto L_088E609C;
L_088E609C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E60B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E60B0u) goto L_088E60B0;
    return;
L_088E60B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(488), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    goto L_088E60BC;
L_088E60BC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
        goto L_088E60E4;
    }
    goto L_088E60C4;
L_088E60C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E60D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E60D8u) goto L_088E60D8;
    return;
L_088E60D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(492), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    goto L_088E60E4;
L_088E60E4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
        goto L_088E610C;
    }
    goto L_088E60EC;
L_088E60EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E6100u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6100u) goto L_088E6100;
    return;
L_088E6100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(496), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    goto L_088E610C;
L_088E610C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
        goto L_088E6134;
    }
    goto L_088E6114;
L_088E6114:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E6128u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6128u) goto L_088E6128;
    return;
L_088E6128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    goto L_088E6134;
L_088E6134:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6154;
      }
      goto L_088E613C;
    }
L_088E613C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E614Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E614Cu) goto L_088E614C;
    return;
L_088E614C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    goto L_088E6154;
L_088E6154:
    ctx.gpr[31] = (0x088E615Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 225u, 0x08835114u>(ctx, &aot_mem) && ctx.pc == 0x088E615Cu) goto L_088E615C;
    return;
L_088E615C:
    ctx.gpr[31] = (0x088E6164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 507u, 0x088427A0u>(ctx, &aot_mem) && ctx.pc == 0x088E6164u) goto L_088E6164;
    return;
L_088E6164:
    ctx.gpr[31] = (0x088E616Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 634u, 0x088430BCu>(ctx, &aot_mem) && ctx.pc == 0x088E616Cu) goto L_088E616C;
    return;
L_088E616C:
    ctx.gpr[31] = (0x088E6174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 616u, 0x088EAB30u>(ctx, &aot_mem) && ctx.pc == 0x088E6174u) goto L_088E6174;
    return;
L_088E6174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E6184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6184u) goto L_088E6184;
    return;
L_088E6184:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18704), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E619C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(18712)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E6278;
      }
      goto L_088E61CC;
    }
L_088E61CC:
    ctx.gpr[31] = (0x088E61D4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088E61D4u) goto L_088E61D4;
    return;
L_088E61D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(461)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E6204;
      }
      goto L_088E61E4;
    }
L_088E61E4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x088E61F0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 141u, 0x0884C934u>(ctx, &aot_mem) && ctx.pc == 0x088E61F0u) goto L_088E61F0;
    return;
L_088E61F0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E646C;
      }
      goto L_088E61F8;
    }
L_088E61F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(461), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088E646C;
      }
      goto L_088E6204;
    }
L_088E6204:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18713)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6224;
      }
      goto L_088E6210;
    }
L_088E6210:
    ctx.gpr[31] = (0x088E6218u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 716u, 0x08806E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6218u) goto L_088E6218;
    return;
L_088E6218:
    ctx.gpr[31] = (0x088E6220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 518u, 0x08867460u>(ctx, &aot_mem) && ctx.pc == 0x088E6220u) goto L_088E6220;
    return;
L_088E6220:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18713), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_088E6224;
L_088E6224:
    ctx.gpr[31] = (0x088E622Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 715u, 0x08806E20u>(ctx, &aot_mem) && ctx.pc == 0x088E622Cu) goto L_088E622C;
    return;
L_088E622C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E646C;
      }
      goto L_088E6234;
    }
L_088E6234:
    ctx.gpr[31] = (0x088E623Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 449u, 0x0884DC1Cu>(ctx, &aot_mem) && ctx.pc == 0x088E623Cu) goto L_088E623C;
    return;
L_088E623C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6254;
      }
      goto L_088E624C;
    }
L_088E624C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18712), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088E646C;
      }
      goto L_088E6254;
    }
L_088E6254:
    ctx.gpr[31] = (0x088E625Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 591u, 0x088EA928u>(ctx, &aot_mem) && ctx.pc == 0x088E625Cu) goto L_088E625C;
    return;
L_088E625C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6278:
    ctx.gpr[31] = (0x088E6280u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088E6280u) goto L_088E6280;
    return;
L_088E6280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088E62DC;
      }
      goto L_088E6290;
    }
L_088E6290:
    ctx.gpr[31] = (0x088E6298u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088E6298u) goto L_088E6298;
    return;
L_088E6298:
    ctx.gpr[31] = (0x088E62A0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 718u, 0x08806E50u>(ctx, &aot_mem) && ctx.pc == 0x088E62A0u) goto L_088E62A0;
    return;
L_088E62A0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E646C;
      }
      goto L_088E62A8;
    }
L_088E62A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088E62B8u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x088E62B8u) goto L_088E62B8;
    return;
L_088E62B8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E62CCu);
    ctx.gpr[6] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E62CCu) goto L_088E62CC;
    return;
L_088E62CC:
    ctx.gpr[31] = (0x088E62D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 628u, 0x088EABFCu>(ctx, &aot_mem) && ctx.pc == 0x088E62D4u) goto L_088E62D4;
    return;
L_088E62D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E646C;
      }
      goto L_088E62DC;
    }
L_088E62DC:
    ctx.gpr[31] = (0x088E62E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x088E62E4u) goto L_088E62E4;
    return;
L_088E62E4:
    ctx.gpr[31] = (0x088E62ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 565u, 0x0881E2BCu>(ctx, &aot_mem) && ctx.pc == 0x088E62ECu) goto L_088E62EC;
    return;
L_088E62EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E6320;
      }
      goto L_088E62FC;
    }
L_088E62FC:
    ctx.gpr[31] = (0x088E6304u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088E6304u) goto L_088E6304;
    return;
L_088E6304:
    ctx.gpr[31] = (0x088E630Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1018u, 0x0881BEC4u>(ctx, &aot_mem) && ctx.pc == 0x088E630Cu) goto L_088E630C;
    return;
L_088E630C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E646C;
      }
      goto L_088E6314;
    }
L_088E6314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    goto L_088E6320;
L_088E6320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E6348;
      }
      goto L_088E632C;
    }
L_088E632C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088E634C;
    }
    goto L_088E6340;
L_088E6340:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    goto L_088E6348;
L_088E6348:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088E634C;
L_088E634C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E6370;
      }
      goto L_088E6354;
    }
L_088E6354:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
        goto L_088E6374;
    }
    goto L_088E6368;
L_088E6368:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    goto L_088E6370;
L_088E6370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    goto L_088E6374;
L_088E6374:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E63A0;
    }
    goto L_088E6380;
L_088E6380:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E6388u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6388u) goto L_088E6388;
    return;
L_088E6388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E63A0;
L_088E63A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E63BC;
      }
      goto L_088E63A8;
    }
L_088E63A8:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x088E63B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E63B0u) goto L_088E63B0;
    return;
L_088E63B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088E63BC;
L_088E63BC:
    ctx.gpr[31] = (0x088E63C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 628u, 0x088EABFCu>(ctx, &aot_mem) && ctx.pc == 0x088E63C4u) goto L_088E63C4;
    return;
L_088E63C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E63E0;
      }
      goto L_088E63D8;
    }
L_088E63D8:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E63E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E63E0u) goto L_088E63E0;
    return;
L_088E63E0:
    ctx.gpr[31] = (0x088E63E8u);
    ctx.gpr[4] = (0u | 32768u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 170u, 0x08944C38u>(ctx, &aot_mem) && ctx.pc == 0x088E63E8u) goto L_088E63E8;
    return;
L_088E63E8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088E6448;
      }
      goto L_088E63F0;
    }
L_088E63F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088E6448;
    }
    goto L_088E6400;
L_088E6400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 1024u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_088E641C;
      }
      goto L_088E6410;
    }
L_088E6410:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    goto L_088E641C;
L_088E641C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 2048u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088E6448;
      }
      goto L_088E642C;
    }
L_088E642C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088E6448;
L_088E6448:
    ctx.gpr[31] = (0x088E6450u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 712u, 0x08817360u>(ctx, &aot_mem) && ctx.pc == 0x088E6450u) goto L_088E6450;
    return;
L_088E6450:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(444));
      if (branch_taken) {
          goto L_088E646C;
      }
      goto L_088E6464;
    }
L_088E6464:
    ctx.gpr[31] = (0x088E646Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 363u, 0x0883ACDCu>(ctx, &aot_mem) && ctx.pc == 0x088E646Cu) goto L_088E646C;
    return;
L_088E646C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E64D4;
      }
      goto L_088E64A8;
    }
L_088E64A8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E64D4;
      }
      goto L_088E64B4;
    }
L_088E64B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E64CC;
      }
      goto L_088E64C4;
    }
L_088E64C4:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x088E64CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E64CCu) goto L_088E64CC;
    return;
L_088E64CC:
    ctx.gpr[31] = (0x088E64D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 630u, 0x088EAC18u>(ctx, &aot_mem) && ctx.pc == 0x088E64D4u) goto L_088E64D4;
    return;
L_088E64D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E64E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E652C;
      }
      goto L_088E6500;
    }
L_088E6500:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E652C;
      }
      goto L_088E650C;
    }
L_088E650C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6524;
      }
      goto L_088E651C;
    }
L_088E651C:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x088E6524u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6524u) goto L_088E6524;
    return;
L_088E6524:
    ctx.gpr[31] = (0x088E652Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 632u, 0x088EAC34u>(ctx, &aot_mem) && ctx.pc == 0x088E652Cu) goto L_088E652C;
    return;
L_088E652C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6538:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18716));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E65AC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(18716));
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
    ctx.gpr[9] = (ctx.gpr[4] << 4u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6600:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6644u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E6644u) goto L_088E6644;
    return;
L_088E6644:
    ctx.gpr[31] = (0x088E664Cu);
    // nop
    goto L_088E6538;
L_088E664C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6668u);
    // nop
    goto L_088E6600;
L_088E6668:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[17] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E6708;
      }
      goto L_088E6698;
    }
L_088E6698:
    ctx.gpr[31] = (0x088E66A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E66A0u) goto L_088E66A0;
    return;
L_088E66A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E6708;
      }
      goto L_088E66A8;
    }
L_088E66A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E66C8;
      }
      goto L_088E66B8;
    }
L_088E66B8:
    ctx.gpr[31] = (0x088E66C0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088E65AC;
L_088E66C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6700;
      }
      goto L_088E66C8;
    }
L_088E66C8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088E66E0;
      }
      goto L_088E66D0;
    }
L_088E66D0:
    ctx.gpr[31] = (0x088E66D8u);
    ctx.gpr[4] = (0u | 6u);
    goto L_088E65AC;
L_088E66D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6700;
      }
      goto L_088E66E0;
    }
L_088E66E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E66F8;
      }
      goto L_088E66E8;
    }
L_088E66E8:
    ctx.gpr[31] = (0x088E66F0u);
    ctx.gpr[4] = (0u | 11u);
    goto L_088E65AC;
L_088E66F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6700;
      }
      goto L_088E66F8;
    }
L_088E66F8:
    ctx.gpr[31] = (0x088E6700u);
    ctx.gpr[4] = (0u | 16u);
    goto L_088E65AC;
L_088E6700:
    ctx.gpr[31] = (0x088E6708u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6708u) goto L_088E6708;
    return;
L_088E6708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E67A0;
    }
    goto L_088E6718;
L_088E6718:
    ctx.gpr[31] = (0x088E6720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E6720u) goto L_088E6720;
    return;
L_088E6720:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E679C;
      }
      goto L_088E6728;
    }
L_088E6728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18716));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (2190u << 16u);
    ctx.gpr[31] = (0x088E6764u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24532));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088E6764u) goto L_088E6764;
    return;
L_088E6764:
    ctx.gpr[31] = (0x088E676Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088E676Cu) goto L_088E676C;
    return;
L_088E676C:
    ctx.gpr[31] = (0x088E6774u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088E6774u) goto L_088E6774;
    return;
L_088E6774:
    ctx.gpr[31] = (0x088E677Cu);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088E677Cu) goto L_088E677C;
    return;
L_088E677C:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17012));
    ctx.gpr[31] = (0x088E6794u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17564));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088E6794u) goto L_088E6794;
    return;
L_088E6794:
    ctx.gpr[31] = (0x088E679Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E679Cu) goto L_088E679C;
    return;
L_088E679C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E67A0;
L_088E67A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088E67F0;
      }
      goto L_088E67A8;
    }
L_088E67A8:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E67E0;
      }
      goto L_088E67C0;
    }
L_088E67C0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E67D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E67D0u) goto L_088E67D0;
    return;
L_088E67D0:
    ctx.gpr[31] = (0x088E67D8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E67D8u) goto L_088E67D8;
    return;
L_088E67D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E67EC;
      }
      goto L_088E67E0;
    }
L_088E67E0:
    ctx.gpr[31] = (0x088E67E8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E67E8u) goto L_088E67E8;
    return;
L_088E67E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E67EC;
L_088E67EC:
    ctx.gpr[5] = (0u | 4u);
    goto L_088E67F0;
L_088E67F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E6830;
      }
      goto L_088E67F8;
    }
L_088E67F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E6828;
      }
      goto L_088E6808;
    }
L_088E6808:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E6818u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E6818u) goto L_088E6818;
    return;
L_088E6818:
    ctx.gpr[31] = (0x088E6820u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6820u) goto L_088E6820;
    return;
L_088E6820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6830;
      }
      goto L_088E6828;
    }
L_088E6828:
    ctx.gpr[31] = (0x088E6830u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6830u) goto L_088E6830;
    return;
L_088E6830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6844:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E684C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E686Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E686Cu) goto L_088E686C;
    return;
L_088E686C:
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E68A4;
      }
      goto L_088E6894;
    }
L_088E6894:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088E6928;
      }
      goto L_088E68A4;
    }
L_088E68A4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E68BC;
      }
      goto L_088E68AC;
    }
L_088E68AC:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
      if (branch_taken) {
          goto L_088E6928;
      }
      goto L_088E68BC;
    }
L_088E68BC:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[9] != ctx.gpr[4]) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
        goto L_088E68D8;
    }
    goto L_088E68C8;
L_088E68C8:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(378)));
      if (branch_taken) {
          goto L_088E6928;
      }
      goto L_088E68D8;
    }
L_088E68D8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E68EC;
      }
      goto L_088E68E0;
    }
L_088E68E0:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(444)));
    goto L_088E68EC;
L_088E68EC:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6900;
      }
      goto L_088E68F4;
    }
L_088E68F4:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(588)));
    goto L_088E6900;
L_088E6900:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E6918;
      }
      goto L_088E6908;
    }
L_088E6908:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (0u | 3u);
    goto L_088E6918;
L_088E6918:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088E6928;
      }
      goto L_088E6920;
    }
L_088E6920:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(638)));
    goto L_088E6928;
L_088E6928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_088E693C;
    }
    goto L_088E693C;
L_088E693C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1004), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1008), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088E6A58;
      }
      goto L_088E699C;
    }
L_088E699C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(940));
    ctx.gpr[31] = (0x088E69A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 728u, 0x088336E8u>(ctx, &aot_mem) && ctx.pc == 0x088E69A8u) goto L_088E69A8;
    return;
L_088E69A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(940), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2484));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(942), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(943), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    ctx.gpr[6] = (ctx.gpr[16] << 6u);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(948));
    ctx.gpr[31] = (0x088E6A04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(740));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E6A04u) goto L_088E6A04;
    return;
L_088E6A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(957));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(480)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E6A30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(749));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E6A30u) goto L_088E6A30;
    return;
L_088E6A30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(974));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(480)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E6A50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(970));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E6A50u) goto L_088E6A50;
    return;
L_088E6A50:
    ctx.gpr[31] = (0x088E6A58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 731u, 0x08833714u>(ctx, &aot_mem) && ctx.pc == 0x088E6A58u) goto L_088E6A58;
    return;
L_088E6A58:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E6A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6A64u) goto L_088E6A64;
    return;
L_088E6A64:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088E6A90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 54u, 0x088343C8u>(ctx, &aot_mem) && ctx.pc == 0x088E6A90u) goto L_088E6A90;
    return;
L_088E6A90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1004)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6AB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_088E6B1C;
      }
      goto L_088E6AD8;
    }
L_088E6AD8:
    ctx.gpr[4] = (5u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17180));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E6AF8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6AF8u) goto L_088E6AF8;
    return;
L_088E6AF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(480), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E6B10u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E6B10u) goto L_088E6B10;
    return;
L_088E6B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088E6B1C;
L_088E6B1C:
    ctx.gpr[31] = (0x088E6B24u);
    // nop
    goto L_088E6538;
L_088E6B24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6B38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6B48u);
    // nop
    goto L_088E6600;
L_088E6B48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E6CAC;
      }
      goto L_088E6B88;
    }
L_088E6B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 8u);
      if (branch_taken) {
          goto L_088E6BD4;
      }
      goto L_088E6B98;
    }
L_088E6B98:
    ctx.gpr[31] = (0x088E6BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E6BA0u) goto L_088E6BA0;
    return;
L_088E6BA0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E6BD8;
    }
    goto L_088E6BA8;
L_088E6BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E6BCCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    goto L_088E65AC;
L_088E6BCC:
    ctx.gpr[31] = (0x088E6BD4u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6BD4u) goto L_088E6BD4;
    return;
L_088E6BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E6BD8;
L_088E6BD8:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E6C30;
    }
    goto L_088E6BE4;
L_088E6BE4:
    ctx.gpr[31] = (0x088E6BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E6BECu) goto L_088E6BEC;
    return;
L_088E6BEC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E6C30;
    }
    goto L_088E6BF4;
L_088E6BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E6C1C;
      }
      goto L_088E6C04;
    }
L_088E6C04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E6C14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E6C14u) goto L_088E6C14;
    return;
L_088E6C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(480), 0u);
    goto L_088E6C1C;
L_088E6C1C:
    ctx.gpr[31] = (0x088E6C24u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088E65AC;
L_088E6C24:
    ctx.gpr[31] = (0x088E6C2Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6C2Cu) goto L_088E6C2C;
    return;
L_088E6C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E6C30;
L_088E6C30:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088E6C70;
      }
      goto L_088E6C38;
    }
L_088E6C38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E6C60;
      }
      goto L_088E6C4C;
    }
L_088E6C4C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E6C58u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6C58u) goto L_088E6C58;
    return;
L_088E6C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E6C6C;
      }
      goto L_088E6C60;
    }
L_088E6C60:
    ctx.gpr[31] = (0x088E6C68u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6C68u) goto L_088E6C68;
    return;
L_088E6C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E6C6C;
L_088E6C6C:
    ctx.gpr[5] = (0u | 4u);
    goto L_088E6C70;
L_088E6C70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6CB4;
      }
      goto L_088E6C78;
    }
L_088E6C78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E6C9C;
      }
      goto L_088E6C88;
    }
L_088E6C88:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E6C94u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6C94u) goto L_088E6C94;
    return;
L_088E6C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6CB4;
      }
      goto L_088E6C9C;
    }
L_088E6C9C:
    ctx.gpr[31] = (0x088E6CA4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6CA4u) goto L_088E6CA4;
    return;
L_088E6CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6CB4;
      }
      goto L_088E6CAC;
    }
L_088E6CAC:
    ctx.gpr[31] = (0x088E6CB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 387u, 0x088EDFDCu>(ctx, &aot_mem) && ctx.pc == 0x088E6CB4u) goto L_088E6CB4;
    return;
L_088E6CB4:
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
L_088E6CCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6CD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6D24u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 506u, 0x088EA220u>(ctx, &aot_mem) && ctx.pc == 0x088E6D24u) goto L_088E6D24;
    return;
L_088E6D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088E6D3Cu);
    ctx.gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E6D3Cu) goto L_088E6D3C;
    return;
L_088E6D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6D58;
      }
      goto L_088E6D4C;
    }
L_088E6D4C:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 41u);
      if (branch_taken) {
          goto L_088E6D98;
      }
      goto L_088E6D58;
    }
L_088E6D58:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_088E6D6C;
      }
      goto L_088E6D60;
    }
L_088E6D60:
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 57u);
      if (branch_taken) {
          goto L_088E6D98;
      }
      goto L_088E6D6C;
    }
L_088E6D6C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088E6D80;
      }
      goto L_088E6D74;
    }
L_088E6D74:
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 78u);
      if (branch_taken) {
          goto L_088E6D98;
      }
      goto L_088E6D80;
    }
L_088E6D80:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 89u);
      if (branch_taken) {
          goto L_088E6D94;
      }
      goto L_088E6D88;
    }
L_088E6D88:
    ctx.gpr[5] = (0u | 78u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 89u);
      if (branch_taken) {
          goto L_088E6D98;
      }
      goto L_088E6D94;
    }
L_088E6D94:
    ctx.gpr[7] = (0u | 125u);
    goto L_088E6D98;
L_088E6D98:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(2484));
      if (branch_taken) {
          goto L_088E6DF8;
      }
      goto L_088E6DA8;
    }
L_088E6DA8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    goto L_088E6DB0;
L_088E6DB0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_088E6DEC;
    }
    goto L_088E6DCC;
L_088E6DCC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088E6DEC;
L_088E6DEC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2484));
      if (branch_taken) {
          goto L_088E6DB0;
      }
      goto L_088E6DF8;
    }
L_088E6DF8:
    ctx.gpr[31] = (0x088E6E00u);
    // nop
    goto L_088E6538;
L_088E6E00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6E14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6E24u);
    // nop
    goto L_088E6600;
L_088E6E24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6E30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6E38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6E6Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    goto L_088E6538;
L_088E6E6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6E78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6E88u);
    // nop
    goto L_088E6600;
L_088E6E88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6E94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6E9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088E6EC0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_088E6538;
L_088E6EC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6ECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6EDCu);
    // nop
    goto L_088E6600;
L_088E6EDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6EE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6EF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6F14u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    goto L_088E6538;
L_088E6F14:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E6F30u);
    // nop
    goto L_088E6600;
L_088E6F30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6F3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E7074;
      }
      goto L_088E6F74;
    }
L_088E6F74:
    ctx.gpr[31] = (0x088E6F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E6F7Cu) goto L_088E6F7C;
    return;
L_088E6F7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E7074;
      }
      goto L_088E6F84;
    }
L_088E6F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7034;
      }
      goto L_088E6F94;
    }
L_088E6F94:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2484));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E6FDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 546u, 0x08832944u>(ctx, &aot_mem) && ctx.pc == 0x088E6FDCu) goto L_088E6FDC;
    return;
L_088E6FDC:
    ctx.gpr[31] = (0x088E6FE4u);
    // nop
    goto L_088E6950;
L_088E6FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E700C;
      }
      goto L_088E6FF4;
    }
L_088E6FF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E7004u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7004u) goto L_088E7004;
    return;
L_088E7004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(480), 0u);
    goto L_088E700C;
L_088E700C:
    ctx.gpr[31] = (0x088E7014u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088E65AC;
L_088E7014:
    ctx.gpr[31] = (0x088E701Cu);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E701Cu) goto L_088E701C;
    return;
L_088E701C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x088E702Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E702Cu) goto L_088E702C;
    return;
L_088E702C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E7078;
      }
      goto L_088E7034;
    }
L_088E7034:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088E7054;
      }
      goto L_088E7040;
    }
L_088E7040:
    ctx.gpr[31] = (0x088E7048u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 728u, 0x088336E8u>(ctx, &aot_mem) && ctx.pc == 0x088E7048u) goto L_088E7048;
    return;
L_088E7048:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088E7054u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E7054u) goto L_088E7054;
    return;
L_088E7054:
    ctx.gpr[31] = (0x088E705Cu);
    ctx.gpr[4] = (0u | 2u);
    goto L_088E65AC;
L_088E705C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E7074u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7074u) goto L_088E7074;
    return;
L_088E7074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E7078;
L_088E7078:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E7144;
    }
    goto L_088E7084;
L_088E7084:
    ctx.gpr[31] = (0x088E708Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E708Cu) goto L_088E708C;
    return;
L_088E708C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E7140;
      }
      goto L_088E7094;
    }
L_088E7094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E711C;
      }
      goto L_088E70A8;
    }
L_088E70A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2484));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E710C;
      }
      goto L_088E70DC;
    }
L_088E70DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088E70FC;
      }
      goto L_088E70E8;
    }
L_088E70E8:
    ctx.gpr[31] = (0x088E70F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 728u, 0x088336E8u>(ctx, &aot_mem) && ctx.pc == 0x088E70F0u) goto L_088E70F0;
    return;
L_088E70F0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088E70FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E70FCu) goto L_088E70FC;
    return;
L_088E70FC:
    ctx.gpr[31] = (0x088E7104u);
    ctx.gpr[4] = (0u | 2u);
    goto L_088E65AC;
L_088E7104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E7128;
      }
      goto L_088E710C;
    }
L_088E710C:
    ctx.gpr[31] = (0x088E7114u);
    ctx.gpr[4] = (0u | 3u);
    goto L_088E65AC;
L_088E7114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E7128;
      }
      goto L_088E711C;
    }
L_088E711C:
    ctx.gpr[31] = (0x088E7124u);
    ctx.gpr[4] = (0u | 4u);
    goto L_088E65AC;
L_088E7124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    goto L_088E7128;
L_088E7128:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088E7140u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7140u) goto L_088E7140;
    return;
L_088E7140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E7144;
L_088E7144:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E7180;
      }
      goto L_088E714C;
    }
L_088E714C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088E7174;
      }
      goto L_088E7160;
    }
L_088E7160:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[18]);
    ctx.gpr[31] = (0x088E716Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E716Cu) goto L_088E716C;
    return;
L_088E716C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E7180;
      }
      goto L_088E7174;
    }
L_088E7174:
    ctx.gpr[31] = (0x088E717Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E717Cu) goto L_088E717C;
    return;
L_088E717C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E7180;
L_088E7180:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E71B4;
      }
      goto L_088E7188;
    }
L_088E7188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E71AC;
      }
      goto L_088E7198;
    }
L_088E7198:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088E71A4u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E71A4u) goto L_088E71A4;
    return;
L_088E71A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E71B4;
      }
      goto L_088E71AC;
    }
L_088E71AC:
    ctx.gpr[31] = (0x088E71B4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E71B4u) goto L_088E71B4;
    return;
L_088E71B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E71D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E71E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E71E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088E7394;
      }
      goto L_088E723C;
    }
L_088E723C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(940));
    ctx.gpr[31] = (0x088E7248u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 741u, 0x088337DCu>(ctx, &aot_mem) && ctx.pc == 0x088E7248u) goto L_088E7248;
    return;
L_088E7248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(940), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(942), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(943), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    ctx.gpr[6] = (ctx.gpr[16] << 7u);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    ctx.gpr[7] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(948));
    ctx.gpr[31] = (0x088E72A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(836));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E72A4u) goto L_088E72A4;
    return;
L_088E72A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(957));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(845));
    ctx.gpr[31] = (0x088E72D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E72D4u) goto L_088E72D4;
    return;
L_088E72D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(974));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E72F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1107));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E72F0u) goto L_088E72F0;
    return;
L_088E72F0:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(983));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E7300u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E7300u) goto L_088E7300;
    return;
L_088E7300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E7320u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1116));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E7320u) goto L_088E7320;
    return;
L_088E7320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E733Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1133));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E733Cu) goto L_088E733C;
    return;
L_088E733C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1009));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E734Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E734Cu) goto L_088E734C;
    return;
L_088E734C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E736Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1142));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E736Cu) goto L_088E736C;
    return;
L_088E736C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1026));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(484)));
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E738Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1100));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E738Cu) goto L_088E738C;
    return;
L_088E738C:
    ctx.gpr[31] = (0x088E7394u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 744u, 0x08833808u>(ctx, &aot_mem) && ctx.pc == 0x088E7394u) goto L_088E7394;
    return;
L_088E7394:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E73A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E73A0u) goto L_088E73A0;
    return;
L_088E73A0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(266), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088E73CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 54u, 0x088343C8u>(ctx, &aot_mem) && ctx.pc == 0x088E73CCu) goto L_088E73CC;
    return;
L_088E73CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E73F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_088E746C;
      }
      goto L_088E7428;
    }
L_088E7428:
    ctx.gpr[4] = (7u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(9408));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E7448u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7448u) goto L_088E7448;
    return;
L_088E7448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(484), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E7460u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E7460u) goto L_088E7460;
    return;
L_088E7460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088E746C;
L_088E746C:
    ctx.gpr[31] = (0x088E7474u);
    // nop
    goto L_088E6538;
L_088E7474:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E7498u);
    // nop
    goto L_088E6600;
L_088E7498:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E74A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E75FC;
      }
      goto L_088E74D8;
    }
L_088E74D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 8u);
      if (branch_taken) {
          goto L_088E7524;
      }
      goto L_088E74E8;
    }
L_088E74E8:
    ctx.gpr[31] = (0x088E74F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E74F0u) goto L_088E74F0;
    return;
L_088E74F0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E7528;
    }
    goto L_088E74F8;
L_088E74F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E751Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    goto L_088E65AC;
L_088E751C:
    ctx.gpr[31] = (0x088E7524u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7524u) goto L_088E7524;
    return;
L_088E7524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E7528;
L_088E7528:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E7580;
    }
    goto L_088E7534;
L_088E7534:
    ctx.gpr[31] = (0x088E753Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E753Cu) goto L_088E753C;
    return;
L_088E753C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E7580;
    }
    goto L_088E7544;
L_088E7544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E756C;
      }
      goto L_088E7554;
    }
L_088E7554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E7564u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7564u) goto L_088E7564;
    return;
L_088E7564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(484), 0u);
    goto L_088E756C;
L_088E756C:
    ctx.gpr[31] = (0x088E7574u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088E65AC;
L_088E7574:
    ctx.gpr[31] = (0x088E757Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E757Cu) goto L_088E757C;
    return;
L_088E757C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E7580;
L_088E7580:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088E75C0;
      }
      goto L_088E7588;
    }
L_088E7588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E75B0;
      }
      goto L_088E759C;
    }
L_088E759C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E75A8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E75A8u) goto L_088E75A8;
    return;
L_088E75A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E75BC;
      }
      goto L_088E75B0;
    }
L_088E75B0:
    ctx.gpr[31] = (0x088E75B8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E75B8u) goto L_088E75B8;
    return;
L_088E75B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E75BC;
L_088E75BC:
    ctx.gpr[5] = (0u | 4u);
    goto L_088E75C0;
L_088E75C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E7604;
      }
      goto L_088E75C8;
    }
L_088E75C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E75EC;
      }
      goto L_088E75D8;
    }
L_088E75D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E75E4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E75E4u) goto L_088E75E4;
    return;
L_088E75E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7604;
      }
      goto L_088E75EC;
    }
L_088E75EC:
    ctx.gpr[31] = (0x088E75F4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E75F4u) goto L_088E75F4;
    return;
L_088E75F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7604;
      }
      goto L_088E75FC;
    }
L_088E75FC:
    ctx.gpr[31] = (0x088E7604u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 387u, 0x088EDFDCu>(ctx, &aot_mem) && ctx.pc == 0x088E7604u) goto L_088E7604;
    return;
L_088E7604:
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
L_088E761C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E762C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E7674u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 506u, 0x088EA220u>(ctx, &aot_mem) && ctx.pc == 0x088E7674u) goto L_088E7674;
    return;
L_088E7674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088E768Cu);
    ctx.gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E768Cu) goto L_088E768C;
    return;
L_088E768C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E76A8;
      }
      goto L_088E769C;
    }
L_088E769C:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 23u);
      if (branch_taken) {
          goto L_088E76C0;
      }
      goto L_088E76A8;
    }
L_088E76A8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_088E76BC;
      }
      goto L_088E76B0;
    }
L_088E76B0:
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 37u);
      if (branch_taken) {
          goto L_088E76C0;
      }
      goto L_088E76BC;
    }
L_088E76BC:
    ctx.gpr[7] = (0u | 56u);
    goto L_088E76C0;
L_088E76C0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(8360));
      if (branch_taken) {
          goto L_088E7720;
      }
      goto L_088E76D0;
    }
L_088E76D0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    goto L_088E76D8;
L_088E76D8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_088E7714;
    }
    goto L_088E76F4;
L_088E76F4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088E7714;
L_088E7714:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8360));
      if (branch_taken) {
          goto L_088E76D8;
      }
      goto L_088E7720;
    }
L_088E7720:
    ctx.gpr[31] = (0x088E7728u);
    // nop
    goto L_088E6538;
L_088E7728:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E773C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E774Cu);
    // nop
    goto L_088E6600;
L_088E774C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7758:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7760:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E779Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[5]);
    goto L_088E6538;
L_088E779C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E77A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E77B8u);
    // nop
    goto L_088E6600;
L_088E77B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E77C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E77CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E77D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088E77F0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_088E6538;
L_088E77F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E77FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E780Cu);
    // nop
    goto L_088E6600;
L_088E780C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7818:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7820:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E7844u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    goto L_088E6538;
L_088E7844:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E7860u);
    // nop
    goto L_088E6600;
L_088E7860:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E786C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E79A0;
      }
      goto L_088E78A0;
    }
L_088E78A0:
    ctx.gpr[31] = (0x088E78A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E78A8u) goto L_088E78A8;
    return;
L_088E78A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E79A0;
      }
      goto L_088E78B0;
    }
L_088E78B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7960;
      }
      goto L_088E78C0;
    }
L_088E78C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8360));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E7900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 546u, 0x08832944u>(ctx, &aot_mem) && ctx.pc == 0x088E7900u) goto L_088E7900;
    return;
L_088E7900:
    ctx.gpr[31] = (0x088E7908u);
    // nop
    goto L_088E71E8;
L_088E7908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E7938;
      }
      goto L_088E7920;
    }
L_088E7920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E7930u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7930u) goto L_088E7930;
    return;
L_088E7930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(484), 0u);
    goto L_088E7938;
L_088E7938:
    ctx.gpr[31] = (0x088E7940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E7940u) goto L_088E7940;
    return;
L_088E7940:
    ctx.gpr[31] = (0x088E7948u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088E65AC;
L_088E7948:
    ctx.gpr[31] = (0x088E7950u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7950u) goto L_088E7950;
    return;
L_088E7950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E79A0;
      }
      goto L_088E7960;
    }
L_088E7960:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088E7990;
      }
      goto L_088E797C;
    }
L_088E797C:
    ctx.gpr[31] = (0x088E7984u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 741u, 0x088337DCu>(ctx, &aot_mem) && ctx.pc == 0x088E7984u) goto L_088E7984;
    return;
L_088E7984:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088E7990u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E7990u) goto L_088E7990;
    return;
L_088E7990:
    ctx.gpr[31] = (0x088E7998u);
    ctx.gpr[4] = (0u | 7u);
    goto L_088E65AC;
L_088E7998:
    ctx.gpr[31] = (0x088E79A0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E79A0u) goto L_088E79A0;
    return;
L_088E79A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E7A70;
    }
    goto L_088E79B0;
L_088E79B0:
    ctx.gpr[31] = (0x088E79B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E79B8u) goto L_088E79B8;
    return;
L_088E79B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E7A6C;
      }
      goto L_088E79C0;
    }
L_088E79C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A5C;
      }
      goto L_088E79E8;
    }
L_088E79E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8360));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A4C;
      }
      goto L_088E7A1C;
    }
L_088E7A1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088E7A3C;
      }
      goto L_088E7A28;
    }
L_088E7A28:
    ctx.gpr[31] = (0x088E7A30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 741u, 0x088337DCu>(ctx, &aot_mem) && ctx.pc == 0x088E7A30u) goto L_088E7A30;
    return;
L_088E7A30:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088E7A3Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E7A3Cu) goto L_088E7A3C;
    return;
L_088E7A3C:
    ctx.gpr[31] = (0x088E7A44u);
    ctx.gpr[4] = (0u | 7u);
    goto L_088E65AC;
L_088E7A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A64;
      }
      goto L_088E7A4C;
    }
L_088E7A4C:
    ctx.gpr[31] = (0x088E7A54u);
    ctx.gpr[4] = (0u | 8u);
    goto L_088E65AC;
L_088E7A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A64;
      }
      goto L_088E7A5C;
    }
L_088E7A5C:
    ctx.gpr[31] = (0x088E7A64u);
    ctx.gpr[4] = (0u | 9u);
    goto L_088E65AC;
L_088E7A64:
    ctx.gpr[31] = (0x088E7A6Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7A6Cu) goto L_088E7A6C;
    return;
L_088E7A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E7A70;
L_088E7A70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088E7AAC;
      }
      goto L_088E7A78;
    }
L_088E7A78:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E7AA0;
      }
      goto L_088E7A8C;
    }
L_088E7A8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E7A98u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7A98u) goto L_088E7A98;
    return;
L_088E7A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E7AAC;
      }
      goto L_088E7AA0;
    }
L_088E7AA0:
    ctx.gpr[31] = (0x088E7AA8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7AA8u) goto L_088E7AA8;
    return;
L_088E7AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E7AAC;
L_088E7AAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E7AE0;
      }
      goto L_088E7AB4;
    }
L_088E7AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7AD8;
      }
      goto L_088E7AC4;
    }
L_088E7AC4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088E7AD0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7AD0u) goto L_088E7AD0;
    return;
L_088E7AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7AE0;
      }
      goto L_088E7AD8;
    }
L_088E7AD8:
    ctx.gpr[31] = (0x088E7AE0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7AE0u) goto L_088E7AE0;
    return;
L_088E7AE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7B00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7B08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1012), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1008), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1004), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1020), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088E7C74;
      }
      goto L_088E7B64;
    }
L_088E7B64:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(940));
    ctx.gpr[31] = (0x088E7B70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 756u, 0x088338F8u>(ctx, &aot_mem) && ctx.pc == 0x088E7B70u) goto L_088E7B70;
    return;
L_088E7B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(940), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(942), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(943), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(948));
    ctx.gpr[31] = (0x088E7BD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(692));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E7BD0u) goto L_088E7BD0;
    return;
L_088E7BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(957));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(701));
    ctx.gpr[31] = (0x088E7C00u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E7C00u) goto L_088E7C00;
    return;
L_088E7C00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(974));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(488)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E7C1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(909));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E7C1Cu) goto L_088E7C1C;
    return;
L_088E7C1C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(983));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E7C2Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E7C2Cu) goto L_088E7C2C;
    return;
L_088E7C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E7C4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(918));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E7C4Cu) goto L_088E7C4C;
    return;
L_088E7C4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(488)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E7C6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(905));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E7C6Cu) goto L_088E7C6C;
    return;
L_088E7C6C:
    ctx.gpr[31] = (0x088E7C74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 759u, 0x08833924u>(ctx, &aot_mem) && ctx.pc == 0x088E7C74u) goto L_088E7C74;
    return;
L_088E7C74:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E7C80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7C80u) goto L_088E7C80;
    return;
L_088E7C80:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(378)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(378), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088E7CACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 54u, 0x088343C8u>(ctx, &aot_mem) && ctx.pc == 0x088E7CACu) goto L_088E7CAC;
    return;
L_088E7CAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1004)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1020)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7CD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_088E7D38;
      }
      goto L_088E7CF8;
    }
L_088E7CF8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (0u | 40788u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E7D14u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7D14u) goto L_088E7D14;
    return;
L_088E7D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(488), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E7D2Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E7D2Cu) goto L_088E7D2C;
    return;
L_088E7D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088E7D38;
L_088E7D38:
    ctx.gpr[31] = (0x088E7D40u);
    // nop
    goto L_088E6538;
L_088E7D40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E7D64u);
    // nop
    goto L_088E6600;
L_088E7D64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7D70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E7EC8;
      }
      goto L_088E7DA4;
    }
L_088E7DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 8u);
      if (branch_taken) {
          goto L_088E7DF0;
      }
      goto L_088E7DB4;
    }
L_088E7DB4:
    ctx.gpr[31] = (0x088E7DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E7DBCu) goto L_088E7DBC;
    return;
L_088E7DBC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E7DF4;
    }
    goto L_088E7DC4;
L_088E7DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E7DE8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    goto L_088E65AC;
L_088E7DE8:
    ctx.gpr[31] = (0x088E7DF0u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7DF0u) goto L_088E7DF0;
    return;
L_088E7DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E7DF4;
L_088E7DF4:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E7E4C;
    }
    goto L_088E7E00;
L_088E7E00:
    ctx.gpr[31] = (0x088E7E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E7E08u) goto L_088E7E08;
    return;
L_088E7E08:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E7E4C;
    }
    goto L_088E7E10;
L_088E7E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E7E38;
      }
      goto L_088E7E20;
    }
L_088E7E20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E7E30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7E30u) goto L_088E7E30;
    return;
L_088E7E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(488), 0u);
    goto L_088E7E38;
L_088E7E38:
    ctx.gpr[31] = (0x088E7E40u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088E65AC;
L_088E7E40:
    ctx.gpr[31] = (0x088E7E48u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7E48u) goto L_088E7E48;
    return;
L_088E7E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E7E4C;
L_088E7E4C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088E7E8C;
      }
      goto L_088E7E54;
    }
L_088E7E54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E7E7C;
      }
      goto L_088E7E68;
    }
L_088E7E68:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E7E74u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7E74u) goto L_088E7E74;
    return;
L_088E7E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E7E88;
      }
      goto L_088E7E7C;
    }
L_088E7E7C:
    ctx.gpr[31] = (0x088E7E84u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7E84u) goto L_088E7E84;
    return;
L_088E7E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E7E88;
L_088E7E88:
    ctx.gpr[5] = (0u | 4u);
    goto L_088E7E8C;
L_088E7E8C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E7ED0;
      }
      goto L_088E7E94;
    }
L_088E7E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E7EB8;
      }
      goto L_088E7EA4;
    }
L_088E7EA4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E7EB0u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7EB0u) goto L_088E7EB0;
    return;
L_088E7EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7ED0;
      }
      goto L_088E7EB8;
    }
L_088E7EB8:
    ctx.gpr[31] = (0x088E7EC0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7EC0u) goto L_088E7EC0;
    return;
L_088E7EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7ED0;
      }
      goto L_088E7EC8;
    }
L_088E7EC8:
    ctx.gpr[31] = (0x088E7ED0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 387u, 0x088EDFDCu>(ctx, &aot_mem) && ctx.pc == 0x088E7ED0u) goto L_088E7ED0;
    return;
L_088E7ED0:
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
L_088E7EE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7EF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E7F38u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 506u, 0x088EA220u>(ctx, &aot_mem) && ctx.pc == 0x088E7F38u) goto L_088E7F38;
    return;
L_088E7F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088E7F50u);
    ctx.gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E7F50u) goto L_088E7F50;
    return;
L_088E7F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7F6C;
      }
      goto L_088E7F60;
    }
L_088E7F60:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 18u);
      if (branch_taken) {
          goto L_088E7F98;
      }
      goto L_088E7F6C;
    }
L_088E7F6C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_088E7F80;
      }
      goto L_088E7F74;
    }
L_088E7F74:
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 25u);
      if (branch_taken) {
          goto L_088E7F98;
      }
      goto L_088E7F80;
    }
L_088E7F80:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_088E7F94;
      }
      goto L_088E7F88;
    }
L_088E7F88:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 31u);
      if (branch_taken) {
          goto L_088E7F98;
      }
      goto L_088E7F94;
    }
L_088E7F94:
    ctx.gpr[7] = (0u | 33u);
    goto L_088E7F98;
L_088E7F98:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1236));
      if (branch_taken) {
          goto L_088E7FF8;
      }
      goto L_088E7FA8;
    }
L_088E7FA8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    goto L_088E7FB0;
L_088E7FB0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_088E7FEC;
    }
    goto L_088E7FCC;
L_088E7FCC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088E7FEC;
L_088E7FEC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1236));
      if (branch_taken) {
          goto L_088E7FB0;
      }
      goto L_088E7FF8;
    }
L_088E7FF8:
    ctx.gpr[31] = (0x088E8000u);
    // nop
    goto L_088E6538;
}

void recomp_unit_0056(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0056_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_56(Runtime &runtime) {
    runtime.register_generated_unit(56u, 0x088E4000u, 16384u, &recomp_unit_0056, &recomp_unit_0056_entry);
    runtime.register_function(0x088E4000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4090u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4108u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4140u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E419Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4224u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E426Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E429Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E431Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4338u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4380u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4394u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4428u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4470u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E448Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4510u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E451Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4528u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4570u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4578u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4590u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4604u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4628u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E466Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4714u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4730u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4748u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4784u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4800u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E481Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4848u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4850u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4864u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E486Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4890u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4958u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E496Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E503Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E504Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5050u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5058u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5130u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5144u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E514Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5238u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5248u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E524Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E525Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5334u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5348u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5354u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5360u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5378u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5388u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5440u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5450u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5454u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5464u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E548Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E553Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5550u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5558u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5580u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E563Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E564Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5654u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5730u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5740u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5748u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E583Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5844u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E586Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E590Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5918u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5924u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E592Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E593Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5944u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E594Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5958u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5964u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5970u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E597Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5988u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E598Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5ED8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6014u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E601Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E602Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E603Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E604Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6060u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6068u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6074u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6088u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6094u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E609Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6100u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E610Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6114u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6128u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6134u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E613Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E614Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6154u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E615Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6164u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E616Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6184u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E619Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6204u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6210u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6218u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6220u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6224u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E622Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6234u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E623Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E624Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6254u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E625Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6278u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6280u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6290u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6298u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6304u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E630Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6314u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6320u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E632Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6340u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6348u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E634Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6354u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6368u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6370u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6374u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6380u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6388u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6400u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6410u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E641Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E642Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6448u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6450u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6464u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E646Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6488u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6500u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E650Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E651Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E652Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6538u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6600u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6624u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6644u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E664Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6658u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6668u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6674u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6698u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6700u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6708u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6718u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6720u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6764u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E676Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6774u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E677Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6794u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E679Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6808u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6818u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6820u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6828u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6844u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E684Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6854u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E686Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6894u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6900u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6908u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6918u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6920u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6928u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E693Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6950u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E699Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6ECCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7004u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E700Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7014u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E701Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E702Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7034u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7040u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7048u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7054u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E705Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7074u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7078u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7084u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E708Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7094u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7104u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E710Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7114u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E711Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7124u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7128u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7140u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7144u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E714Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7160u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E716Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E717Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7180u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7188u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7198u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E723Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7248u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7300u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7320u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E733Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E734Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E736Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E738Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7394u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7428u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7448u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7460u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E746Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7474u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7488u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7498u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E751Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7528u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7534u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E753Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7544u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7554u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7564u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E756Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7574u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E757Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7580u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7588u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E759Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7604u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E761Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7624u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E762Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7674u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E768Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E769Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7714u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7720u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E773Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E774Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7758u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7760u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7768u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E779Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E780Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7818u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7820u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7828u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7844u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7850u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7860u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E786Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7900u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7908u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7920u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7930u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7938u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7940u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7948u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7950u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7960u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E797Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7984u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7990u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7998u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7ED0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FF8u, &recomp_unit_0056, "recomp_unit_0056");
}
} // namespace psprecomp
